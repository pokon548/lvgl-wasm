<h1 align="center"> Experimental WebAssembly Port of LVGL </h1>

Compile LVGL application to WebAssembly: [`lvgl.html`](docs/lvgl.html), [`lvgl.js`](docs/lvgl.js), [`lvgl.wasm`](docs/lvgl.wasm)

- [Online Demo](https://appkaki.github.io/lvgl-wasm/)

- [LVGL Application Source File](wasm/lvgl.c)

- [GitHub Actions Workflow](.github/workflows/ccpp.yml)

- [Build Script](wasm/lvgl.sh)

- [Makefile](Makefile)

Test of C WebAssembly calling Rust WebAssembly: [`test_rust.html`](docs/test_rust.html), [`test_rust.js`](docs/test_rust.js), [`test_rust.wasm`](docs/test_rust.wasm)

- [Online Demo](https://appkaki.github.io/lvgl-wasm/test_rust.html)

- [C Source File](wasm/test_rust.c)

- [Rust Source File](rust/src/lib.rs)

Completed Features:

1. __Render LVGL to HTML Canvas__ directly via WebAssembly, without using SDL2. See [`lvgl.html`](docs/lvgl.html#L1296-L1357)

1. __Compile actual PineTime Watch Face__ from C++ to WebAssembly: [`Clock.cpp`](https://github.com/JF002/Pinetime/blob/master/src/DisplayApp/Screens/Clock.cpp) was converted to [WebAssembly `clock`](clock)

1. __Simulate PineTime Watch Face__ in Web Browser, for easier development of custom watch faces. [Online Demo](https://appkaki.github.io/lvgl-wasm/lvgl.html)

TODO Features:

1. __Add fonts and symbols__ from [`LittleVgl.cpp`](https://github.com/JF002/Pinetime/blob/master/src/DisplayApp/LittleVgl.cpp)

1. __Adopt RGB565 Framebuffer Format__ used by PineTime Display Controller, so that bitmaps will be rendered correctly

1. __Accept Touch Input__ for LVGL

1. __Convert `Clock.cpp` from C++ to Rust__ with [`lvgl-rs`](https://github.com/rafaelcaricio/lvgl-rs)

1. Allow PineTime Watch Faces to be __built online in Rust with online preview__

References:

- ["Programming with PineTime"](https://lupyuen.github.io/pinetime-rust-mynewt/articles/pinetime#programming-with-pinetime)

- ["Build PineTime Firmware in the Cloud with GitHub Actions"](https://lupyuen.github.io/pinetime-rust-mynewt/articles/cloud)

![Custom PineTime Watch Face created in C++](https://lupyuen.github.io/images/vaultboy-watchface.jpg)

_Custom PineTime Watch Face created in C++_


# Migrating LVGL Version 6 to 7

PineTime runs on LVGL version 6 while our WebAssembly port runs on LVGL version 7. And programs built for LVGL version 6 will not compile with LVGL version 7.

Here's how we migrated our code from LVGL Version 6...

- [Original PineTime Clock.cpp](https://github.com/JF002/Pinetime/blob/master/src/DisplayApp/Screens/Clock.cpp)

- [Original PineTime LittleVgl.cpp](https://github.com/JF002/Pinetime/blob/master/src/DisplayApp/LittleVgl.cpp)

To LVGL Version 7...

- [Converted WebAssembly Clock.cpp](clock/Clock.cpp)

- [Converted WebAssembly LittleVgl.cpp](clock/LittleVgl.cpp)

Compare the original and converted files...

- [Clock.cpp: LVGL Version 6 vs Version 7](https://github.com/AppKaki/lvgl-wasm/compare/clock_before...master#diff-9a3204013cda108f0edc5647e908ea82)

  Click `Files Changed` and look for `Clock.cpp`

- [LittleVgl.cpp: LVGL Version 6 vs Version 7](https://github.com/AppKaki/lvgl-wasm/compare/AppKaki:littlevgl_before...master#diff-c2a76b9cd8a6d2fd824f1441a1e2ed34)

  Click `Files Changed` and look for `LittleVgl.cpp`

## Migrating LVGL user_data

`user_data` has been removed in LVGL 7. Code like this...

```c++
disp_drv.user_data = this;
auto* lvgl = static_cast<LittleVgl*>(disp_drv->user_data);
```

Has been changed to...

```c++
static Pinetime::Components::LittleVgl *disp_drv_user_data = nullptr;
disp_drv_user_data = this;
auto* lvgl = disp_drv_user_data;
```

## Migrating LVGL lv_label_set_style

Code that uses `lv_label_set_style`...

```c++
lv_label_set_style(label_time, LV_LABEL_STYLE_MAIN, LabelBigStyle);
```

Has been changed to `lv_obj_reset_style_list` and `lv_obj_add_style`...

```c++
//  Remove the styles coming from the theme
lv_obj_reset_style_list(label_time, LV_LABEL_PART_MAIN);
//  Then add style
lv_obj_add_style(label_time, LV_LABEL_PART_MAIN, LabelBigStyle);
```

## Migrating LVGL lv_style_copy

Change...

```c++
  lv_style_copy(&def, &lv_style_plain);
  def.text.font = font;
```

To...
```c++
  lv_style_init(&def);
  lv_style_set_text_font(&def, LV_STATE_DEFAULT, font);
```

## TODO

TODO: Fix these errors

```bash
[luppy@pinebook lvgl-wasm]$  em++ -I src/lv_core clock/LittleVgl.cpp 
shared:INFO: EM_IGNORE_SANITY set, ignoring sanity checks
clock/LittleVgl.cpp:221:49: error: no member named 'style' in '_lv_theme_t'
  lv_style_t ** style_p = (lv_style_t **)&theme.style;
                                          ~~~~~ ^
clock/LittleVgl.cpp:222:18: error: use of undeclared identifier 'LV_THEME_STYLE_COUNT'
  for(i = 0; i < LV_THEME_STYLE_COUNT; i++) {
                 ^
clock/LittleVgl.cpp:258:3: error: use of undeclared identifier 'lv_theme_set_current'; did you mean 'lv_theme_set_act'?
  lv_theme_set_current(&theme);
  ^~~~~~~~~~~~~~~~~~~~
  lv_theme_set_act
clock/../src/lv_themes/lv_theme.h:177:6: note: 'lv_theme_set_act' declared here
void lv_theme_set_act(lv_theme_t * th);
     ^
clock/LittleVgl.cpp:263:24: error: use of undeclared identifier 'lv_style_plain'
  lv_style_copy(&def, &lv_style_plain); /*Initialize the default style*/
                       ^
clock/LittleVgl.cpp:264:7: error: no member named 'text' in 'lv_style_t'
  def.text.font = font;
  ~~~ ^
clock/LittleVgl.cpp:266:23: error: use of undeclared identifier 'lv_style_plain'
  lv_style_copy(&bg, &lv_style_plain);
                      ^
clock/LittleVgl.cpp:267:6: error: no member named 'body' in 'lv_style_t'
  bg.body.main_color = LV_COLOR_BLACK;
  ~~ ^
clock/LittleVgl.cpp:268:6: error: no member named 'body' in 'lv_style_t'
  bg.body.grad_color = LV_COLOR_BLACK;
  ~~ ^
clock/LittleVgl.cpp:269:6: error: no member named 'text' in 'lv_style_t'
  bg.text.color      = LV_COLOR_WHITE;
  ~~ ^
clock/LittleVgl.cpp:270:6: error: no member named 'text' in 'lv_style_t'
  bg.text.font       = font;
  ~~ ^
clock/LittleVgl.cpp:271:6: error: no member named 'image' in 'lv_style_t'
  bg.image.color     = LV_COLOR_WHITE;
  ~~ ^
clock/LittleVgl.cpp:274:7: error: no member named 'body' in 'lv_style_t'
  scr.body.padding.bottom = 0;
  ~~~ ^
clock/LittleVgl.cpp:275:7: error: no member named 'body' in 'lv_style_t'
  scr.body.padding.top    = 0;
  ~~~ ^
clock/LittleVgl.cpp:276:7: error: no member named 'body' in 'lv_style_t'
  scr.body.padding.left   = 0;
  ~~~ ^
clock/LittleVgl.cpp:277:7: error: no member named 'body' in 'lv_style_t'
  scr.body.padding.right  = 0;
  ~~~ ^
clock/LittleVgl.cpp:280:6: error: no member named 'body' in 'lv_style_t'
  sb.body.main_color     = lv_color_hsv_to_rgb(hue, 30, 60);
  ~~ ^
clock/LittleVgl.cpp:281:6: error: no member named 'body' in 'lv_style_t'
  sb.body.grad_color     = lv_color_hsv_to_rgb(hue, 30, 60);
  ~~ ^
clock/LittleVgl.cpp:282:6: error: no member named 'body' in 'lv_style_t'
  sb.body.border.width   = 0;
  ~~ ^
clock/LittleVgl.cpp:283:6: error: no member named 'body' in 'lv_style_t'
  sb.body.padding.inner  = LV_DPI / 20;
  ~~ ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
em++: error: '/opt/emscripten-llvm/bin/clang++ -target wasm32-unknown-emscripten -D__EMSCRIPTEN_major__=1 -D__EMSCRIPTEN_minor__=40 -D__EMSCRIPTEN_tiny__=1 -D_LIBCPP_ABI_VERSION=2 -Dunix -D__unix -D__unix__ -Werror=implicit-function-declaration -Xclang -nostdsysteminc -Xclang -isystem/usr/lib/emscripten/system/include/libcxx -Xclang -isystem/usr/lib/emscripten/system/lib/libcxxabi/include -Xclang -isystem/usr/lib/emscripten/system/include/compat -Xclang -isystem/usr/lib/emscripten/system/include -Xclang -isystem/usr/lib/emscripten/system/include/libc -Xclang -isystem/usr/lib/emscripten/system/lib/libc/musl/arch/emscripten -Xclang -isystem/usr/lib/emscripten/system/local/include -Xclang -isystem/usr/lib/emscripten/system/include/SSE -Xclang -isystem/usr/lib/emscripten/system/lib/compiler-rt/include -Xclang -isystem/usr/lib/emscripten/system/lib/libunwind/include -Xclang -isystem/home/luppy/.emscripten_cache/wasm/include -DEMSCRIPTEN -fignore-exceptions -Isrc/lv_core clock/LittleVgl.cpp -Xclang -isystem/usr/lib/emscripten/system/include/SDL -c -o /tmp/emscripten_temp_d_p2h1en/LittleVgl_0.o -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr' failed (1)
[luppy@pinebook lvgl-wasm]$ 
```

# Install emscripten on Ubuntu x64

See the GitHub Actions Workflow...

[`.github/workflows/ccpp.yml`](.github/workflows/ccpp.yml)

# Install emscripten on Arch Linux / Manjaro Arm64

Works on Pinebook Pro with Manjaro...

```bash
sudo pacman -S emscripten
sudo pacman -S wabt
source /etc/profile.d/emscripten.sh
emcc --version
# Shows emscripten version 1.39.20
wasm-as --version
# Shows binaryen version 95
```

This will fail during the build, because emscripten 1.39 needs binaryen version 93, not 95.

We could install binaryen version 93... But emcc will fail with an error "stackSave already exists". That's because binaryen 93 generates the "stackSave" that conflicts with emscripten 1.39.20. [More details here](https://github.com/emscripten-core/emscripten/pull/11166)

To fix this, we install binaryen version 94, __but rename it as version 93__...

```bash
# Download binaryen 94
git clone --branch version_94 https://github.com/WebAssembly/binaryen
cd binaryen
nano CMakeLists.txt 
```

Change
```
   project(binaryen LANGUAGES C CXX VERSION 94)
```
To
```
   project(binaryen LANGUAGES C CXX VERSION 93)
```

Then build and install binaryen...

```bash
cmake .
make -j 5
sudo cp bin/* /usr/bin
sudo cp lib/* /usr/lib
wasm-as --version
# Shows binaryen "version 93 (version_94)"
```

binaryen is now version 93, which is correct. Proceed to build the app...

```bash
cd lvgl-wasm
rm -rf ~/.emscripten_cache
make clean
make -j 5
```

The app build should complete successfully.

If we see error...
```
   emcc: error: unexpected binaryen version: 95 (expected 93) [-Wversion-check] [-Werror]
   FAIL: Compilation failed!: ['/usr/lib/emscripten/emcc', '-D_GNU_SOURCE', '-o', '/tmp/tmpbe4ik5na.js', '/tmp/tmpzu5jusdg.c', '-O0', '--js-opts', '0', '--memory-init-file', '0', '-Werror', '-Wno-format', '-s', 'BOOTSTRAPPING_STRUCT_INFO=1', '-s', 'WARN_ON_UNDEFINED_SYMBOLS=0', '-s', 'STRICT=1', '-s', 'SINGLE_FILE=1']
```
Then we need to install the right version of binaryen (see above)

If we see error...
```
   Fatal: Module::addExport: stackSave already exists
   emcc: error: '/usr/bin/wasm-emscripten-finalize --detect-features --global-base=1024 --check-stack-overflow /tmp/emscripten_temp_84xtyzya/tmpzet09r88.wasm -o /tmp/emscripten_temp_84xtyzya/tmpzet09r88.wasm.o.wasm' failed (1)
   FAIL: Compilation failed!: ['/usr/lib/emscripten/emcc', '-D_GNU_SOURCE', '-o', '/tmp/tmpzet09r88.js', '/tmp/tmpxk8zxvza.c', '-O0', '--js-opts', '0', '--memory-init-file', '0', '-Werror', '-Wno-format', '-s', 'BOOTSTRAPPING_STRUCT_INFO=1', '-s', 'WARN_ON_UNDEFINED_SYMBOLS=0', '-s', 'STRICT=1', '-s', 'SINGLE_FILE=1']
```
Then we need to install branch version_94 of binaryen, change version in CMakeLists.txt to version 93 (see above)

# Install emscripten on macOS (Doesn't Work)

Enter these commands...
```bash
brew install emscripten
brew install binaryen
# Upgrade llvm to 10.0.0
brew install llvm
brew upgrade llvm
nano /usr/local/Cellar/emscripten/1.40.1/libexec/.emscripten
```

Change BINARYEN_ROOT and LLVM_ROOT to 
```python
BINARYEN_ROOT = os.path.expanduser(os.getenv('BINARYEN', '/usr/local')) # directory
LLVM_ROOT = os.path.expanduser(os.getenv('LLVM', '/usr/local/opt/llvm/bin')) # directory
```

Fails with error:
```
   emcc: warning: LLVM version appears incorrect (seeing "10.0", expected "12.0") [-Wversion-check]
   shared:INFO: (Emscripten: Running sanity checks)
   clang-10: error: unknown argument: '-fignore-exceptions'
   emcc: error: '/usr/local/opt/llvm/bin/clang -target wasm32-unknown-emscripten -D__EMSCRIPTEN_major__=1 -D__EMSCRIPTEN_minor__=40 -D__EMSCRIPTEN_tiny__=1 -D_LIBCPP_ABI_VERSION=2 -Dunix -D__unix -D__unix__ -Werror=implicit-function-declaration -Xclang -nostdsysteminc -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/include/compat -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/include -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/include/libc -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/lib/libc/musl/arch/emscripten -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/local/include -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/include/SSE -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/lib/compiler-rt/include -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/lib/libunwind/include -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/cache/wasm/include -DEMSCRIPTEN -fignore-exceptions -Isrc/lv_core -D LV_USE_DEMO_WIDGETS ././src/lv_core/lv_group.c -Xclang -isystem/usr/local/Cellar/emscripten/1.40.1/libexec/system/include/SDL -c -o /var/folders/gp/jb0b68fn3b187mgyyrjml3km0000gn/T/emscripten_temp_caxv1fls/lv_group_0.o -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr' failed (1)
```

# Stack Trace for PineTime Watch Face

Caused by LabelBigStyle not being initialised.

TODO: [Init LabelBigStyle and fonts](https://github.com/JF002/Pinetime/blob/master/src/DisplayApp/LittleVgl.cpp)

```
lvgl.js:1839 Fetch finished loading: GET "http://127.0.0.1:8887/lvgl.wasm".
instantiateAsync @ lvgl.js:1839
createWasm @ lvgl.js:1866
(anonymous) @ lvgl.js:2113
lvgl2.html:1237 In JavaScript: render_canvas()
lvgl2.html:1237 In C: Init display...
lvgl2.html:1237 Init display...
​ Uncaught RuntimeError: memory access out of bounds
    at _lv_style_get_int (http://127.0.0.1:8887/lvgl.wasm:wasm-function[229]:0x21bfb)
    at _lv_style_list_get_int (http://127.0.0.1:8887/lvgl.wasm:wasm-function[234]:0x22bf7)
    at _lv_obj_get_style_int (http://127.0.0.1:8887/lvgl.wasm:wasm-function[87]:0xe524)
    at lv_obj_get_style_shadow_width (http://127.0.0.1:8887/lvgl.wasm:wasm-function[162]:0x17d1b)
    at lv_obj_get_draw_rect_ext_pad_size (http://127.0.0.1:8887/lvgl.wasm:wasm-function[43]:0x70ae)
    at lv_obj_signal (http://127.0.0.1:8887/lvgl.wasm:wasm-function[33]:0x55e6)
    at lv_label_signal (http://127.0.0.1:8887/lvgl.wasm:wasm-function[261]:0x27804)
    at lv_obj_refresh_ext_draw_pad (http://127.0.0.1:8887/lvgl.wasm:wasm-function[45]:0x886f)
    at lv_obj_signal (http://127.0.0.1:8887/lvgl.wasm:wasm-function[33]:0x5793)
    at lv_label_signal (http://127.0.0.1:8887/lvgl.wasm:wasm-function[261]:0x27804)
_lv_style_get_int @ ​
_lv_style_list_get_int @ ​
_lv_obj_get_style_int @ ​
lv_obj_get_style_shadow_width @ ​
lv_obj_get_draw_rect_ext_pad_size @ ​
lv_obj_signal @ ​
lv_label_signal @ ​
lv_obj_refresh_ext_draw_pad @ ​
lv_obj_signal @ ​
lv_label_signal @ ​
lv_obj_refresh_style @ ​
lv_obj_add_style @ ​
Pinetime::Applications::Screens::Clock::Clock(DisplayApp*, Pinetime::Controllers::DateTime&, Pinetime::Controllers::Battery&, Pinetime::Controllers::Ble&) @ ​
create_clock @ ​
(anonymous) @ lvgl.js:1734
render_canvas @ lvgl2.html:1311
Module.onRuntimeInitialized @ lvgl2.html:1354
doRun @ lvgl.js:2496
(anonymous) @ lvgl.js:2509
setTimeout (async)
run @ lvgl.js:2505
runCaller @ lvgl.js:2411
removeRunDependency @ lvgl.js:1632
receiveInstance @ lvgl.js:1799
receiveInstantiatedSource @ lvgl.js:1816
Promise.then (async)
(anonymous) @ lvgl.js:1841
Promise.then (async)
instantiateAsync @ lvgl.js:1839
createWasm @ lvgl.js:1866
(anonymous) @ lvgl.js:2113
```

<h1 align="center"> LVGL - Light and Versatile Graphics Library</h1>

<p align="center">
<img src="https://lvgl.io/assets/images/img_1.png">
</p>

<p align="center">
LVGL provides everything you need to create embedded GUI with easy-to-use graphical elements, beautiful visual effects and low memory footprint. 
</p>

<h4 align="center">
<a href="https://lvgl.io">Website </a> &middot; 
<a href="https://lvgl.io/demos">Online demo</a> &middot; 
<a href="https://docs.lvgl.io/">Docs</a> &middot; 
<a href="https://forum.lvgl.io">Forum</a>
</h4>

---

## Features
* Powerful [building blocks](https://docs.lvgl.io/latest/en/html/widgets/index.html): buttons, charts, lists, sliders, images, etc.
* Advanced graphics: animations, anti-aliasing, opacity, smooth scrolling
* Use [various input devices](https://docs.lvgl.io/latest/en/html/overview/indev.html): touchscreen, mouse, keyboard, encoder, buttons, etc.
* Use [multiple displays](https://docs.lvgl.io/latest/en/html/overview/display.html): e.g. monochrome and color display
* Hardware independent to use with any microcontroller or display
* Scalable to operate with little memory (64 kB Flash, 10 kB RAM)
* Multi-language support with UTF-8 handling, Bidirectional and Arabic script support
* Fully customizable graphical elements via [CSS-like styles](https://docs.lvgl.io/latest/en/html/overview/style.html)
* OS, External memory and GPU are supported but not required
* Smooth rendering even with a [single frame buffer](https://docs.lvgl.io/latest/en/html/porting/display.html)
* Written in C for maximal compatibility (C++ compatible)
* Micropython Binding exposes [LVGL API in Micropython](https://blog.lvgl.io/2019-02-20/micropython-bindings)
* [Simulator](https://docs.lvgl.io/latest/en/html/get-started/pc-simulator.html) to develop on PC without embedded hardware
* [Examples](lv_examples) and tutorials for rapid development
* [Documentation](http://docs.lvgl.io/) and API references

## Requirements
Basically, every modern controller (which is able to drive a display) is suitable to run LVGL. The minimal requirements are:

<table>
  <tr>
    <td> <strong>Name</strong> </td>
    <td><strong>Minimal</strong></td>
    <td><strong>Recommended</strong></td>
  </tr>
  <tr>
    <td><strong>Architecture</strong></td>
    <td colspan="2">16, 32 or 64 bit microcontroller or processor</td>
  </tr>
  <tr>
    <td> <strong>Clock</strong></td>
    <td> &gt; 16 MHz </td>
    <td> &gt; 48 MHz</td>
  </tr>
  
  <tr>
    <td> <strong>Flash/ROM</strong></td>
    <td> &gt; 64 kB </td>
    <td> &gt; 180 kB</td>
  </tr>
  
  <tr>
    <td> <strong>Static RAM</strong></td>
    <td> &gt; 2 kB </td>
    <td> &gt; 4 kB</td>
  </tr>
  
  <tr>
    <td> <strong>Stack</strong></td>
    <td> &gt; 2 kB </td>
    <td> &gt; 8 kB</td>
  </tr>
  
  <tr>
    <td> <strong>Heap</strong></td>
    <td> &gt; 2 kB </td>
    <td> &gt; 8 kB</td>
  </tr>
  
  <tr>
    <td> <strong>Display buffer</strong></td>
    <td> &gt; 1 &times; <em>hor. res.</em> pixels </td>
    <td> &gt; 10 &times; <em>hor. res.</em> pixels </td>
  </tr>
  
  <tr>
    <td> <strong>Compiler</strong></td>
    <td colspan="2"> C99 or newer </td>
  </tr>
</table>

*Note that the memory usage might vary depending on the architecture, compiler and build options.*

Just to mention some platforms:
- STM32F1, STM32F3, STM32F4, STM32F7, STM32L4, STM32L5, STM32H7
- Microchip dsPIC33, PIC24, PIC32MX, PIC32MZ
- NXP: Kinetis, LPC, iMX, iMX RT
- [Linux frame buffer](https://blog.lvgl.io/2018-01-03/linux_fb) (/dev/fb)
- [Raspberry Pi](http://www.vk3erw.com/index.php/16-software/63-raspberry-pi-official-7-touchscreen-and-littlevgl)
- [Espressif ESP32](https://github.com/lvgl/lv_port_esp32)
- [Infineon Aurix](https://github.com/lvgl/lv_port_aurix)
- Nordic NRF52 Bluetooth modules
- Quectel modems

## Get started
This list shows the recommended way of learning the library:
1. Check the [Online demos](https://lvgl.io/demos) to see LVGL in action (3 minutes)
2. Read the [Introduction](https://docs.lvgl.io/latest/en/html/intro/index.html) page of the documentation (5 minutes)
3. Get familiar with the basics on the [Quick overview](https://docs.lvgl.io/latest/en/html/get-started/quick-overview.html) page (15 minutes)
4. Set up a [Simulator](https://docs.lvgl.io/latest/en/html/get-started/pc-simulator.html) (10 minutes)
5. Try out some [Examples](https://github.com/lvgl/lv_examples/)
6. Port LVGL to a board. See the [Porting](https://docs.lvgl.io/latest/en/html/porting/index.html) guide or check the ready to use [Projects](https://github.com/lvgl?q=lv_port_&type=&language=)
7. Read the [Overview](https://docs.lvgl.io/latest/en/html/overview/index.html) page to get a better understanding of the library (2-3 hours)
8. Check the documentation of the [Widgets](https://docs.lvgl.io/latest/en/html/widgets/index.html) to see their features and usage
9. If you have questions go to the [Forum](http://forum.lvgl.io/)
10. Read the [Contributing](https://docs.lvgl.io/latest/en/html/contributing/index.html) guide to see how you can help to improve LVGL (15 minutes) 

## Examples 

For more examples see the [lv_examples](https://github.com/lvgl/lv_examples) repository.

### Button with label
```c
lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);     /*Add a button the current screen*/
lv_obj_set_pos(btn, 10, 10);                            /*Set its position*/
lv_obj_set_size(btn, 100, 50);                          /*Set its size*/
lv_obj_set_event_cb(btn, btn_event_cb);                 /*Assign a callback to the button*/

lv_obj_t * label = lv_label_create(btn, NULL);          /*Add a label to the button*/
lv_label_set_text(label, "Button");                     /*Set the labels text*/

...

void btn_event_cb(lv_obj_t * btn, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED) {
        printf("Clicked\n");
    }
}
```
![LVGL button with label example](https://raw.githubusercontent.com/lvgl/docs/latest/misc/simple_button_example.gif)

### LVGL from Micropython
Learn more about [Micropython](https://docs.lvgl.io/latest/en/html/get-started/micropython.html).
```python
# Create a Button and a Label
scr = lv.obj()
btn = lv.btn(scr)
btn.align(lv.scr_act(), lv.ALIGN.CENTER, 0, 0)
label = lv.label(btn)
label.set_text("Button")

# Load the screen
lv.scr_load(scr)
```

## Contributing
LVGL is an open project and contribution is very welcome. There are many ways to contribute from simply speaking about your project, through writing examples, improving the documentation, fixing bugs to hosing your own project under in LVGL.

For a detailed description of contribution opportunities visit the [Contributing](https://docs.lvgl.io/latest/en/html/contributing/index.html) section of the documentation.

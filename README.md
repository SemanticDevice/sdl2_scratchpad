# SDL2 Scratchpad
Playground for learning [SDL2](https://www.libsdl.org).

## Development Environment

### Linux (Ubuntu 20.04.2 LTS)

Install SDL2:

```bash
sudo apt-get install libsdl2-dev
```

Install SDL2 dependencies following instructions from https://github.com/libsdl-org/SDL/blob/main/docs/README-linux.md

```bash
sudo apt-get install build-essential git make cmake autoconf automake \
libtool pkg-config libasound2-dev libpulse-dev libaudio-dev libjack-dev \
libx11-dev libxext-dev libxrandr-dev libxcursor-dev libxi-dev \
libxinerama-dev libxxf86vm-dev libxss-dev libgl1-mesa-dev libdbus-1-dev \
libudev-dev libgles2-mesa-dev libegl1-mesa-dev libibus-1.0-dev \
fcitx-libs-dev libsamplerate0-dev libsndio-dev libwayland-dev \
libxkbcommon-dev libdrm-dev libgbm-dev
```

Create a small test project in `sdl2_test.c`.

Create a CMake config file `CMakeLists.txt`.

Build the project from the project's repo root:

```bash
mkdir build
cd build
cmake ..
make
```

If you get an error about `find_package` not finding `FindSDL2.cmake`, you haven't installed SDL2. Run the `sudo apt-get install libsdl2-dev` command.

Run the project from the `build` directory:

```bash
./sdl2_test
```

## References

- [Introduction to Modern CMake](https://www.internalpointers.com/post/modern-cmake-beginner-introduction)
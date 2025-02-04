# Run in windows with compiled executable file:

[EXE for Windows](https://drive.google.com/file/d/1y09I2d9jPF-QuVZDxuP719fNWnj7rr0M/view?usp=drive_link)

# Controls:
- <kbd>**Esc**</kbd> - pause
- <kbd>**Tab**</kbd> - open inventory
- <kbd>**W**</kbd> <kbd>**A**</kbd> <kbd>**S**</kbd> <kbd>**D**</kbd> - movement
- <kbd>**Space**</kbd> - jump
- <kbd>**LMB**</kbd> - remove block 
- <kbd>**RMB**</kbd> - place block
- <kbd>**F**</kbd> - toggle flight mode
- <kbd>**N**</kbd> - noclip mode
- <kbd>**F2**</kbd> - save screenshot
- <kbd>**F3**</kbd> - debug mode
- <kbd>**F5**</kbd> - reload chunks

#### Build with CMake
```sh
git clone --recursive https://github.com/MihailRis/VoxelEngine-Cpp.git
cd VoxelEngine-Cpp
mkdir build
cd build
cmake ../
cmake --build .
```

## Instal libs:
#### Debian-based distro:
`$ sudo apt install libglfw3-dev libglfw3 libglew-dev libglm-dev libpng-dev libopenal-dev`

#### RHEL-based distro:
`$ sudo dnf install glfw-devel glfw glew-devel glm-devel libpng-devel openal-devel`

#### Arch-based distro:
If you use X11
`$ sudo pacman -S glfw-x11 glew glm libpng openal`

If you use Wayland
`$ sudo pacman -S glfw-wayland glew glm libpng openal`

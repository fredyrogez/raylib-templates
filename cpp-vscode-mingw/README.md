# cpp-vscode-mingw

[Raylib 4.2](https://github.com/raysan5/raylib) Template C++ (C++ 17 64 bits) for Visual Studio Code & MinGW-w64

## 1. Download and extract (if needed)
* **MinGW64** : MSVCRT runtime / Win64  ([download](https://winlibs.com))
* **Raylib 4.2** : raylib-4.2.0_win64_mingw-w64.zip ([download](https://github.com/raysan5/raylib/releases/tag/4.2.0))

## 2. Create environments variables
* **MINGW64** : Mingw64 folder - (e.g. : %MINGW64% = D:\Apps\mingw64)
* **RAYLIB** : Raylib folder - (e.g. : %RAYLIB% = D:\Apps\raylib)
* Add **%MINGW64%\bin** to your *Path* variable

## 3. Visual Studio Code
### Install Extension
* **ms-vscode.cpptools-extension-pack** : ([download](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack))
### Run and Debug
* **BUILD-DEBUG** : build and run in debug mode
### Terminal > Run Task...
* **DEBUG-build** : build debug version to **/build/debug/game.exe**
* **DEBUG-clean-dist-copy** : deletes all files in the **/build/debug** folder and copy all the content of the folder **/dist** to **/build/debug**
* **DEBUG-quick-clean** : deletes **.exe** files in **/build/debug** and **.o** files in **/src**
* **RELEASE-build** : build release version to **/build/release/game.exe**
* **RELEASE-clean-dist-copy** : deletes all files in the **/build/release** folder and copy all the content of the folder **/dist** to **/build/release**
* **RELEASE-quick-clean** : deletes **.exe** files in **/build/release** and **.o** files in **/src**
* **MY-RC-BUILD** : build Windows resources file **my.rc** (icon...)

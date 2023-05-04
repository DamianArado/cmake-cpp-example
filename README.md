# cmake-cpp-example
A simple example of a C++ library with not-so-simple CMake. 

You need to have [MSYS2](https://www.msys2.org/) installed as well as [CMake](https://cmake.org/download/).   

Please make sure to include things in `PATH` environment variable (on Windows) properly.   
For ex., 
```
C:\msys64\mingw64\bin
C:\Program Files\CMake\bin
C:\msys64\usr\bin
```

If you're using VSCode like me, it would be better if you install C/C++ Extension Pack and CMake Tools extension as well. 

My settings.json if that helps.

```
"cmake.configureOnOpen": true,
    "C_Cpp.default.compilerPath": "C:\\msys64\\mingw64\\bin\\g++.exe",
    "cmake.cmakePath": "C:\\Program Files\\CMake\\bin\\cmake.exe",
    "cmake.generator": "MinGW Makefiles",
    "zenMode.fullScreen": false,
    "code-runner.runInTerminal": true,
    "cmake.cacheInit": null,
    "cmake.additionalCompilerSearchDirs": [
        "C:\\msys64\\mingw64\\bin",
    ],
```

Feel free to ask for help here.

Learn more about Modern CMake here: https://cliutils.gitlab.io/modern-cmake/

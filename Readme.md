# CppCallPython
This project it's helping you interactive with Python function when you are using C++ base on Visual Studio 2022.

### 1. Build a c++ project
   ![c++ project](./image/1.JPG)
### 2. Download Python for windows
   - First you should download [Python](https://www.python.org/downloads/) and check whole boxes when you install, and remeber your python path.
   <br>![python website](./image/2.JPG)
   <br>![python download](./image/3.jpg)
### 3. import Python for C++ to use it
   - View->Property Manager->Right Click CCallPython(project)->Properties - It'll pop up project Property Pages.
   <br>![setting](./image/4.jpg)
   - In order to add Python includ and libraries's path
   VC++ Directories -> Include Directories add "C:\Program Files\Python310\include"
   <br>![setting](./image/5.jpg)
   - VC++ Directories -> Library Directories add "C:\Program Files\Python310\libs"
   <br>![setting](./image/6.jpg)
   - Linker -> Input add "python310.lib"
   <br>![setting](./image/7.jpg)
### A.Troubleshooting
   - If you got and error or when you running project it's return can't found python310.lib, please check your Python version and its PATH.

    
### 3. Run C++ code and check the result.
   - #### Workflow
   <br>![Workflow](./image/0.jpg)  ![setting](./image/8.jpg)
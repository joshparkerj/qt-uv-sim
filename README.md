# qt-uv-sim

Step By Step Qt VS Tools

1. Install the Qt VS Tools from marketplace.visualstudio.com/items?itemName=TheQtCompany.QtVisualStudioTools
2. Install Qt from qt.io/download-qt-installer
  2a. You can skip signing in if you prefer not to register an account.
  2b. Specify the directory (I used the default C:\Qt)
  2c. Select Qt 5.12.1 MSVC 2017 64-bit
  2d. Now it will download the framework. This will probably take 20 minutes or more.
3. When Qt is done installing, open Visual Studio and Qt VS Tools > Qt Options.
4. Click Add, then add the path (by default, C:\Qt\5.12.1\msvc2017_64).
5. Press OK, then OK again.
6. select File > New > Project
7. In the New Project Dialog, select Visual C++, Qt, Qt GUI Application.
8. Name your application UVSim and select a Location, then press OK.
9. Click Next, then Next again, then Finish.
10. In the project directory, replace UVSim.ui with the UVSim.ui I provided.


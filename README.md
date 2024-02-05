## 命令行解析库

* 这是一个基于C++11编写的命令行解析库，顶层命名空间为zeyu,二层命名空间为utility(工具类),CommandLine类提供解析命令行功能，Value类则提供了类型转换的功能，实现所有类型的参数和Value都可进行互转。

* 项目如何编译

  ``` Linux
  cd build
  cmake ..
  make
  ```

  生成的动态库/静态库默认在lib目录，可自行修改路径，test.cpp提供测试功能，若想进行功能测试，可以取消CMakeLists.txt文件的最后一行注释，生成可执行文件。

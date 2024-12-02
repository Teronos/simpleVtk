В файле src/simpleVtkExamplePrc.cpp взятый с сайта https://examples.vtk.org/site/Cxx/
для успешнной сборки и запуска достаточно выполнить следующие шаги(речь идет только про Debug сборку):

* Указать в свойствах проекта _Linker >> Additional Library Directories_ путь до расположения статических библиотек, на моем компьютере это __Q:\ExternalTools\VTK\9.0\lib_static\vc142\x64\Debug__ 

* Указать в свойствах проекта _С/С++ >> Additional Include Directories_  пусть до заголовгов модулей VTK, на моем компьютере это __Q:\ExternalTools\VTK\9.0\include_static__

* Может потребоваться дополнительная динамическая библиотека opengl32, но чаще всего она уже установлена в Windows

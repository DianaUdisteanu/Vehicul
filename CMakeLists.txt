cmake_minimum_required(VERSION 3.2)
set(myproject "vehicul")
project(${myproject})


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(my_files src/Proprietar.cpp src/Vehicul.cpp src/Aerian.cpp src/Terestru.cpp src/StareVehicul.cpp src/Combustibil.cpp src/Carburant.cpp src/Kerosen.cpp src/DatePersonale.cpp inc/Proprietar.hpp inc/Vehicul.hpp inc/Aerian.hpp inc/Terestru.hpp inc/StareVehicul.hpp inc/Combustibil.hpp inc/Carburant.hpp inc/Kerosen.hpp inc/DatePersonale.hpp)


add_library(lib STATIC ${my_files})


add_executable(${myproject} src/main.cpp)


target_link_libraries(${myproject} PUBLIC lib)



target_include_directories(${myproject}
PRIVATE src INTERFACE
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/headers>
$<INSTALL_INTERFACE:headers>)
cmake_minimum_required(VERSION 3.8)
project(Inheritance)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
#set(SOURCE_FILES testDistance.cpp Distance.cpp Distance.h)
set(SOURCE_FILES TestEmployee.cpp Employee.cpp Employee.h Manager.cpp Manager.h Scientist.cpp Scientist.h Laborer.cpp Laborer.h Student.cpp Student.h)

add_executable(Inheritance ${SOURCE_FILES})
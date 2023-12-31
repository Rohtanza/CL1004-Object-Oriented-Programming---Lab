cmake_minimum_required(VERSION 3.25)
project(Question_03_The_Polymorphic_Arena_A_Battle_of_Character_Types)

set(CMAKE_CXX_STANDARD 23)

add_executable(Question_03_The_Polymorphic_Arena_A_Battle_of_Character_Types main.cpp Character.h Warriors.cpp Warriors.h Mages.cpp Mages.h Thieves.cpp Thieves.h Enum.h)

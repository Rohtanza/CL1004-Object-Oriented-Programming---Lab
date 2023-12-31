cmake_minimum_required(VERSION 3.25)
project(Q2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Q2 main.cpp Post.cpp Post.h UserAccount.cpp UserAccount.h PersonalAccount.cpp PersonalAccount.h BusinessAccount.cpp BusinessAccount.h)

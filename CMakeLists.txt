cmake_minimum_required(VERSION 3.10)

# set the project name
project(RPSGame)


set(CMAKE_CXX_STANDARD 14)

#Update the paths to compliers
set(CMAKE_CXX_COMPILER "C:/msys64/mingw64/bin/g++.exe" )
set(CMAKE_C_COMPILER "C:/msys64/mingw64/bin/gcc.exe" )

# add the executable
add_executable(
	RPSGame 
	./main.cpp 
	./src/Game.cpp 
	./src/Judge.cpp 
	./src/NPCPlayerRandomImpl.cpp
	./src/PlayerController.cpp
)
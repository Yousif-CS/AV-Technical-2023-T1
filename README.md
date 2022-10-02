# AV Technical

An important software engineering skill to have is to be able to fix and resolve bugs within a code base. The common AV NMP task tests your ability to read and debug C++ compile time errors as well as resolve some runtime errors too. Attached to this project is a broken code base. It's your task to fix each of the bugs in it.

We have provided useful resources at the bottom (particularly for some of you who might be unfamiliar with C++ and CMake)

# Problems

Currently the CMakeLists.txt is practically empty. It is your task to add the necessary dependencies to file so that you are able to build an executable that compiles main.cpp. Below I have outlined some of the questions in the code base.

- Question 1, 2, 3, 5, 8
	> Fix any syntax errors or invalid parameters
- Question 4
	> This question has 2 parts. At the end of the 5 threads running the value should be 5000 but its is not. You need to fix the race condition. 
    > https://stackoverflow.com/questions/34510/what-is-a-race-condition
    > Think about how you can use a mutex to solve this
    > https://stackoverflow.com/questions/34524/what-is-a-mutex
    > https://en.cppreference.com/w/cpp/thread/mutex
- Question 6
	> Malloc struct, there might be some missing libs that you will need to import
- Question 7
	> Initialise foo object, you will need to look into the constructor arguments to see what parameters are valid

- Extension Tasks. 
	> Include google tests into the CMakeFile and get it compiling. You might need to install it if you don't have it already. 
	> The second part is to move the "testerFunction()" as a google test using the correct google tests ASSERTS

Let the AV team know if there are any problems. Best of luck.

# Some useful resources

https://www.learncpp.com/ (Use this as a resource for this unfamiliar with C++)

https://en.cppreference.com/w/cpp/language

Intro to git: https://opensource.com/article/18/1/step-step-guide-git

Introduction to CMake: https://cliutils.gitlab.io/modern-cmake/ (there is a section on Googletests as well)

Install google test: https://github.com/google/googletest/tree/main/googletest

Basic Cmake tutorial (This is all you should really need for cmake): https://matgomes.com/cmake-add-executable/

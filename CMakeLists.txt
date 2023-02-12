cmake_minimum_required(VERSION 3.8)
project(nmp)

enable_testing()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

foreach(IDX RANGE 1 2 1)
	add_executable(Question-${IDX} Question-${IDX}/Question-${IDX}.cc)
	add_test(question-${IDX} Question-${IDX})
endforeach()


# Question 3: Extension Task. You need to integrate Google Tests here

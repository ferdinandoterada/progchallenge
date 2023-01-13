## Exercise 5

## Description
This exercise implements the unit tests of exercise 4.

## Requirements
Install google test and libgtest-dev to run the tests:
sudo apt-get install libgtest-dev libgmock-dev googletest

## Execution
Compile the code. There is a small CMakeLists.txt file to compile the tests.
The file locates the google test library and links it with the test application.

Execute the following commands to run the unit tests:
cmake CMakeLists.txt;
make;
./runTests


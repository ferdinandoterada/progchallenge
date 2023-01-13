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

## Execution Example
$ ./runTests 
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from ConcatenateRemoveTest
[ RUN      ] ConcatenateRemoveTest.SuccessCase
Number of operations: 1
Number of operations: 1
Number of operations: 8
[       OK ] ConcatenateRemoveTest.SuccessCase (0 ms)
[ RUN      ] ConcatenateRemoveTest.FailureCase
Number of operations: 9
Number of operations: 9
Number of operations: 8
[       OK ] ConcatenateRemoveTest.FailureCase (0 ms)
[----------] 2 tests from ConcatenateRemoveTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (1 ms total)
[  PASSED  ] 2 tests.
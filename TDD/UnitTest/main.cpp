/*
 * Project name: TDD Boillerplate
 * Description: How create a project with TDD using C++
 * Hostpage: https://github.com/LeandroTeodoroRJ/CPP
 * Stable: Yes
 * Version: 1.0.0
 * Last Uptate: 26.09.26
 * Dependences: No
 * Current: Yes
 * Maintainer: leandroteodoro.engenharia@gmail.com
 * Architecture: x86
 * Compile/Interpreter: gnu c++ compiler 
 * Access: Public
 * Changelog: No
 * Readme and Documents: No
 * Links: No
 * Other Notes: No
 */

 #include <iostream>
 #include "tdd_toolkit.h"

 #define RUN 0
 #define TEST 1
 #define PRG_MODE TEST  //or RUN
 //#define PRG_MODE RUN

 #if (PRG_MODE == TEST)
    /* unit tests header files */
    #include "user_test.h"
 #else
    #include "user.h"
 #endif

 int main() {
 #if (PRG_MODE == RUN)
     User user(5);
     std::cout << "The sum is: " << user.sum(2) << std::endl;
     return 0;

 #elif (PRG_MODE == TEST)
     /* unit test class functions */
     run_user_tests();
 #else
     std::cerr << "Invalid PRG_MODE option!" << std::endl;
     return 1;
 #endif
 }

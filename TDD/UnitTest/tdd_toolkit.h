/*
 * Description: General TDD library using C++
 * Hostpage: https://github.com/LeandroTeodoroRJ/CPP
 * Stable: Yes
 * Version: 1.0.0
 * Last Uptate: 26.09.26
 * Dependences: No
 * Current: Yes
 * Maintainer: leandroteodoro.engenharia@gmail.com
 * Architecture: x86
 * Compile/Interpreter: g++
 * Access: Public
 * Changelog: No
 * Readme and Documents: No
 * Links: No
 * Other Notes: No
 */

#ifndef TDD_TOOLKIT_H
#define TDD_TOOLKIT_H

#include <iostream>
#include <cstdlib>

#if (PRG_MODE == TEST)

inline void test(bool test_result){
    if (test_result){
        std::cout << "Pass" << std::endl;
    }else{
        std::cout << "FAIL" << std::endl;
        std::exit(1);
    }
}

#endif

#endif

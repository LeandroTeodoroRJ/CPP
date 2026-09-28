/*
 * Description: File to unit test to user.h class
 */

#ifndef USER_TEST_H
#define USER_TEST_H

#include "tdd_toolkit.h"
#include "user.h"

inline void run_user_tests() {
    std::cout << "\n--- Running User Tests ---" << std::endl;
    std::cout << "1. sum function test." << std::endl;
    User u1(10);
    test(u1.sum(4) == 14);
}

#endif

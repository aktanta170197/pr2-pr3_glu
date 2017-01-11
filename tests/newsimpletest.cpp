/* 
 * File:   newsimpletest.cpp
 * Author: tanya
 *
 */

#include <stdlib.h>
#include <iostream>
#include "../utili.h"

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "newsimpletest test 1" << std::endl;
    if(mypow(2,2)!=4)
        std::cout << "%TEST_FAILED% time=0 testname=test2 (newsimpletest) message=Дважды два четыре!" << std::endl;
}

void test2() {
    std::cout << "newsimpletest test 2" << std::endl;
    //std::cout << "%TEST_FAILED% time=0 testname=test2 (newsimpletest) message=error message sample" << std::endl;
    if(mypow(3,2)!=9)
        std::cout << "%TEST_FAILED% time=0 testname=test2 (newsimpletest) message=Три в квадрате должно быть 9" << std::endl;
}
void test3() {
    std::cout << "newsimpletest test 3" << std::endl;
    for(int i=1;i<=20;i++){
        if(mypow(1,i)!=1){
            std::cout << "%TEST_FAILED% time=0 testname=test3 (newsimpletest) message=Ошибка возведения в степень единицы" << std::endl;            
            break;
        }
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (newsimpletest)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (newsimpletest)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% test3 (newsimpletest)\n" << std::endl;
    test3();
    std::cout << "%TEST_FINISHED% time=0 test3 (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

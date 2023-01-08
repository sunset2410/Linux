/*
#include<iostream>
#include "Student.h"

int main1() {
    Student* st1 = new Student(1,"nam");
    st1->print();

    return 0;
}
*/


#include<iostream>
#include<thread>
#include<chrono>


void count1() {
    for(int i =0; i< 100; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "count1:"<< i << std::endl;
    }
}

void count2() {
    for(int i =0; i< 100; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "count2:"<< i << std::endl;
    }
}

int main() {
    std::cout<< "start" << std::endl;
    std::thread t1(count1);
    std::thread t2(count2);
    t1.join();
    t2.join();
    std::cout<< "end" << std::endl;
    return 0;
}
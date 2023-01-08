#include<iostream>
#include "Student.h"

int main() {
    Student* st1 = new Student(1,"nam");
    st1->print();
    
    return 0;
}
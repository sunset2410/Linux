#include "Student.h"

Student::Student(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

void Student::print()
{
    std::cout << "id: " << id << " name:" << name << std::endl;
}
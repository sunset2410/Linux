#include<iostream>
using namespace std;

class SmartPtr {
    int* ptr;
public:
    SmartPtr(int* p) {
        ptr = p;
    }

    ~SmartPtr() {
        delete ptr;
    }

    int& operator*() {
        return *ptr;
    }
};


// int main() {
//     SmartPtr ptr(new int());
//     *ptr = 20;
//     cout << *ptr;
//     return 0;
// }
#include<iostream>
using namespace std;

class MyVector {
private:
    int* arr;
    int size; 
public:
    MyVector(int s) {
        size = s;
        arr = new int[size];
    }   

    ~MyVector() {
        delete[] arr;
    }  

    int& operator[](int index) {
        return *(arr + index);
    }

    int getSize() const {
        return size;
    }
};

int main() {
    MyVector vt(10);
    for(int i = 0; i< 10 ; i++) {
        vt[i] = i*2;
    }

    for(int i =0; i< vt.getSize(); i ++) {
        cout << " " << vt[i] << " ";
    }
    return 0;
}
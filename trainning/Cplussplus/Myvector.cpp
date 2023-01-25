#include<iostream>
using namespace std;

class MyVector {
private:
    int* arr;
    int size = 0; 
    int max_size = 10;
public:
    MyVector(int s) {
        size = s;
        arr = new int[size];
    }   

    MyVector() {
        arr = new int[max_size];
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

    void push_back(int a) {
        if( size == max_size) {
            max_size *=2;
            int* arr_temp = new int[max_size];
            for(int i= 0; i< size; i++) {
                arr_temp[i] = arr[i];
            }
            delete[] arr;
            arr = arr_temp;
        }
        arr[size] = a;
        size++;
    }
};

int main() {
    MyVector vt(10);
    for(int i = 0; i< 10 ; i++) {
        vt[i] = i*2;
    }

    vt.push_back(100);
    vt.push_back(101);
    vt.push_back(102);

    for(int i =0; i< vt.getSize(); i ++) {
        cout << " " << vt[i] << " ";
    }

    return 0;
}
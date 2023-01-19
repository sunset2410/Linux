#include<iostream>

using namespace std;

void mfunction() {
    int i =100;
    int b =0;
    i= i/b;
    i++;
}

void test() {
    int a = 10;
    mfunction();
    a++;
}

int main() {
    int a = 10;
    int b = 30;
    a++;
    b--;
    test();
    cout <<"a= " << a << endl;
    cout << "b=" << b << endl;
    return 0;
}

//456

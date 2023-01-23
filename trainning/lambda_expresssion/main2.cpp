#include<iostream>
using namespace std;

int main1() {
    auto x = [] (int a) -> int { return a + 5;};
    cout << x(1); 

    return 0;
}


//by referrence
// int main() {
//     int a = 2;
//     //auto f = [&] { a = a + 1;};
//     //f();
//     [&] { a = a+ 1;}();
//     cout << "a =" << a;

//     return 0;
// }


// int main() {
//     int a =0;
//     int b = 0;
//     [&a, &b]() { a = 1; b = 1;}();
//     cout << "a = " << a << "b =" << b;


//     return 0;
// }


int main() { 
    int a = 5;
    //[&]() mutable { a = a + 1; cout <<a << endl;}();
    [=]() mutable { a = a + 1; cout <<a << endl;}();
    cout << a;
    return 0;
}
// 1. Static Cast
// 2. Dynamic Cast
// 3. Const Cast
// 4. Reinterpret Cast


// 1. Static Cast
// It is a compile time cast.It does things like implicit
//  conversions between types (such as int to float, or pointer to void*)

#include<iostream>
using namespace std;

//  int main() {
//     float f = 3.7f;
//     int a = f; // cast in c style
//     int b = static_cast<int>(f);

//     return 0;
//  }

// int main()
// {
//     int a = 10;
//     char c = 'a';
//     // pass at compile time, may fail at run time
//     int* q = (int*)&c; 
//     char* temp = static_cast<char*>(&a);
//     void* temp1 = static_cast<void*>(&a);
//     char* temp2 = static_cast<char*>(temp1);
//     int* p = static_cast<int*>(&c);
//     return 0;
// }


// const cast

// int main() {
//     //int a = 10;  // ko the thay doi gia tri a
//     int a = 10; // co the thay doi gia tri a
//     const int* p = &a; // con tro tro toi hang so
//     int* q = const_cast<int*>(p);
//     *q = 10000;
//     cout << "a=" <<a;

//     return 0;
// }




//dynamic_cast

class Animal {
public:
    virtual void make_sound() {
        cout << "...."<< endl;
    }
};

class Cat : public Animal {
public:
    void make_sound() {
        cout << " meo meo" << endl;
    }
};


class Dog : public Animal {
public:
    void make_sound() {
        cout << "gau gau" << endl;
    }        
};


int main() {
    Dog dog;
    dog.make_sound();

    Animal* animal = dynamic_cast<Animal*>(&dog);
    animal->make_sound();

    Cat *cat = dynamic_cast<Cat*>(animal);
    if(cat != nullptr)
    cat->make_sound();

    return 0;
}
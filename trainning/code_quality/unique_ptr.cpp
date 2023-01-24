#include<iostream>
#include<memory>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int w, int h): width (w), height (h) {

    }

    ~Rect() {
        cout << "destructor Rect" <<endl;
    }

    int getArea() const {
        return width* height;
    }
};


// int main() {
//     unique_ptr<Rect> p1(new Rect(5 , 10));
//     cout << "area p1 =" << p1->getArea() << endl;
//     unique_ptr<Rect> p2;
//     p2 = move(p1);
//     cout << "area p2 = " << p2->getArea() << endl;
//     return 0;
// }
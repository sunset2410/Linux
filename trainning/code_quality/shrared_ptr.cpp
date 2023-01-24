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


int main() {
    //Rect* r1 = new Rect(4,6);
    //shared_ptr<Rect> p1 = make_shared<Rect>(r1);
    ////shared_ptr<Rect> p1 = make_shared<Rect>(new Rect(7,8));
    shared_ptr<Rect> p1(new Rect(8,9));
    int count = p1.use_count();

    {
        shared_ptr<Rect> p2 = p1;
        count = p1.use_count();
        count = p2.use_count();
    }
    count = p1.use_count();
    return 0;
}
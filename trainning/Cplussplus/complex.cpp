/*
tao class complex voi cac toan tu += -= ben trng class
toan tu + - ben ngoai class
*/

class Complex {
private:
int re, im;
public:
    Complex(int r, int i): re{r}, im(i) {

    }

    Complex(): re{0}, im{0} {

    }

    Complex& operator+=(Complex a) {
        this->re += a.re;
        this->im += a.im;
        return *this;
    }
};

Complex operator+(Complex a, Complex b) {
    Complex c(a);
    c+=b;
    return c;
}


int main1() {
    Complex a(1,3);
    Complex b(2,5);
    //a+=b;
    Complex c = a + b;
    return 0;
}
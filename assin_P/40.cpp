#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;
public:
    Complex();
    Complex(int, int);
    void display();
    int getReal();
    int getImg();
    void setReal(int);
    void setImg(int);
    static int count;

};

int Complex::count = 0;
Complex::Complex(){
    real = 1;
    count++;
    img = 1;
}


Complex::Complex(int r, int i){
    real = r;
    img = i;
    count++;
}

void Complex::display(){
    cout<<real<<"+"<<img<<"j"<<endl;
}

void Complex::setReal(int r){
    real = r;
}

void Complex::setImg(int i){
    img = i;
}

int Complex::getReal(){
    return real;
}

int Complex::getImg(){
    return img;
}

int main(){
    Complex c;
    cout<<"Complex using display(): ";
    c.display();
    cout<<endl;
    c.setReal(4);
    c.setImg(8);
    cout<<"Get Real Part: "<<c.getReal()<<endl;
    cout<<"Get Imaginary Part: "<<c.getImg()<<endl;
    cout<<"Complex number: ";
    c.display();
    cout<<endl;
    Complex d(1,3);
    Complex d2(5,1);
    Complex d3(8,6);
    cout<<"Number of complex object: "<<Complex::count<<endl;
    return 0;
}

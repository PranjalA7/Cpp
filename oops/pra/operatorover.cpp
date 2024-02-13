#include<iostream>
class Complex
{
    int real, imag;
    public:
    Complex(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    // Complex operator+(Complex const& obj)
    // {
    //     Complex res;
    //     res.real=real+obj.real;
    //     res.imag=imag+obj.imag;
    //     return res;
    // }
    void display()
    {
        std::cout<<real<<" + i"<<imag<<std::endl;
    }
    friend Complex operator+(Complex const& obj1, Complex const& obj2);
    Complex operator==(Complex const& obj)
    {
        Complex res;
        res.real=this->real==obj.real;
        res.imag=this->imag==obj.imag;
        return res;
    }
};
Complex operator+(Complex const &obj1, Complex const &obj2)
{
    Complex res;
    res.real=obj1.real+obj2.real;
    res.imag=obj1.imag+obj2.imag;
    return res;
}
int main(){
    Complex A(2,3),B(2,3),C(9,2),D;
    D=A==B;
    D.display();
    return 0;
}



#include <iostream>
using namespace std;
class Complex
{
public:
    Complex()
    {
        real1 = imaginary2 = 0;
        real2 = imaginary1 = 0;
    }
    void addComplex(double a,double b,double c,double d)
    {
        real1 = a + c;
        imaginary1 = b + d;
        cout << "<" << real1 <<","<< imaginary1 << ">" << endl;
    }
    void subComplex(double a, double b, double c, double d)
    {
        real2 = a - c;
        imaginary2 = b - d;
        cout << "<" << real2 << "," << imaginary2 << ">" << endl;
    }
private:
    double real1;
    double imaginary1;
    double real2;
    double imaginary2;
};
int main()
{
    double a=0, b=0,c=0,d=0;
    class Complex add;
    cin >> a >> b >> c >> d;
    cout << "<" << a << "," << b << ">+<" << c << "," << d << ">=";
    add.addComplex(a, b, c, d);
    class Complex sub;
    cin >> a >> b >> c >> d;
    cout << "<" << a << "," << b << ">-<" << c << "," << d << ">=";
    sub.subComplex(a, b, c, d);
}

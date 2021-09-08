//Area and perimeter of a rectangle

#include<iostream>
using namespace std;

int main()
{
    int l,b,a,p;
    cout << "Enter length :";
    cin >> l;
    cout << "Enter breadth :";
    cin >> b;

    a=l*b;
    p=2*(l+b);

    cout << "The area of rectange is: " << a << " and the perimeter is :" << p;

    return 0;
}
//Third angle of a triangle

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter first angle : " <<endl;
    cin >> a;
    cout << "Enter second angle : "<<endl;
    cin >> b;

    c=180-(a+b);
    cout << "The third angle is : "<<c;
    return 0;
}
//Multiplication Table of a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a number : ";
    cin >> n;

    for(int i=1; i<=10; i++)
    {
        cout << "5X"<<i<<"="<< n*i << endl;
    }
    return 0;
}
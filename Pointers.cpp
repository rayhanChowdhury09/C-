#include<iostream>
using namespace std;

int main()
{
    int x = 4;
    int *p_x = &x;
    cout<< &x;
    cout<< p_x;
    cout<<*p_x;
    *p_x = 5;
    cout<<x;
}
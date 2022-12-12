#include<iostream>
using namespace std;
int main()
{
    float mark, sum=0, avg;
    int n;
    int i, j;
    cout << "Enter total numbere of course : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        //cin >> arr[i];
    }
    cout<<"Enter marks : ";
    for(int j=0; j<n; j++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/n;
    cout<<"\nGrade = ";
    if(avg>=90 && avg<=100)
        cout<<"A+";
    else if(avg>=85 && avg<90)
        cout<<"A";
    else if(avg>=80 && avg<85)
        cout<<"B+";
    else if(avg>=75 && avg<80)
        cout<<"B";
    else if(avg>=70 && avg<75)
        cout<<"C+";
    else if(avg>=65 && avg<70)
        cout<<"C";
    else if(avg>=60 && avg<65)
        cout<<"D+";
    else if(avg>=50 && avg<60)
        cout<<"D";
    else if(avg>=0 && avg<50)
        cout<<"F";
    else
        cout<<"Invalid!";
}
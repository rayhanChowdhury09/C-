#include<iostream>
using namespace std;

struct  Person
{
    char name[100];
    int age ;
    double salary;
};


int main()
{
 Person p1;
 cout<<"\t\t-----Peerson Details------ \n";
 cout<<"Enter Person Name :";
 cin.getline(p1.name,100);
 cout<<"Enter Age :";
 cin>>p1.age;
 cout<<"Enter Salary :";
 cin>>p1.salary;

 cout<<endl<<endl;
 cout<<"\t\t-----Person Details are as follow :\n";
 cout<<"Person Name : "<<p1.name<<endl;
 cout<<"Person age  : "<<p1.age<<endl;
 cout<<"Person salary: "<<p1.salary <<" Taka"<<endl;

 return 0;
}
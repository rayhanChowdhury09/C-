/*Write a program with appropriate data structure to keep records of 10 students. Each student will have the following information:
       a. Unique ID (you can use integer for this)
       b. Number of Credits Completed
       c. CGPA

Print all the student’s ID whose CGPA is more than 3.75.
Print all the student’s ID who has completed more than 50 credits */
#include<iostream>
using namespace std;
 
 struct student
 {
    string id;
    int credits;
    float cgpa;
 };

int main()
{
     student T[40];
     cout<<"\n";
     cout<<"***********Enter student info :*************"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter student no : "<<i+1;
        cout<<endl;
        cout<<"Unique ID        : ";
        cin>>T[i].id;
        cout<<"Number of Credits Completed :";
        cin>>T[i].credits;
        cout<<" CGPA :";
        cin>>T[i].cgpa;

    }
    cout<<endl;
    cout<<"All the students ID whose CGPA is more than 3.75 :"<<endl;
    for(int i=0;i<10;i++)
    {   if(T[i].cgpa>3.75){
        cout<<"student  Unique ID :";
        cout<<T[i].id<<endl;}
        
    }
     cout<<endl;
    cout<<"All the students ID who has completed more than 50 credits :"<<endl;
    for(int i=0;i<10;i++)
    {   if(T[i].credits>50){
        cout<<"student  Unique ID :";
        cout<<T[i].id<<endl;}
        
    }
return 0;
}


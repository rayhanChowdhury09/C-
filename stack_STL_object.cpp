#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<stack>
using namespace std;

class student {
    private:
    int id;
    string name;
    double cgpa;

    public:
    student()
    {

    }
    student(int id, string name, double cgpa)
    {
      this->id=id;
      this->name=name;
      this->cgpa=cgpa;

    }
    int getID()
    {
        return id;

    }
    string getName()
    {
        return name;
    }
    double getCGPA()
    {
        return cgpa;
    }
        

};

int main()
{
    stack<student> studentStack;
    ifstream fin("cgpa.txt");

    int idd;
    string namee;
    double ccgpa;

    for (int i=0; i<3; i++)
    {
        fin>>idd>>namee>>ccgpa;

        student s(idd,namee,ccgpa);
        studentStack.push(s);
    }

    while(!studentStack.empty())
    {
        student s = studentStack.top();
        cout<<s.getID()<<" "<<s.getName()<<" "<<s.getCGPA()<<endl;
        studentStack.pop();
    }
}
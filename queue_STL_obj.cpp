#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <queue>
using namespace std;

// bfs dfs strongly connected total 4 ta question thakbe
// https://justpaste.it/df7wj
// ass class bfs matrix try to convert to
class student
{
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
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
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
    queue<student> studentQueue;
    ifstream fin("cgpa.txt");

    int idd;
    string namee;
    double ccgpa;

    for (int i = 0; i < 3; i++)
    {
        fin >> idd >> namee >> ccgpa;

        student s(idd, namee, ccgpa);
        studentQueue.push(s);
    }

    while (!studentQueue.empty())
    {
        student s = studentQueue.front();
        cout << s.getID() << " " << s.getName() << " " << s.getCGPA() << endl;
        studentQueue.pop();
    }
}
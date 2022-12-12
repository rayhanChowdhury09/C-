#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
int main()
{
    queue<string>namequeue;
    ifstream fin("name.txt");
    string name;

    for(int i=0; i<3; i++)
    {
        fin>>name;
        namequeue.push(name);
    }

    while(!namequeue.empty())
    {
        cout<<namequeue.front()<<endl;
        namequeue.pop();
    }
}
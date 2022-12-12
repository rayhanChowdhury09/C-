#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>namequeue;

    namequeue.push("Rayhan");
    namequeue.push("Prova");
    namequeue.push("Maliha");

    while(!namequeue.empty())
    {
        cout<<namequeue.front()<<endl;
        namequeue.pop();
    }
}
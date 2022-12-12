#include<iostream>
#include<stack>
#include<fstream>
using namespace std;
int main()
{
    stack <string> namestack;
    ifstream fin("name.txt");
    string name;
    
    for(int i=0; i<3; i++)
    {
        fin>>name;
        namestack.push(name);
    }


    while(!namestack.empty())
    {
        cout<<namestack.top()<<endl;
        namestack.pop();
    }

}
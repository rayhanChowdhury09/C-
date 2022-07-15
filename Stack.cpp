#include<iostream>
using namespace std;
#define MAXSIZE 10

int s[MAXSIZE];
int top;

void push(int value);
int pop();
int topp();
bool is_Stack_Empty();
bool is_Stack_Full();
void display_Stack();
int stackSize();


void push (int value)
{
    if (is_Stack_Full())
    {
        cout<<"Overflow Stack is full .....";
    }
    else
    {
        s[top] = value;
        top++;
    }
}
int pop()
{
    int x;
    if (is_Stack_Empty())
    {
        cout<<"Underflow Stack is Empty ....";
        return NULL;
    }
    else 
    {
        top--;
        x = s[top];
    }
    return x;
}
bool is_Stack_Empty()
{
    return (top == 0);
}
bool is_Stack_Full()
{
    return (top >= MAXSIZE);
}
int stackSize()
{
    return top;
}

void display_Stack()
{
    for (int i=top-1; i>=0; i--)
    {
        cout<<"\t\t"<<s[i]<<endl;
    }
}
int topp()
{
    if (is_Stack_Empty())
    {
        cout<<"\t Stack is empty ....";
        return NULL;
    }
    return s[top-1];
}
void stack_initialize()
{
    top = 0;
}

int main()
{
    int option, n, value;
    stack_initialize();
    cout<<" Implement Stack operations : \n";
    do 
    {
        cout<<"\n\n 1. Push an element in Stack   : ";
        cout<<"\n\n 2. Pop an element form Stack  : ";
        cout<<"\n\n 3. Display Stack              : ";
        cout<<"\n\n 4. Display current Stack Size : ";
        cout<<"\n\n 5. Display top element        : ";
        cout<<"\n\n 6. Exit                       : ";
        cout<<"\n\n Enter your Choice             : ";
       cin>>option;
       switch (option)
       {
        case 1:
             cout<<"\n\n Insert an element in Stack           : ";
             cin>>n;
             push(n);
             break;
        
        case 2:
            value = pop();
            if(value!=NULL)
            cout<<"\n\n Popped element is                      : "<<value<<endl;
            break;
        case 3:
            display_Stack();
            break;
        case 4:
            value=stackSize1();
            cout<<"\n\n Currently number of element in stack is :  "<<value;
            break;
        case 5:
            value=topp();
            if(value != NULL)
                cout<<"\n\n Current top element is               : "<<value;
            break;
        case 6:
            return 0;

       }
    }
    while (option <=6);
    return 0;
}
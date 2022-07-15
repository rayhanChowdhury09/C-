#include<iostream>   //problem is find out sum of digit 
using namespace std;
int main()
{   // for the test case 
   int t;
   cin>>t;
   while (t--)  //untill t==0
   {
   int n;
   cin>>n;
   int digit_sum = 0;
   while (n > 0)
   {
    int last_digit = n % 10;
    digit_sum = digit_sum + last_digit;
    n = n/10;
   }
   cout<< digit_sum;
   }
}
#include<iostream>

using namespace std;

int main()
{
    int a=5;
    int b=8;

    int *p;
    int *q;

    p=&a;
    q=&b;
    
    int temp=0;
    temp = *q;
   *q = *p;
   *p = temp;
   cout<<a<<" "<<b;

}
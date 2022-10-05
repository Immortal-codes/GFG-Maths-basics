#include<iostream>

using namespace std;

int main()
{
    int sum=0;
    int N;
    cin>>N;
        int r=0;
        while(N>0){
            int rem=N%10;
            N=N/10;
            sum=sum+rem;
        }
        if(sum<10)
        r=1;
        else if((sum%11)==0)
        r=1;
        return r;
    
}
#include<iostream>
using namespace std;
int main()
{
    //Program to find factorial of input inetegr
    
    int n;
    cout<<"Enter an integer to find its factorial: ";
    cin>>n;
    if(n>0){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of input number "<<n<<" : "<<fact<<endl;
    }
    if(n==0)
        cout<<"Factorial of input number "<<0<<" : "<<1<<endl;
    if(n<0)
        cout<<"You have entered negative number "<<endl;
        
    return 0;
}

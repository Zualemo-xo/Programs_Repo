#include <iostream>
#include <vector>
#include <iterator>
#include<algorithm>
using namespace std;
void union1(vector<int> a,vector<int> b){
    int n=a.size();
    int m=b.size();
    int l;
    vector<int> c;
    (n>m)?l=m:l=n;
    int i=0;int j=0;
    while(i<l || j<l){
        if(a[i]<b[j])
        {
           cout<<a[i]<<" ";
           i+=1;
        }
        else if(a[i]>b[j])
        {
           cout<<b[j]<<" ";
           j+=1;
        }
        else if(a[i]==b[j])
        {
           cout<<b[j]<<" ";
           j++;
           i++;
        }
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i+=1;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j+=1;
    }
}
void intersection1(vector<int> a,vector<int> b){
    int n=a.size();
    int m=b.size();
    int l;
    vector<int> c;
    (n>m)?l=m:l=n;
    int i=0;int j=0;
    while(i<l || j<l){
        if(a[i]<b[j])
        {
           i+=1;
        }
        else if(a[i]>b[j])
        {
           j+=1;
        }
        else if(a[i]==b[j])
        {
           cout<<b[j]<<" ";
           j++;
           i++;
        }
    }
}
int main()
{
    vector<int> a={1,2,3,4,5,6};
    vector<int> b={3,4,6,7,8};
    cout<<"Union of Sorted Array"<<endl;
    union1(a,b);
    cout<<"\nIntersection of Sorted Array"<<endl;
    intersection1(a,b);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string& s) {
    int n=s.length();
    n=(n<<1)|1;
    int L[n];
    int M=0,Mi=0;
    for(int i=1,C=0,R=0;i<n;++i){
        L[i]=(i<R)?min(L[(C<<1)-i],R-i):0;
        while(i+L[i]<n && i-L[i]>0 && (!((i+L[i]+1)&1) || s[(i+L[i]+1)>>1]==s[(i-L[i]-1)>>1]))
            L[i]++;
        if(L[i]>M)
            M=L[i],Mi=i;
        if(i+L[i]>R)
            C=i,R=i+L[i];
    }
    return s.substr((Mi-M)>>1,M);
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<longestPalindrome(s)<<'\n';
    }
    return 0;
}

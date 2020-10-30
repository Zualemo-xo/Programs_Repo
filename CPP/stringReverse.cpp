#include <bits/stdc++.h>
using namespace std;

void strReverse(string& str){
   int n = str.length();
  
   cout<<"interative reverse :";
   for (int i = 0; i < n / 2; i++)
      swap(str[i], str[n - i - 1]);
}

int main(){
   string str = "ANOM";
   strReverse(str);
   cout << str;
   return 0;
}

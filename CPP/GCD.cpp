//GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
//Euclidean Algorithm

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
	int a,b;
	cin>>a>>b;
  int ans = gcd(a,b);
  cout<<ans<<endl;
	return 0;
}		

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k = 1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<k<<" ";
				k++;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}

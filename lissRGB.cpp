#include<bits/stdc++.h>
using namespace std;
main()
{
	string acc,ins;
	cin>>acc>>ins;
	int cnt=1;
	for(int i=0,j=0;i<acc.length(),j<ins.length();j++)
	{
		if(acc[i]==ins[j])
		{
			cnt++;
			i++;
		}
	}
	cout<<cnt;
	//new change in dev
}

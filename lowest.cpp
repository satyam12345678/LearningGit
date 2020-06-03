#include<iostream>
using namespace std;
main()
{
	int c1=1,c2=1,c3=2,team;
	if((c1<=c2)&&(c1<=c3))
	{
		team=c1;
	}
	else if((c2<=c1)&&(c2<=c3))
	{
		team=c2;
	}
	else if((c3<=c2)&&(c3<=c1))
	{
		team=c3;
	}
	cout<<team<<endl;
	cout<<"H";
}

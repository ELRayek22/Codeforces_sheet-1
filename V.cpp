#include <iostream>
using namespace std;


int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;

	if(c=='<')
	{
		(a<b)?cout<<"Right\n":cout
	<<"Wrong\n";
	}
	if(c=='>')
	{
		(a>b)?cout<<"Right\n":cout
	<<"Wrong\n";

	}
	if(c=='=')
	{
		(a==b)?cout<<"Right\n":cout
	<<"Wrong\n";
	}

	return 0;
}

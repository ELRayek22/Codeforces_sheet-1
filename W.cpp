#include <iostream>
#define yes  cout<<"Yes\n"

using namespace std;

int main()
{
	int a,b,ans;
	char c,d;

	cin>>a>>c>>b>>d>>ans;
	if(c=='+') (ans==a+b)?yes:cout<<a+b<<endl;
	if(c=='-') (ans==a-b)?yes:cout<<a-b<<endl;
	if(c=='*') (ans==a*b)?yes:cout<<a*b<<endl;


	return 0;
}

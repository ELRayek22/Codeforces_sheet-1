#include <iostream>
using namespace std;

int main()
{
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;

	(r1<l2 || r2<l1)? cout<<"-1\n":cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;

	return 0;
}

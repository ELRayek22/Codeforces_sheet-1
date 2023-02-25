// solution 1

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x<=y && x<=z )
        cout<<x;
    else if (y<=x && y<=z )
        cout<<y;
    else
        cout<<z;
        cout<<" ";
    if (x>=y && x>=z)
        cout<<x;
    else if (y>=x && y>=z)
        cout<<y;
    else
        cout<<z;
}
//solution 2

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	cout<<min(a,min(b,c))<<" "<<max(a,max(b,c))<<endl;
	return 0;
}

// solution 1

#include<iostream>
using namespace std;

int main() {

	int n,x,y;
	cin >> n;

	if (n>=100 && n<1000)
    {
        x=(n/100) %10;
        if(x%2 == 0)
            cout<<"EVEN";
        else
            cout<<"ODD";
    }
    else if (n>=1000 && n<10000)
    {
        y=(n/1000) %10;
        if(y%2 == 0)
        cout<<"EVEN";
        else
            cout<<"ODD";
    }

	return 0;
}
// solution 2

#include <iostream>
using namespace std;

int main()
{
	int n,s;
    cin>>n;
    while(n>=10)
    {
       n = n/10;
    }
    (n%2==0)?cout<<"EVEN":cout<<"ODD";
    return 0;
}

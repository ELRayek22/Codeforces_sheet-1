// solution 1

#include <iostream>
using namespace std;

int main() {

	int days;

	cin >> days;

	int years = days / 365;
	days = days % 365;	// now we remove # of complete years

	int months = days / 30;
	days = days % 30;

	cout<<years<<"\n"<<months<<"\n"<<days<<"\n";


	return 0;
}
// solution 2

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int y=n/365; n%=365;
	int m=n/30; n%=30;
	int d=n;
	cout<<y<<" years\n"
	<<m<<" months\n"
	<<d<<" days\n";
}

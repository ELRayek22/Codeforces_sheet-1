// solution 1

#include<iostream>
using namespace std;

int main ()
{
	char ch;
	cin>>ch;

	if (ch>=48 && ch<=57)
        cout<<"IS DIGIT";
    else
    {
        cout<<"ALPHA\n";
        if(ch>=65 && ch<=90)
            cout<<"IS CAPITAL";
        else
            cout<<"IS SMALL";
    }


	return 0;
}
// solution 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char c;
	cin>>c;
	if(c>='A' and c<='Z')
		cout<<("ALPHA\nIS CAPITAL\n");
	else if(c>='a' and c<='z')
		cout<<("ALPHA\nIS SMALL\n");
	else
		cout<<"IS DIGIT\n";
	return 0;


}

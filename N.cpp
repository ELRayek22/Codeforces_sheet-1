// solution 1

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

    if (ch>='a' && ch<='z')
    {
        ch=ch-32;
        cout<<ch;
    }
    else
    {
        ch=ch+32;
        cout<<ch;
    }

}
// solution 2

#include <iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;

	if(c>='A' and c<='Z')
		cout<<char(c+32)<<endl;
	else if(c>='a' and c<='z')
		cout<<char(c-32)<<endl;
	return 0;
}

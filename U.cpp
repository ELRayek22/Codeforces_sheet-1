#include<iostream>
using namespace std;

int main()
{

	double d;
	cin>>d;

	if(ceil(d)==floor(d)) 
    cout<<"int "<<int(d)<<endl;
	else 
    cout<<"float "<<int(d)<<" "<<d-int(d)<<endl;

	return 0;
}

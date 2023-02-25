// solution 1

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

   // cout << "Enter 3 numbers:\n";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num1<num3)
    {
        if (num2 < num3)
            cout << num1 << "\n" << num2 << "\n" << num3 << endl;
        else cout << num1 <<"\n"<< num3 <<"\n"<< num2<<endl ;
    }

    else

    if ( num2<num3)
    {
        if (num1 < num3)
            cout << num2 <<"\n"<< num1<<"\n"<< num3<<endl;
        else cout << num2 << "\n" << num3 << "\n" << num1 << endl;
    }

    else
    {
        if(num2<num1)
            cout << num3 << "\n" << num2 << "\n" << num1 << "\n";
        else cout << num3 << "\n" << num1 << "\n" << num2 << "\n";
    }

    cout<<"\n";

    if (num1 > num2 && num1>num3)
    {
        if (num2 > num3)
            cout << num1 << "\n " << num2 << "\n " << num3 << endl;
        else cout << num1 <<"\n "<< num3 <<"\n "<< num2<<endl ;
    }

    else

    if ( num2>num3 && num2 > num1)
    {
        if (num3 > num1)
            cout << num2 <<"\n"<< num3<<"\n" << num1<<endl;
        else cout << num2 << "\n" << num3 << "\n" << num1 << endl;
    }

    else

    if (num3>num1 && num3>num2)
    {
        if(num1>num2)
            cout << num3 << "\n" << num1 << "\n" << num2 << "\n";
        else cout << num3 << "\n" << num2 << "\n" << num1 << "\n";
    }



    return 0;
}
// solution 2

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	if(a<=b && a<=c)
	{
		cout<<a<<endl;
		(b<c)?cout<<b<<endl<<c<<endl:cout<<c<<endl<<b<<endl;
	}
	else if(b<=a && b<=c)
	{
		cout<<b<<endl;
		(a<c) ?cout<<a<<endl<<c<<endl:cout<<c<<endl<<a<<endl;
	}
	else if(c<=a && c<=b)
	{
		cout<<c<<endl;
		(a<b)?cout<<a<<endl<<b<<endl:cout<<b<<endl<<a<<endl;
	}


	cout<<"\n"<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}

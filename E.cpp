// solution 1

#include <iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(9)<<"\n";

    double area,B,r;
    cin>>r;
    B=3.141592653;
    area = B * r*r ;
    cout<<area;


    return 0;


}
// solution 2

#include <iostream>
#include<iomanip>
using namespace std;

#define PI 3.141592653

int main()
{
	double d;
	cin>>d;

	cout<<fixed<<setprecision(9)<<PI*pow(d,2)<<endl;
}

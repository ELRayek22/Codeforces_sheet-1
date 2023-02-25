// solution 1

#include <iostream>
using namespace std;

int main()
{
 float n;
   cin >> n;  //take value from the user

 if(n < 0 || n > 100){     //implementing the above logic
    cout << "Out of Intervals" << endl;
 }else{
     if(n >= 0 && n <= 25){
        cout << "Interval [0,25]" << endl;
  }else if(n > 25 && n <= 50){
        cout << "Interval (25,50]" << endl;
  }else if(n > 50 && n <= 75){
        cout << "Interval (50,75]" << endl;
  }else{
        cout << "Interval (75,100]" << endl;

  }
 }

 return 0;

}

// solution 2
#include <iostream>
using namespace std;

int main()
{
	double x;
	cin>>x;
	if(x<0 || x>100)
        cout<<"Out of Intervals";
	else if(x<=25)
	    cout<<"Interval [0,25]";
	else if(x<=50)
	    cout<<"Interval (25,50]";
	else if(x<=75)
	    cout<<"Interval (50,75]";
	else if(x<=100)
	    cout<<"Interval (75,100]";


	return 0;
}

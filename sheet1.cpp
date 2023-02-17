

/*A. Say Hello With C++
Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.
*/
/*
#include<iostream>
using namespace std;

int main()
{
	string A;
	cin>>A;

	cout<<"Hello, "<< A ;
}
*/
/*
B. Basic Data Types
Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int A;
	long long B;
	char C;
	float D;
	double E;

	cin>> A >> B >> C >> D >> E ;

	cout<<A<<"\n"<<B<<"\n"<<C<<"\n"<<D<<"\n"<<E<<"\n";
}

/*
C. Simple Calculator
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
*/
/*
#include<iostream>
using namespace std;

int main()
{
	long long x,y;
	cin>>x>>y;
	cout<<x<<" + "<<y<<" = "<<x+y<<"\n";
	cout<<x<<" * "<<y<<" = "<<x*y<<"\n";
	cout<<x<<" - "<<y<<" = "<<x-y<<"\n";
}

/*
D. Difference
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.
*/
/*
#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;

	cout<<"Difference = "<<(a*b)-(c*d)<<"\n";
}

/*
E. Area of a Circle
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/
// solution 1
/*
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
/*
F. Digits Summation
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.
*/
// solution 1
/*
#include<iostream>
using namespace std;

int main()
{
    long long N, M,last_digit_N,last_digit_M,sum;
    cin>>N>>M;
    last_digit_N = N%10;
    last_digit_M = M%10;
    sum = last_digit_N + last_digit_M;

    cout<<sum<<"\n";

    return 0 ;
}
// solution 2
#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<a%10+b%10<<"\n";
	return 0;
}
/*
G. Summation from 1 to N
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

.∑i=1Ni
Input
Only one line containing a number N (1≤N≤109)
Output
Print the summation of the numbers that are between 1 and N (inclusive).
*/
/*
#include <iostream>
using namespace std;


int main()
{
	long long n,sum;
	cin>>n;
	sum=(n*(n+1))/2;
	cout<<sum<<"\n";
	return 0;
}
/*
H. Two numbers
Input
Only one line containing two numbers A and B (1≤A,B≤103)
Output
Print 3 lines that contain the following in the same order:

"floor A / B = Floor result" without quotes.
"ceil A / B = Ceil result" without quotes.
"round A / B = Round result" without quotes
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double a,b;
	cin>>a>>b;
	cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<"\n";
	cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<"\n";
	cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<"\n";
}
/*
I. Welcome for you with Conditions
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	double a ,b ;
	cin>>a>>b;
	if(a>b || a==b)
	{
		cout<<"Yes"<<"\n";
	}
	else{
		cout<<"No"<<"\n";
	}
}
/*
J. Multiples
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	if(a%b==0 || b%a==0)
	{
		cout<<"Multiples"<<"\n";
	}
	else
	{
		cout<<"No Multiples"<<"\n";
	}
}
/*
K. Max and Min
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
*/
// solution 1
/*
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
/*
L. The Brothers
Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT"
*/
// solution 1
/*
#include <iostream>
using namespace std;

int main()
{
    string na1,na2;
    string ma1,ma2;
    cin>>na1 >>na2;
    cin>>ma1 >>ma2;

    if(na2 == ma2)
        cout<<"ARE Brothers";
    else
        cout<<"NOT";
}

// solution 2

#include <iostream>
using namespace std;

int main()
{
	string a,b,c,d;
	cin>>a>>b>>c>>d;

	(b==d)?

	cout<<"ARE Brothers":cout<<"NOT"<<"\n";

}
/*
M. Capital or Small or Digit
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
*/
// solution 1
/*
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
/*
N. Char
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem
*/
// solution 1
/*
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
/*
O. Calculator
Given a mathematical expression. The expression will be one of the following expressions: A+B, A−B, A∗B and A/B.

Print the result of the mathematical expression.

Input
Only one line contains A,S and B (1≤A,B≤104), S is either (+,−,∗,/).

Output
Print the result of the mathematical expression.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;

	switch(c){
		case '+':
		cout<<a+b<<"\n";
		break;
		case '-':
		cout<<a-b<<"\n";
		break;
		case '*':
		cout<<a*b<<"\n";
		break;
		case '/':
		cout<<a/b<<"\n";
		break;
	}
	return 0;
}
/*
P. First digit !
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/
// solution 1
/*
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
/*
Q. Coordinates of a Point
Input
Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

Output
Print the answer to problem above.
*/
// solution 1
/*
#include<iostream>
using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;
    if(x>0 && y>0)
        cout<<"Q1";
    else if (x<0 && y>0)
        cout<<"Q2";
    else if (x<0 && y<0)
        cout<<"Q3";
    else if (x>0 && y<0)
        cout<<"Q4";
    else if (x==0 && y==0)
        cout<<"Origem";
    else if (x==0 && y<0 || y>0)
        cout<<"Eixo X";
    else
        cout<<"Eixo Y";
}
// solution 2

#include <iostream>
using namespace std;

int main()
{
	double x,y;
	cin>>x>>y;
	if(x==0 && y==0) cout<<"Origem";
	else if(y==0) cout<<"Eixo X";
	else if(x==0) cout<<"Eixo Y";
	else if(x>0 && y>0) cout<<"Q1";
	else if(x<0 &&y>0) cout<<"Q2";
	else if(x<0 && y<0) cout<<"Q3";
	else if(x>0 && y<0) cout<<"Q4";
	return 0;
}
/*
R. Age in Days
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples
*/
// solution 1
/*
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
/*
S. Interval
Given a number X. Determine in which of the following intervals the number X belongs to:

[0,25], (25,50], (50,75], (75,100]

Note:

if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.
For example:

[0,25] indicates numbers between 0 and 25.0000, including both.

(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

Input
Only one line containing a number X ( - 1000 ≤ X ≤ 1000).

Output
Print the answer to the problem above.
*/
// solution 1
/*
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
	if(x<0 || x>100) cout<<"Out of Intervals";
	else if(x<=25) cout<<"Interval [0,25]";
	else if(x<=50) cout<<"Interval (25,50]";
	else if(x<=75) cout<<"Interval (50,75]";
	else if(x<=100) cout<<"Interval (75,100]";


	return 0;
}
/*
T. Sort Numbers
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
*/
// solution 1
/*
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
/*
U. Float or int
Given a number N. Determine whether N is float number or integer number.

Note:

If N is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N (1≤N≤103)
Output
Print the answer required above.
*/
/*
#include<iostream>
using namespace std;

int main()
{

	double d;
	cin>>d;

	if(ceil(d)==floor(d)) cout<<"int "<<int(d)<<endl;
	else cout<<"float "<<int(d)<<" "<<d-int(d)<<endl;

	return 0;
}
/*
V. Comparison
Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output
Print "Right" if the comparison is true, "Wrong" otherwise.
*/
/*
#include <iostream>
using namespace std;


int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;

	if(c=='<')
	{
		(a<b)?cout<<"Right\n":cout
	<<"Wrong\n";
	}
	if(c=='>')
	{
		(a>b)?cout<<"Right\n":cout
	<<"Wrong\n";

	}
	if(c=='=')
	{
		(a==b)?cout<<"Right\n":cout
	<<"Wrong\n";
	}

	return 0;
}
/*
W. Mathematical Expression
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.
*/
/*
#include <iostream>
#define yes  cout<<"Yes\n"

using namespace std;

int main()
{
	int a,b,ans;
	char c,d;

	cin>>a>>c>>b>>d>>ans;
	if(c=='+') (ans==a+b)?yes:cout<<a+b<<endl;
	if(c=='-') (ans==a-b)?yes:cout<<a-b<<endl;
	if(c=='*') (ans==a*b)?yes:cout<<a*b<<endl;


	return 0;
}
/*
X. Two intervals
Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1], [l2,r2] where (1≤l1,l2,r1,r2≤109), (l1≤r1,l2≤r2).

It's guaranteed that l1≤r1 and l2≤r2.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;

	(r1<l2 || r2<l1)? cout<<"-1\n":cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;

	return 0;
}
/*
Y. The last 2 digits
Given 4 numbers A, B, C and D. Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A, B, C and D (2≤A,B,C,D≤109).

Output
Print the last 2 digits from their Multiplication
*/
/*
#include<iostream>
using namespace std;

int main()
{
   int a,b,c,d,mul;
    cin>>a>>b>>c>>d;
    mul=((a%100)*(b%100)*(c%100)*(d%100))%100;


    if(mul<=9)
    {
        cout<<0<<mul<<endl;
    }
    else{
        cout<<mul<<endl;
    }

    return 0;


}
/*
Z. Hard Compare
Given 4 numbers A,B,C and D. If AB > CD print "YES" otherwise, print "NO".

Input
Only one line containing 4 numbers A,B,C and D (1≤A,C≤107) , (1≤B,D≤1012)
Output
Print "YES" or "NO" according to the problem above.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	long long  a,b,c,d ;
	cin >> a >> b >> c >> d ;
	if(b*log(a) > d * log(c))
        cout<<"YES"<<"\n";
	else
	    cout<<"NO"<<"\n";
	return 0 ;
}
*/

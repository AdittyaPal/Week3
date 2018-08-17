#include <iostream>
using namespace std;
int main()
{
int a;
int b;
cout<<"Enter an integer."<<endl;
cin>>a;
cout<<"Enter another integer."<<endl;
cin>>b;
cout<<"Sum of the integers "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
cout<<"Difference of the integers "<<a<<" and "<<b<<" is "<<(a-b)<<endl;
cout<<"Product of the integers "<<a<<" and "<<b<<" is "<<(a*b)<<endl;
cout<<"Quotient obtained on dividing "<<a<<" by "<<b<<" is "<<(a/b)<<endl;
cout<<"Remainder obtained on dividing "<<a<<" by "<<b<<" is "<<(a%b)<<endl;
float x=0.0f;
float y=0.0f;
cout<<"Enter a decimal number."<<endl;
cin>>x;
cout<<"Enter another decimal number."<<endl;
cin>>y;
cout<<"Sum of the decimal numbers "<<x<<" and "<<y<<" is "<<(x+y)<<endl;
cout<<"Difference of the decimal numbers "<<x<<" and "<<y<<" is "<<(x-y)<<endl;
cout<<"Product of the decimal numbers "<<x<<" and "<<y<<" is "<<(x*y)<<endl;
cout<<"Quotient obtained on dividing "<<x<<" by "<<y<<" is "<<(x/y)<<endl;
cout<<"Remainder cannot be obtained on dividing two float numbers."<<endl;
return 0;
}

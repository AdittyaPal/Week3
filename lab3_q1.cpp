# include <iostream>
using namespace std;
int main()
{
int value;
int a,b;
double doubleVar=1.3;
float floatVar=1.6f;
bool booleanVar=true;
char ch;
value=0;
a=9;
b=-5;
ch='i';
cout<<"Integer variables are a="<<a<<",b="<<b<<"and value="<<value<<endl;
cout<<"Size of integer variables is "<<sizeof(a)<<" bytes."<<endl;
cout<<"Double variable is doubleVar="<<doubleVar<<endl;
cout<<"Size of double variables is "<<sizeof(doubleVar)<<" bytes."<<endl;
cout<<"Float variable is floatVar="<<floatVar<<endl;
cout<<"Size of float variables is "<<sizeof(floatVar)<<" bytes."<<endl;
cout<<"Boolean variable is booleanVar="<<booleanVar<<endl;
cout<<"Size of boolean variables is "<<sizeof(booleanVar)<<" bytes."<<endl;
cout<<"Character variable is doubleVar="<<ch<<endl;
cout<<"Size of character variables is "<<sizeof(char)<<" bytes."<<endl;
return 0;
}

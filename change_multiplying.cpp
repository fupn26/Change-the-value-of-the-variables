#include "std_lib_facilities.h"

int main()
{
int a = 7;
int b = 1;
a = a*b; // a = 7
b = a/b; // b = 7
a = b/a; // a = 1 
cout<<"a = "<<a<<" b = "<<b<<'\n';
}

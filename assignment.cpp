#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
float a, b, c, s, area;
cout<<"Please enter the value of sides of triangle: \n Enter the value of side a:";
cin>>a;
cout<<endl;
cout<<"Enter the value of side b:"; cin>>b; cout<<endl;
cout<<"Enter the value of side c:"; cin>>c; cout<<endl;
s = (a + b + c ) / 2;
area = s*(s-a) * (s-b) * (s-c);
cout<<"Area of the triangle is:" << area;
return 0;
}

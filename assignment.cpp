#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
float rad, vol, area, circum;
cout <<"Please enter radius of sphere :";
cin>>rad;
area = 4*3.14*rad*rad;
circum = (4/3)*3.14*rad*rad*rad;
cout <<"\n Area of sphere is :"<<area<<endl;
cout<<"Circumference and Volume of sphere is:"<<circum<<endl;
return 0;
}

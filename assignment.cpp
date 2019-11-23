#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
float year, month, day;
cout<<"How old are you? Enter your age in years:";
cin>>year;
month=12*year;
day=365*year;
cout<<"\n Your age in months is:"<<month;
cout<<"\n Your age in days is:"<<day;
return 0;
}

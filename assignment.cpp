#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
	int i,j,k,l;
float sum, avrg, product;
cout<<"Enter four numbers below \nenter first number:"; 
cin>>i;
cout<<"\n enter second number:"; 
cin>>j;
cout<<"\n enter third number:"; 
cin>>k;
cout<<"\n enter fourth number:"; 
cin>>l;
sum = i+j+k+l;
product = i*j*k*l;
avrg = ( i+j+k+l )/4;
cout<<"\n Sum of entered numbers is:"<<sum;
cout<<"\n Product of entered numbers is:"<<product;
cout<<"\n Average of entered numbers is:"<<avrg;
return 0;
}

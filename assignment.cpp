#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
float miles, km;
cout<<"Enter the distance in Miles:"; 
cin>>miles;
km = 1.609 * miles;
cout<<"Value of kilometer is:" << km << endl;
return 0;
}

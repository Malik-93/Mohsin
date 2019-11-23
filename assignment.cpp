#include<iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
float total, pages_Read_In_One_Day, days_taken, remainig_pages, read_pages;
cout<<"Please enter toatal pages of a book:";cin>>total;
cout<<"Please enter number of pages read in one day:";cin>>pages_Read_In_One_Day;
cout<<"Please enter number of days a person has read the book:";cin>>days_taken;
read_pages = days_taken * pages_Read_In_One_Day;
remainig_pages = total - read_pages;
cout<<"Pages that have been read are:"<<read_pages;
cout<<"\nPages that are remaining:"<<remainig_pages;
return 0;
}

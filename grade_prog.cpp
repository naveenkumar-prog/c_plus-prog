#include<iostream>
using namespace std;
int mark1,mark2,mark3,mark4,mark5;
float avg;
int main ()
{
	
	cout<<"\nEnter the mark of the sub 1 :";
	cin>>mark1;
	
	cout<<"\nEnter the mark of the sub 2 :";
	cin>>mark2;
	
	cout<<"\nEnter the mark of the sub 3 :";
	cin>>mark3;
	
	cout<<"\nEnter the mark of the sub 4 :";
	cin>>mark4;
	
	cout<<"\nEnter the mark of the sub 5 :";
	cin>>mark5;
	
	 int sum = mark1+mark2+mark3+mark4+mark5; 
	 avg=sum/5;

	if(avg<35 || mark1<35 || mark2<35 || mark3<35 ||mark4<35 || mark5 <35) 
	{
		cout<<"Your grade is F";
	}
	else if(avg<50 && avg>=35)
	{
		cout<<"Your grade is C";
	}
	else if(avg<60 && avg>=50)
	{
		cout<<"Your grade is B";
	}
	else if(avg<75 && avg>=60)
	{
		cout<<"Your grade is B+";
	}
	else if(avg<90 && avg>=75)
	{
		cout<<"Your grade is A";
	}else 
	{
		cout<<"Your grade is A+";
	}
	
	
	return 0;
}

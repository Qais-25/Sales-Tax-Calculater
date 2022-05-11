#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	double tax,product,total,cal;
	cout<<"Please Enter herer Your Product Price : $";
	cin>>product;
	cout<<"Enter here how many Percent Sales tax in this Product (please Enter tax %): ";
	cin>>tax;
	cal=product*(tax*0.01);
	total=product+cal;
	cout<<"\n\nYour Product Price is : $"<<product<<endl;
	cout<<"Sales tax in this Product is : $"<<cal<<endl;
	cout<<"Total Product Price with Tax is : $"<<total;
	return 0;
}

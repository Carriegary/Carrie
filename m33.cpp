#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
    if((x%3==0)||(x%7==0))
		cout<<"Yes"<<endl;
	else
		cout<<"NO"<<endl;
}
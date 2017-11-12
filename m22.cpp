#include <iostream.h>
void fun(int);
void main()
{
	int m;
	cout<<"1到m之间能被7或11整除"<<endl;
	cin>>m;
	fun(m);
}
void fun(int m)
{
	int i,a,b,n=0,leap;
	for(i=1;i<=m;i++)
	{
		a=i%7;
		b=i%11;
		if(a==0||b==0)
		{
			leap=1;
			n++;
			cout<<i<<endl;
		}
	}
	cout<<"n="<<n<<endl;
}

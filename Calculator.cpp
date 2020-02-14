#include<iostream>
using namespace std;
main()
{
	int a,ans,b;
	char sym;
	cout<<"Write the first value=";
	cin>>a;
	cout<<"Write thr second value=";
	cin>>b;	
	cout<<"Write the operation=";
	cin>>sym;
	int Answer(int,int,char);
	ans=Answer(a,b,sym);
	cout<<"The answer is ";
	cout<<ans;
}
int Answer(int a,int b,char sym)
{
	bool r=1;
	int ans;
	switch(sym)
	{
		case '+':
			ans=a+b;
			break;	
		case '-':
			ans=a-b;
			break;	
		case '*':
			ans=a*b;
			break;	
		case '/':
			ans=a/b;
			break;		
		default:
			r=0;
			break;
	}
	if(r=1)
	return ans;
	else
	cout<<"Irrelevet";
}

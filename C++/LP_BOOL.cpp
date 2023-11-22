#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int licz=0;
int a;
cout<<"podaj liczbe pierwsza"<<endl;
cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			licz++;
		}
		if(licz>a){break;}
	}
	if(licz==2)
	{
		cout<<"liczba pierwsza"<<endl;
		
	}
	else
	{
		cout<<"liczba nie jest pierwsza"<<endl;
	}


return 0;
}


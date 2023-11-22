#include<iostream>
using namespace std;
int lp(int x)
{
	int f=0;

	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			f++;
		}
		
	}
	if(f==2)
	{
		return 1;
	
	}
	else
	{
	
	return 0;
	}



}
int main(){
	int a,b,suma=0;
cout<<"podaj liczbe a"<<endl;
cin>>a;
cout<<"podaj liczbe b"<<endl;
cin>>b;
int a1=lp(a);
int b1=lp(b);

if(a1==1 && b1==1)
{
	if(a > b)
	{
		suma=a - b;
	}
	else
	{
	suma= b - a;
	
	}

}
else
{cout<<"liczby nie sa blizniacze"<<endl;}
if(suma==2)
{

cout<<"Liczby s¹ blizniacze"<<endl;


}
else
{

cout<<"liczby nie s¹ blizniacze"<<endl;



}

return 0;

}


#include<iostream>
using namespace std;
int main(){


	int a,p=0;
	
	cout<<"Podaj liczbe";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
	
		if(a%i==0){
		p++;
		
		}
	}
		if(p==2)
		{
		cout<<"liczba pierwsza"<<endl;
		}
		else{
		
		cout<<"Liczba nie jest pierwsza"<<endl;
		}
		
		
		
		
		
		
	
	
	
	
	



}



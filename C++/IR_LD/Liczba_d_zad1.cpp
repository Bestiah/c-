#include<iostream>
using namespace std;
	bool LD(unsigned int n)
{
	int suma=0;
	for(int i=1; i < n;i++)
		{
			if(n%i==0)
			{
				suma=suma+i;
			 }
		}
		if(suma==n)
		{
		return true;
		}
		else
		{
		return false;
		}
}
int main(){
 int j;
 	cout<<"Podaj liczbe"<<endl;
 	cin>>j;
 	if(LD(j)==1){cout<< "Liczba jest doskona³a " <<endl; }
 	else{
 	cout<<"liczba nie jest doskonala"<<endl;
 	}


}


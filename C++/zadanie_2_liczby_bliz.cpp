#include<iostream>
using namespace std;
bool czy(int a, int b){
	int roz;
	roz=b-a;
    	if(roz==2)
		{
    		return true;	
		}
		else
		{
			return false;
		}
}
void licz(int ilosc){
    int l=3;  
    for(int i=1;i<=ilosc;i++){
      if(czy(l,l+2)){
      	cout<<"Pierwsza liczba = "<<l<<" "<<"Druga liczba = "<<l+2<<endl;
	  }
    l=l+2;
    }
}

int main() {
    int ilosc;
    cout<<"Podaj ilosc par "<<endl;
    cin>>ilosc;
    licz(ilosc);
    return 0;
}

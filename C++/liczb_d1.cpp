#include<iostream>
using namespace std;
	bool czyPierwsza(int n)
{
	int i;
	if(n==1) {return false;}
	for(int i=2; i*i<=n;i++)
		{
			if(n%i==0){return false; }
		}
		

	
		return true;
	
	
}
int main(){
 int j;
 for(j=1;j<=100;j++)
 {
 	if(czyPierwsza(j)==1){cout<< j << " "; }
 }


}


/*W instrukcji switch obudowanej p�tl� (while/do while) umie�� nast�puj�ce opcje:
1. Podaj zmienn� Z1. Z1 musi by� z zakresu od 10 do 30 (p�tla)
2. Oblicz i wy�wietl jaka jest �rednia liczb od 0 do Z1.
3. Wy�wietl liczby od Z1 do -10 za pomoc� p�tli for. Zapisz od zmiennej Z2 ilo�� liczb nieparzystych.
4. Oblicz do zmiennej Z3 i wy�wietl NWW z liczb Z1 i Z2.
5. Wy�wietl czy zmienna Z3 jest liczb� pierwsz�.
6. Exit


*/
#include<iostream>
using namespace std;
int main(){
	
	
	int menu,Z1,Z2=0,Z3;
	double s=0;
	do{
		cout<<"1. Podaj zmienn� Z1. Z1 musi by� z zakresu od 10 do 30 (p�tla)"<<endl;
		cout<<"2. Oblicz i wy�wietl jaka jest �rednia liczb od 0 do Z1."<<endl;
		cout<<"3. Wy�wietl liczby od Z1 do -10 za pomoc� p�tli for. Zapisz od zmiennej Z2 ilo�� liczb nieparzystych."<<endl;
		cout<<"4. Oblicz do zmiennej Z3 i wy�wietl NWW z liczb Z1 i Z2."<<endl;
		cout<<"5. Wy�wietl czy zmienna Z3 jest liczb� pierwsz�."<<endl;
		cout<<"6.Exit"<<endl;
		cin>>menu;
	
		switch(menu){
		
			case 1:{
			do{
			cout<<"Podaj liczbe"<<endl;
			cin>>Z1;
			if(Z1<10 || Z1>30){
			cout<<"Podaj inna liczbe"<<endl;
			cin>>Z1;
			}
				}while(Z1<10 || Z1>30);
			
			break;
			}
		
		
			case 2:{
			int p=1;
			
			for(int i=1;i<=Z1;i++)
			{
			p=p+i;
			}
			s=p/Z1;
			cout<<"srednia = "<<" "<<s<<endl;
			
			
			
			break;
			}
		
			case 3:{
			int Z2=0;
			for(int i=-10;i <= Z1;Z1--)
			
			{
				cout<<Z1<<endl;
			if(Z1%2==1){Z2++;}
			
			}
			
			break;
			}
			
			
			case 4:{
				int a=0,b=0;
				do{
				
				a=Z1;
				b=Z2;
				if(Z1<Z2){Z2=Z2-Z1;}
				if(Z2<Z1){Z1=Z1-Z2;}
				
				
				
				
				}while(Z1!=Z2);
				Z3=a*b/Z1;
				cout<<"NWW z Z1 i Z2 ="<<" "<<Z3<<endl;
			
			
			break;
			}
			
			case 5:{
			int p=0;
			for(int i=1;i<=Z3;i++)
			{
			if(Z3%i==0){
				p++;			
				}
			
			
			}
			if(p==0){
			
			cout<<"jest to liczba pierwsza"<<endl;
			
			
			}
			else
			{
			cout<<"Liczba nie jest pierwsza"<<endl;
			
			}
			break;
			}
			
			
			case 6:{return 0;}
		
		
		}
	
	
	}while(menu!=6);
}

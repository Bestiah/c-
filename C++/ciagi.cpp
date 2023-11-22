#include<iostream>
#include <vector>
using namespace std;
bool x_pierwszych(int a, int liczba = 2) {
    if (a < 2) {
        return false;
    }
    if (liczba * liczba > a) {
        return true;
    }
    if (a % liczba == 0) {
        return false;
    }
    return x_pierwszych(a, liczba + 1);
}

void x_pierwszych(unsigned int n, int nr = 2) {
    if (n == 0) {
        return;
    }

    if (x_pierwszych(nr)) {
        std::cout << nr << " ";
        x_pierwszych(n - 1, nr + 1);
    } else {
        x_pierwszych(n, nr + 1);
    }
}

int main(){

int menu=0;
do{
	cout<<"1.liczba pierwsza"<<endl;
	cout<<"2.ciag a=5 wyn=2,3,5,7,11 "<<endl;
	cout<<"3.ciag a=5 b=10 wyn=11,13,17,19,23"<<endl;
	cout<<"4.ciag a=5 b=10 wyn=5,7"<<endl;
	cout<<"5.exit"<<endl;
cin>>menu;
switch(menu)
{

case 1:{

unsigned int a = 5;
x_pierwszych(n);
    
break;
}

}



}while(menu=!5);

}


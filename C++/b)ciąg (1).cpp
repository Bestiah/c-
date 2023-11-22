 #include<iostream>
 using namespace std;
 ciag(int n)
 {
 	if(n==1)
 	{
 		return 2;
	 }
	else
	{
		
		 return ciag(n-1)*2;
	}
		
	
 	
 	
 	
 }
 
 
 
 
 
 
 int main()
 {
int n;
cout<<"podaj liczbe"<<endl;
cin>>n;
cout<<ciag(n)<<endl; 	
 	
 	
 }

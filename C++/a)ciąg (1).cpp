 #include<iostream>
 using namespace std;
 ciag(int n)
 {
 	if(n==1)
 	{
 		return 4;
	 }
	else
	{
		
		 return 3+ciag(n-1);
	}
		
	
 	
 	
 	
 }
 
 
 
 
 
 
 int main()
 {
int n;
cout<<"podaj liczbe"<<endl;
cin>>n;
cout<<ciag(n)<<endl; 	
 	
 	
 }

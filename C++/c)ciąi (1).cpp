 #include<iostream>
 using namespace std;
 float ciag(float n)
 {
 	if(n==1)
 	{
 		return 0.2;
	 }
	else
	{
		
		
		 return ciag(n-1)*-3;
	}
		
	
 	
 	
 	
 }
 
 
 
 
 
 
 int main()
 {
float n;
cout<<"podaj liczbe"<<endl;
cin>>n;
cout<<ciag( (float) n)<<endl; 	
 	
 	
 }

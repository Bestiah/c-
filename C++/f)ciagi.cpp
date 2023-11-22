 #include<iostream>
 using namespace std;
 float ciag(float n)
 {
 	if(n==1)
 	{
 		return 1.5;
	 }
	

		if(n==2)
		
		{
			return 1;
			
		}
		if(n==3)
		{
			return ciag(n-1)-0.5*2 ;
		}
}
		 

		
	
 	
 	
 	
 
 
 
 
 
 
 
 int main()
 {
float n;
cout<<"podaj liczbe"<<endl;
cin>>n;
cout<<ciag(n)<<endl; 	
 	
 	
 }

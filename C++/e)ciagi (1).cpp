 #include<iostream>
 using namespace std;
 int ciag(int n)
 {
 	if(n==1)
 	{
 		return 3;
	 }
	

		if(n%2==0)
		
		{
			return ciag(n-1)+2;
			
		}
		if(n%2!=0)
		{
			return ciag(n-2)+1;
		}
}
		 

		
	
 	
 	
 	
 
 
 
 
 
 
 
 int main()
 {
float n;
cout<<"podaj liczbe"<<endl;
cin>>n;
cout<<ciag(n)<<endl; 	
 	
 	
 }

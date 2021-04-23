#include<iostream>
using namespace std;

void rotation(int a[],int n);
int main() {
	
	int t;
	cin >> t;
	
	int temp;
	
	while(t--){
	    
	    int n, m,r;
	    cin >> n;
	    
	    int a[n];
	   
	    cout<<"Enter elements";
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
       rotation(a,n);
    	
		cout<<"Final"<<endl;
		 for(int i = 0;i<n;i++)
	       cout<< a[i];
		
	       
	    
	
}
}

void rotation(int a[],int n)
{ int temp;
	 temp=a[n-1];
	    for(int i=n-1;i>0;i--)
	    {
	    	a[i]=a[i-1];
		}
		
		a[0]=temp;
}

	       
	       
	       

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int i,j;
	    int m,n;cin>>m>>n; int a[m][n];
	   for( i=0;i<m;i++)
	       for( j=0;j<n;j++) 
	            cin>>a[i][j];  
	   
	   
	   int u=0,d=m-1;int l=0,r=n-1;
	   
	   while(l<=r&&u<=d){
	   
	       for( j=u;j<=r;j++) 
	            cout<<a[u][j]<<" "; 
	       u++;
	       for( j=u;j<=d;j++) 
	            cout<<a[j][r]<<" ";  
	       r--;
	        if(u<=d){
               for( j=r;j>=l;j--) {
                    cout<<a[d][j]<<" ";}  
               d--;}
                if(l<=r){
     	   for( j=d;j>=u;j--) {
	            cout<<a[j][l]<<" ";}  
                l++;
                    
                };
	   }
                cout<<endl;
	   
	 
	    
	}
	return 0;
}

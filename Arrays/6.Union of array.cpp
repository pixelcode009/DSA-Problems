#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	   
	    cout << doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
int doUnion(int a[], int n, int b[], int m)  {
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(a[i]);
    for(int i=0;i<m;i++)
    s.insert(b[i]);
    return s.size();

}

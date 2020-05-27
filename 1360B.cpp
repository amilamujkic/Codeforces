#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
   int t;
   cin>>t;
 
   for(int i=0;i<t;i++){
 
       int n;
       cin>>n;
       int arr[n];
 
       for(int j=0;j<n;j++) {
          cin>>arr[j];
       }
 
        int diff = INT_MAX; 
 
    for (int l=0; l<n-1; l++) 
      for (int j=l+1; j<n; j++) 
          if (abs(arr[l] - arr[j]) < diff) 
                diff = abs(arr[l] - arr[j]); 
       
  
  cout<<diff<<endl;
   }
}

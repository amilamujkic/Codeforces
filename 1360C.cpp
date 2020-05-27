#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
   int t;
   cin>>t;
 
   for(int i=0;i<t;i++){
 
     int n;
     cin>>n;
     int arr[n];
     int even=0;
     int odd=0;
 
     for(int j=0;j<n;j++) {
       cin>>arr[j];
       if(arr[j]%2==0) {
           even++;
       }
       else odd++;
     }
 
     if(odd%2==0 and even%2==0) {
        cout<<"YES"<<endl;
     }
     else if((odd%2) != (even%2)) {
       cout<<"NO"<<endl;
     }
     else {
       sort(arr,arr+n);
       bool consc=false;
       for(int j=0;j<n-1;j++) {
               if(arr[j+1]-arr[j]==1){
                 consc=true;
                 break;
               }
       }
       if(consc==true){
         cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
     }
 
    
   }
}

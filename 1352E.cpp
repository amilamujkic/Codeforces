#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 

    int t;
    cin>>t;

    while(t--) {

       int n;
       cin>>n;

       int arr[n];
       vector <int> count (n+1);

       for(int i=0;i<n;i++) {
         cin>>arr[i];
         count[arr[i]]++;
       }

       int elements = 0;

       for(int i=0;i<n;i++) {
          int sum=0;
          for(int j=i;j<n;j++) {

              sum+=arr[j];
              if(j==i) {
                continue;
              }

              if(sum<=n) {
                 elements += count[sum];
                 count[sum] = 0;
              }

          }
       }

       cout<<elements<<endl;

    }
}

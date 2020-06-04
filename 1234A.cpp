#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  int q;
  cin>>q;
 
  for(int i=0;i<q;i++) {
      int n;
      cin>>n;
      int sum=0;
      int arr[n];

      for(int j=0;j<n;j++){
        cin>>arr[j];
        sum+=arr[j];
      }

      cout<<(sum+n-1)/n<<endl;
    }
}

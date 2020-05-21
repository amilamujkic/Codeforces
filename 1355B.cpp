#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  int t;
  cin>>t;
  vector<int> result(t);
  fill(result.begin(), result.end(), 0);
 
  for(int i=0;i<t;i++) {
    int n;
    cin>>n;
 
    int ex[n];
 
    for(int j=0;j<n;j++) {
      cin>>ex[j];
    }
 
    sort(ex, ex + n); 
    int numero=0;
 
    for(int p=0;p<n;p++) {
           numero++;
           if(ex[p]==numero) {
               result[i]++;
               numero=0;
           }
  }
 
  }
 
  for(int k=0;k<t;k++) {
    cout<<result[k]<<endl;
  }
 
}

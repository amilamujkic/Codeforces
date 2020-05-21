#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  long long int t;
  cin>>t;
 
  long long int digits[t];
  long long int rec[t];
 
  for(long long int i=0;i<t;i++) {
       cin>>digits[i];
       cin>>rec[i];
  }
 
  for(long long int j=0;j<t;j++){
      long long int result=digits[j];
      while(rec[j]>1) {
         long long int largest = 0; 
         long long int smallest = 9; 
         long long int prc = result;
  
         while (prc) { 
         long long int r = prc % 10; 
  
          largest = max(r, largest); 
          smallest = min(r, smallest); 
         prc = prc / 10; 
         }
 
         result=result+ (largest*smallest);
         if(largest==0 or smallest==0) {
           break;
         }
         rec[j]--;
      }
 
      cout<<result<<endl;
  }
 
}
 

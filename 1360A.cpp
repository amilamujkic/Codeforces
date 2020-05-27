#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
   int t;
   cin>>t;
 
   for(int i=0;i<t;i++){
     int a;
     int b;
      cin>>a>>b;
      int area = INT_MAX;
      int maxi;
 
      maxi= max(2*a,b);
      area= min(area, maxi*maxi);
 
      maxi= max(2*b,a);
      area= min(area, maxi*maxi);
 
      area= min(area,(a+b)*(a+b));
 
      cout<<area<<endl;
   }
}

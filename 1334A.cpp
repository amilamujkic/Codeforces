#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
 
    int t;
    cin>>t;
 
    for(int i=0;i<t;i++) {
        int n;
        cin>>n;
 
        bool possible = true;
        int p[n];
        int c[n];
 
        for(int j=0;j<n;j++) {
          cin>>p[j];
          cin>>c[j];
        }
 
        if(c[0]>p[0]) {
          possible = false;
          goto next;
        }
 
        for(int j=1;j<n;j++) {
            if(p[j]<p[j-1] or c[j]<c[j-1]){
                 possible = false;
                 goto next;
            }
            if(c[j]>c[j-1] and p[j]<=p[j-1]) {
              possible = false;
              goto next;
            }
            if(c[j]>p[j]){
              possible = false;
              goto next;
            }
            if((c[j]-c[j-1])>(p[j]-p[j-1])){
              possible = false;
              goto next;
            }
        }
 
        next:
        if(possible) {
          cout<<"YES"<<endl;
        }
        else { cout<<"NO"<<endl;}
 
    }
  
}

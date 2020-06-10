#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int n;
        cin>>n;

        int arr[n];
        vector<int> vaca(n);

        for(int j=0;j<n;j++){
           cin>>arr[j];
           arr[j]=(j+arr[j])%n;
           if(arr[j]<0){
              arr[j]=n+arr[j];
           }
           vaca[arr[j]]++;
        }

        bool okay = true;

        for(int j=0;j<n;j++) {
            if(vaca[j]==0){
               okay=false;
               goto next;
            }
        }

        next:
        if(okay){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
  
}

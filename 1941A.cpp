#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    int bi[n],ci[m];
    for(int i=0;i<n;i++){
        cin>>bi[i];
    }
    for(int i=0;i<m;i++){
        cin>>ci[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(bi[i]+ci[j]<=k){
              x++;
            }
        }
    }

    cout<<x<<endl;
}

return 0;
}

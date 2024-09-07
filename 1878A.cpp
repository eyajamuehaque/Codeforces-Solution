#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    long long n,k;
    cin>>n>>k;
    bool yes=false;
    for(int i=0,a;i<n;i++){
        cin>>a;
        if(a==k){
            yes=true;
        }
    }
    if(yes) cout<< "YES"<<endl;
    else cout<< "NO"<<endl;
}

return 0;
}

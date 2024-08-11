#include<iostream>
using namespace std;

int main(){

long long a,b,n,k;

int t;
cin>>t;
while(t--){
    cin>>a>>b>>n;
    int k=n-(n%a)+b;

    if(k<=n){
        cout<<k<<endl;
    }else {
        cout<<(n-(n%a)-(a-b))<<endl;
    }


}


return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

    int n;
    cin>>n;
    int a[n];
    long long b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b+=abs(a[i]);
    }
    cout<<b<<endl;
}

return 0;
}

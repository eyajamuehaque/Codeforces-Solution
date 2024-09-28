#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n];
    long long s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    s-=(2*a[n-2]);
    cout<<s<<endl;
}

return 0;
}

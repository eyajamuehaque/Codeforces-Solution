#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int b=0;
    for(int i=0;i<n;i++){
        b+=(a[i]-a[0]);
    }

    cout<<b<<endl;
}

return 0;
}

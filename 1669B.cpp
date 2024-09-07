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
    int ans=-1;
    for(int i=2;i<n;i++){
        if(a[i-2]==a[i] && a[i-1]==a[i]){
            ans=a[i];
        }
    }
    cout<<ans<<endl;
}

return 0;
}

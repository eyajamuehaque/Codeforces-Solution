#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    int diff=INT_MAX;
    for(int i=1;i<n;i++){
        diff=min(diff,s[i]-s[i-1]);
    }


    cout<<diff<<endl;
}


return 0;
}

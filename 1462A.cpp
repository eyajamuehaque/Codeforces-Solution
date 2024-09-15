#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0,r=n-1;
    bool yes=true;
    for(int i=0;i<n;i++){
        if(yes){
            b[i]=a[l];
            l++;
        }else{
            b[i]=a[r];
            r--;
        }
        yes=!yes;
    }

    for(int i=0;i<n;i++){
        cout<<b[i];
        if(i<n-1){
            cout<< " ";
        }
    }
    cout<<endl;
}

return 0;
}

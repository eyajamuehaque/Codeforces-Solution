#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

while(n--){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }

    if(a[0]!=a[1] && a[0]!=a[2]){
        cout<<1<<endl;
    }else if(a[1]!=a[0] && a[1]!=a[2]){
        cout<<2<<endl;
    }else{
        for(int i=2;i<t;i++){
            if(a[i]!=a[i-1]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}



return 0;
}

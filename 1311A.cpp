#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;

    if(a>b){
        int c=a-b;
        if(c%2!=0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else if(b>a){
        int c=b-a;
        if(c%2==0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else if(a==b){
        cout<<0<<endl;
    }
}

return 0;
}

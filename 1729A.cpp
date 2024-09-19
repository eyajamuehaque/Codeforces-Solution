#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a,b,c,d,e;
    cin>>a>>b>>c;
        d=abs(a-1);
        e=abs(b-c)+abs(c-1);

    if(d<e){
        cout<<1<<endl;
    }else if(d>e){
        cout<<2<<endl;
    }else {
        cout<<3<<endl;
    }
}

return 0;
}

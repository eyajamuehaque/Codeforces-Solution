#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int s[4];
    for(int i=0;i<4;i++){
        cin>>s[i];
    }

    int a,b,c,d;

    if(s[0]>s[1]){
        a=s[0];
        d=s[1];
    }else{
        a=s[1];
        d=s[0];
    }

    if(s[2]>s[3]){
        b=s[2];
        c=s[3];
    }else{
        b=s[3];
        c=s[2];
    }

    if(a>c && b>d){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }
}


return 0;
}

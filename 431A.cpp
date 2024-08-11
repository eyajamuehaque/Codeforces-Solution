#include<iostream>
using namespace std;

int main(){

int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;

string s;
cin>>s;

int t=0;

for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        t+=a1;
    }else if(s[i]=='2'){
        t+=a2;
    }else if(s[i]=='3'){
        t+=a3;
    }else if(s[i]=='4'){
        t+=a4;
    }
}

cout<<t<<endl;


return 0;
}

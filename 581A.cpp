#include<iostream>
using namespace std;

int main(){

int a,b,c,d;
cin>>a>>b;

if(a>b){
    c=b;
    d=a-b;
}else{
    c=a;
    d=b-a;
}

cout<<c<<" "<<d/2<<endl;

return 0;
}

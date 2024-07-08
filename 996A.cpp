#include<iostream>
using namespace std;

int main(){

int a,d,b=0;;
cin>>a;

while(a>0){

    if(a>=100){
        b+=a/100;
        a=a%100;
    }else if(a>=20){
        b+=a/20;
        a=a%20;
    }else if(a>=10){
        b+=a/10;
        a=a%10;
    }else if(a>=5){
        b+=a/5;
        a=a%5;
    }else if(a>=1){
        b+=a/1;
        a=a%1;
    }



}

cout<<b<<endl;



return 0;
}

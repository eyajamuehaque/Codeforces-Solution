#include<iostream>
#include<string>
using namespace std;

int main(){

string x,y;


    cin>>x>>y;

    for(int i=0;i<x.length();i++){
    if(x[i]!=y[i]){
        cout<<"1";
    }else{
        cout<<"0";
    }
    }



return 0;
}

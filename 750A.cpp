#include<iostream>
using namespace std;

int main (){

int n,k;
cin>>n>>k;

int count=0,q=0;

for(int i=1;i<=n;i++){
    q+=i*5;
    if((q+k)<=240){
        count++;
    }else{
        break;
    }
}

cout<<count<<endl;



return 0;
}

#include<iostream>
using namespace std;

int main(){

int n,q=0;
cin>>n;

int p,a=0;

for(int i=0;i<n;i++){
    cin>>p;
    if(p>0){
        a+=p;
    }
    else if(p<0){
        if(a>0){
            a--;
        }else{
            q++;
        }
    }
}

cout<<q<<endl;


return 0;
}

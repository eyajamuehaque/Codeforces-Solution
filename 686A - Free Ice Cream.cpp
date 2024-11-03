#include<iostream>
using namespace std;

int main(){

long long n,x,d,c=0;
char y;
cin>>n>>x;
while(n--){
    cin>>y>>d;
    if(y=='+'){
        x+=d;
    }else if(y=='-'){
        if(x>=d){
            x-=d;
        }
        else{
           c++;
        }
    }
}

cout<<x<< " "<<c<<endl;


return 0;
}

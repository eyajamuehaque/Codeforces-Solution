#include<iostream>
using namespace std;

int main(){

int n,x,y;
cin>>n;

x=4;

while(true){
    y=n-x;

    int xcom=0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            xcom=1;
            break;
        }
    }

    int ycom=0;
    for(int i=2;i*i<=y;i++){
        if(y%i==0){
            ycom=1;
            break;
        }
    }

    if(xcom && ycom){
        break;
    }
    x++;
}

cout<<x<< " "<<y<<endl;


return 0;
}

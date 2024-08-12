#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n,m;
cin>>n>>m;

bool nextPrime=false;

for(int num=n+1;num<=50;num++){
    bool prime=true;

    if(num<=1) prime=false;
    else if(num==2) prime=true;
    else if(num%2==0) prime=false;
    else
    {
        for(int i=3;i<= sqrt(num);i++){
            if(num%i==0){
                prime=false;
                break;
            }
        }
    }

    if(prime){
        if(num==m){
            nextPrime=true;
        }
        break;
    }
}

if(nextPrime){
    cout<< "YES"<<endl;
}else {
    cout<< "NO"<<endl;
}


return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

int n;
cin>>n;

double p,t,c=0;

for(int i=0;i<n;i++){
    cin>>p;
    c=c+p;
    t=c/n;
}

cout<<fixed<<setprecision(12)<<t<<endl;



return 0;
}

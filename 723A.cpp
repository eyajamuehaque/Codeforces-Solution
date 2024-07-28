#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int x,y,z,a,b;
cin>>x>>y>>z;

int p[3]={x,y,z};
sort(p,p+3);

a=p[1]-p[0];
b=p[2]-p[1];

int c=a+b;

cout<<c<<endl;



return 0;
}

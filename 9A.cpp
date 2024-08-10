#include<iostream>
using namespace std;

int main(){

int y,z;
cin>>y>>z;

const string p[7]={"","1/1","5/6","2/3","1/2","1/3","1/6"};

int m=max(y,z);

cout<<p[m]<<endl;


return 0;
}

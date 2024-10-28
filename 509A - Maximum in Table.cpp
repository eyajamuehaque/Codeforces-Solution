#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int k=2*n-2;
int l=n-1;
long long p=1,q=1;
for(int i=k;i>l;i--){
    p*=i;
}

for(int i=l;i>0;i--){
    q*=i;
}

cout<<p/q<<endl;

return 0;
}

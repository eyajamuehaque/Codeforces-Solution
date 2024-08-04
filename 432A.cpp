#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int n,k;
cin>>n>>k;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

int eligible=0;

for(int i=0;i<n;i++){
    if((a[i]+k)<=5){
        eligible++;
    }
}

int team=eligible/3;

cout<<team<<endl;


return 0;
}

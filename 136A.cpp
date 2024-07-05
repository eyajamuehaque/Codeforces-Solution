#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int p[n];
int g[n];

for(int i=1;i<=n;i++){
    cin>>p[i];
    g[p[i]]=i;

}

for(int i=1;i<=n;i++){
    cout<<g[i]<<" ";
}

cout<<endl;



return 0;
}

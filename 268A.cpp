#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

string p[n],q[n];

for(int i=0;i<n;i++){
    cin>>p[i]>>q[i];
}

int c=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(p[i]==q[j]){
            c++;
        }
    }
}

cout<<c<<endl;



return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int m,n;
    cin>>m>>n;
    int a=m*n;
    if(a%2==0){
        cout<<a/2<<endl;
    }else{
        cout<<(a/2)+1<<endl;
    }
}

return 0;
}

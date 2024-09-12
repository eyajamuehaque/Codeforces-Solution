#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==0){
        int x=n*a;
        int y=(n/2)*b;
        int z=min(x,y);
        cout<<z<<endl;
    }else{
        int k=n-1;
        int x=k*a;
        int y=(k/2)*b;
        int z=min(x,y);
        cout<<z+a<<endl;
    }
}


return 0;
}

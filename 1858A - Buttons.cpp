#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;

    if(a>b){
        cout<< "First"<<endl;
    }else if(b>a){
        cout<< "Second"<<endl;
    }else{
        cout<< (sum%2==0 ? "Second":"First")<<endl;
    }
}

return 0;
}

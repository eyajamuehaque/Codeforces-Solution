#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        swap(a,b);
    }

    long long diff=(b-a+1)/2;
    long long moves=(diff+c-1)/c;

    cout<<moves<<endl;
}

return 0;
}

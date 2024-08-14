#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;

    int weight=max(2*a,b);
    int height=max(a,2*b);
    int all=max(a+b,max(a,b));

    int s=min(weight,min(height,all));
    cout<<s*s<<endl;
}

return 0;
}

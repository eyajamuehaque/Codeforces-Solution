#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }

    sort(a,a+3);
    int b=abs(a[1]-a[0])+abs(a[1]-a[1])+abs(a[1]-a[2]);
    cout<<b<<endl;
}

return 0;
}

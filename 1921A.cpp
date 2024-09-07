#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int x[4],y[4];
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }
    sort(x,x+4);
    int z=abs(x[0]-x[3]);
    cout<<z*z<<endl;
}

return 0;
}

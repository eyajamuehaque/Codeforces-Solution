#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int n;
cin>>n;

while(n--){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];

    sort(a,a+3);

    if(a[0]!=a[1]){
        cout<<a[0]<<endl;
    }else if(a[1]!=a[2]){
        cout<<a[2]<<endl;
    }

}

return 0;
}

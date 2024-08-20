#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

while(n--){
    string a,b,c;
    cin>>a>>b;

    c[0]=a[0];
    a[0]=b[0];
    b[0]=c[0];

    for(int i=0;i<3;i++){
        cout<< a[i];
    }
    cout<<" ";

    for(int i=0;i<3;i++){
        cout<<b[i];
    }
    cout<<endl;
}



return 0;
}

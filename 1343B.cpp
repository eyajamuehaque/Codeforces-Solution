#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    if(n%4!=0){
        cout<< "NO"<<endl;
    }else {
        cout<< "YES"<<endl;

        for(int i=1;i<=n/2;i++){
            cout<<i*2<< " ";
        }

        for(int i=1;i<n/2;i++){
            cout<<i*2-1<< " ";
        }

        cout<< (n/2)*3-1<<endl;

    }
}


return 0;
}

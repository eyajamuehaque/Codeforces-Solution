#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n*2];
    int e=0,o=0;
    for(int i=0;i<n*2;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    if(e==n && o==n){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }
}


return 0;
}

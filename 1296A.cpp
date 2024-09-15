#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n];
    int x=0,even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x+=a[i];
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(x%2!=0){
        cout<< "YES"<<endl;
    }else if(even>0 && odd>0){
        cout<< "YES"<<endl;
    }else {
        cout<< "NO"<<endl;
    }
}

return 0;
}

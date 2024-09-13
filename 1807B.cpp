#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int x=0,y=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            x+=a[i];
        }else{
            y+=a[i];
        }
    }

    if(x>y){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }

}

return 0;
}

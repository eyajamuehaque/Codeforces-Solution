#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int b=0,c=0;

    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        b+=a;
        if(a==1){
            c++;
        }
    }

    if(b%2!=0){
        cout<< "NO"<<endl;
    }else {
        int hw=b/2;
        if(hw%2==0 || (hw%2==1 && c>1)){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }

    }

}

return 0;
}

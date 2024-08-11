#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    int a[n];
    int c=0,b=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2){
        if(a[i]%2!=0){
            c++;
        }
    }
    for(int i=1;i<n;i+=2){
        if(a[i]%2==0){
            b++;
        }
    }

    if(c==b){
        cout<<c<<endl;
    }else{
        cout<<"-1"<<endl;
    }

}

return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n],b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b+=a[i];
    }
    if(b-n==0){
        cout<< 0<<endl;
    }else if(b<=0 || b<n){
        cout<< 1<<endl;
    }else{
        cout<< b-n<<endl;
    }
}

return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int cl=0,ml=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cl++;
        }else{
            ml=max(ml,cl);
            cl=0;
        }
    }
    ml=max(ml,cl);
    cout<<ml<<endl;
}

return 0;
}

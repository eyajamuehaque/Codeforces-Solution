#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int max=-1,e=0;

    for(int i=0;i<n;i++){
        if(a[i]<=10){
            if(b[i]>max){
                max=b[i];
                e=i+1;
            }
        }
    }
    cout<<e<<endl;
}

return 0;
}

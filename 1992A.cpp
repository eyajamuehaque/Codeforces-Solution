#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);

    int add=5;
    while(add>0){
        if(a[0]<=a[1] && a[1]<=a[2]){
            a[0]++;
        }else if(a[1]<=a[2]){
            a[1]++;
        }else{
            a[2]++;
        }
        add--;
    }

    int d=a[0]*a[1]*a[2];
    cout<<d<<endl;

}

return 0;
}

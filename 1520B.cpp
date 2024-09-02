#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    long long n,b=0,num;
    cin>>n;

    for(int i=1;i<=9;i++){
         num=i;
        while(num<=n){
            b++;
            num=num*10+i;
        }
    }
    cout<<b<<endl;
}

return 0;
}

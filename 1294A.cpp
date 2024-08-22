#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    long long n;
    int a[3];
    cin>>a[0]>>a[1]>>a[2]>>n;
    sort(a,a+3);

    int req=(a[2]-a[0])+(a[2]-a[1]);

    if(req<=n && (n-req)%3==0){
        cout<< "YES"<<endl;
    }else {
        cout<< "NO"<<endl;
    }

}

return 0;
}

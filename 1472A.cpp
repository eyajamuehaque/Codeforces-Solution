#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int w,h,n;
    cin>>w>>h>>n;

    int piece=1;

    while(w%2==0){
        w/=2;
        piece*=2;
    }

    while(h%2==0){
        h/=2;
        piece*=2;
    }

    if(piece>=n){
        cout<< "YES"<<endl;
    }else {
        cout<< "NO"<<endl;
    }


}

return 0;
}

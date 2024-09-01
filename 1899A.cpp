#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int m=(n+1)%3;
    int k=(n-1)%3;

    if(m==0 || k==0){
        cout<< "First"<<endl;
    }
    else {
        cout<< "Second"<<endl;
        }
    }



return 0;
}

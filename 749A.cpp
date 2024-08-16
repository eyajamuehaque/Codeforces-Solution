#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

if(n%2==0){
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i++){
        cout<< "2"<< " ";
    }
    cout<<endl;
}else{
    int k=((n-3)/2);
    cout<<k+1<<endl;
    for(int i=0;i<k;i++){
        cout<< "2"<< " ";
    }
    cout<< "3"<<endl;
}



return 0;
}

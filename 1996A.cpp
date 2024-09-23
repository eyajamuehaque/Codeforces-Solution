#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int c=n/4;
    int d=n%4;
    int e=c+(d/2);
    cout<<e<<endl;

}

return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string s;
    cin>>s;

        if((s[1]=='c' && s[2]=='a') || (s[1]=='a' && s[2]=='b')){
            cout<< "NO"<<endl;
        }else {
            cout<< "YES"<<endl;
        }
}


return 0;
}

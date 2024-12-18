#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string s;
    cin>>s;
    bool yes=true;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[0]){
            yes=false;
            break;
        }
    }
    if(yes){
        cout<< "NO"<<endl;
    }else{
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                break;
            }
        }
        cout<< "YES"<<endl;
        cout<<s<<endl;
    }
}

return 0;
}

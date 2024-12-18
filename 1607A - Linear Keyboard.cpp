#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string k,s;
    cin>>k>>s;
    int m=0,pp=k.find(s[0]);

    for(int i=1;i<s.length();i++){
        int cp=k.find(s[i]);
        m+=abs(cp-pp);
        pp=cp;
    }

    cout<<m<<endl;
}

return 0;
}

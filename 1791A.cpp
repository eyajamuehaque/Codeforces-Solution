#include<iostream>
#include<set>
using namespace std;

int main(){

string s="codeforces";
set<char> chars(s.begin(),s.end());

int t;
cin>>t;

while(t--){
    char c;
    cin>>c;
    if(chars.count(c)){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }
}


return 0;
}

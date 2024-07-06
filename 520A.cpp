#include<iostream>
#include<set>
#include<cctype>

using namespace std;

int main(){

int n;
cin>>n;

string s;
cin>>s;
set<char> letters;

for(int i=0;i<s.length();i++){
    char c=s[i];
    letters.insert(tolower(c));
}

if(letters.size()==26){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



return 0;
}

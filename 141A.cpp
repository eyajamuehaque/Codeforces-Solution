#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){

unordered_map<char,int> a1;
unordered_map<char,int> a3;

string s1,s2,s3;
cin>>s1>>s2>>s3;


for(char c:s1){
    a1[c]++;
}

for(char c:s2){
    a1[c]++;
}


for(char c:s3){
    a3[c]++;
}



if(a1==a3){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



return 0;
}

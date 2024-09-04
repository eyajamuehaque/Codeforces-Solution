#include<iostream>
#include<cctype>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string result= "";
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int j=0;j<8;j++){
            if(isalpha(s[j])){
                result+=s[j];
            }
        }
    }
    cout<<result<<endl;
}

return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int missing=0;
    string required="ABCDEFG";
    for(char diff:required){
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]==diff){
                count++;
            }
        }
        if(count<m){
           missing+=(m-count);
        }
    }
    cout<<missing<<endl;
}

return 0;
}

#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    string s;
    cin>>n>>s;

    char maxChar= ' ';
    int index=0;

    for(int i=0;i<n;i++){
        if(s[i]>maxChar){
            maxChar=s[i];
        }

        if(maxChar){
            index=maxChar-'a'+1;
        }
    }
    cout<<index<<endl;
}

return 0;
}

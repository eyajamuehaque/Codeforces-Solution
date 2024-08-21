#include<iostream>
#include<set>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int tb=0;
    set<char> q;
    for(int i=0;i<n;i++){
        if(!q.count(s[i])){
            tb+=2;
            q.insert(s[i]);
        }else{
            tb+=1;
        }

    }

    cout<<tb<<endl;
}

return 0;
}

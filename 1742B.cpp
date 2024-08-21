#include<iostream>
#include<set>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    set<int> q;
    int a;
    bool yes=true;
    for(int i=0;i<n;i++){
        cin>>a;
        if(q.count(a)>0){
            yes=false;
        }
        q.insert(a);
    }


        if(yes){
            cout<< "YES"<<endl;
        }else {
            cout<< "NO"<<endl;
        }
}


return 0;
}

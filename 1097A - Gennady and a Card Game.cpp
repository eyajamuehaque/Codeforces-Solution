#include<iostream>
using namespace std;
 
int main(){
 
string a;
cin>>a;
bool yes=false;
string b;
for(int i=0;i<5;i++){
    cin>>b;
    for(int j=0;j<2;j++){
        if(a[j]==b[j]){
            yes=true;
        }
    }
 
}
 
if(yes){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }
 
return 0;
}

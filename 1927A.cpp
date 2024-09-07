#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n,c=-1,d=-1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            c=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            d=i;
            break;
        }
    }

    int f=d-c+1;
    cout<<f<<endl;

}

return 0;
}

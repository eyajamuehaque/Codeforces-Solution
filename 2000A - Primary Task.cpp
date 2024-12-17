#include<iostream>
#include<string>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string x;
    cin>>x;
    if(x.length()>=3 && x[0]=='1' && x[1]=='0'){
        string r=x.substr(2);

        if(r[0]=='0'){
            cout<< "NO"<<endl;
        }else {
            int s=stoi(r);
            if(s>=2){
                cout<< "YES"<<endl;
            }else {
                cout<< "NO"<<endl;
            }
        }
    }else {
        cout<< "NO"<<endl;
    }

}


return 0;
}

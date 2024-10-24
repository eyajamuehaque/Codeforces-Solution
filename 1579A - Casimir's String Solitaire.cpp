#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    string s;
    int a=0,b=0,c=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='B'){
            b++;
        }else if(s[i]=='C'){
            c++;
        }
    }

    if((a+c)-b==0){
        cout<< "YES"<<endl;
    }else{
        cout<< "NO"<<endl;
    }

}

return 0;
}

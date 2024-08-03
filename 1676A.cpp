#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

string s;


while(n--){

cin>>s;

int a=0,b=0;

for(int i=0;i<3;i++){
    a+=s[i];
    b+=s[5-i];
}

if(a==b){
    cout<< "YES"<<endl;
}else {
    cout<< "NO"<<endl;
}

}

return 0;
}

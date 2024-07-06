#include<iostream>
using namespace std;

int main(){

long long s[4];

int count=0;

for(int i=0;i<4;i++){
    cin>>s[i];
}

for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(s[i]==s[j]){
        count++;
        break;
        }
    }
}

cout<<count<<endl;


return 0;
}

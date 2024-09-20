#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    char s[10][10];
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>s[i][j];
            if(s[i][j]=='X'){
                int ring=min(min(i,9-i),min(j,9-j))+1;
                sum+=ring;
            }
        }
    }
    cout<<sum<<endl;
}

return 0;
}

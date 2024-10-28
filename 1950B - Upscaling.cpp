#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int s=2*n;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if((i/2 + j/2)%2==0){
                cout<<"#";
            }else{
                cout<<".";
            }
        }
        cout<<endl;
    }

}

return 0;
}

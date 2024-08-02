#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;



while(n--){

        int a[4],c=0,b;

cin>>b;

for(int i=1;i<4;i++){
    cin>>a[i];
    if(b<a[i]){
        c++;
    }
}

cout<<c<<endl;

}

return 0;
}

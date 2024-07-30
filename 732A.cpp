#include<iostream>
using namespace std;

int main(){

int k,r,n=1,p;

cin>>k>>r;

while(true){

    p=(n*k)%10;
    if(p==0 || p==r){
        break;
    }
    n++;
}

cout<<n<<endl;

return 0;
}

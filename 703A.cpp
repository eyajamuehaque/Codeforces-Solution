#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

    int m,c;
    int m1=0,c1=0;

while(n--){

        cin>>m>>c;
        if(m>c){
            m1++;
        }else if(c>m){
            c1++;
        }


}

if(m1>c1){
    cout<< "Mishka"<<endl;
}else if(c1>m1){
    cout<< "Chris"<<endl;
}else {
    cout<< "Friendship is magic!^^"<<endl;
}


return 0;
}

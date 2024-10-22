#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int x[3];
    for(int i=0;i<3;i++){
        cin>>x[i];
    }

    sort(x,x+3);

    if(x[1]==x[2]){
        cout<< "YES"<<endl;
        cout<<x[0]<<" "<<x[0]<<" "<<x[2]<<endl;
    }else{
        cout<< "NO"<<endl;
    }

}

return 0;
}

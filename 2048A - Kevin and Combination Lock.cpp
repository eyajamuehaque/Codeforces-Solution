#include<iostream>
using namespace std;

bool canUnlock(int x){
    while(true){
        int prev=x;
        int multiplier=1,result=0;

        while(x>0){
            if(x%100==33){
                x/=100;
            }else{
                result+=(x%10)*multiplier;
                multiplier*=10;
                x/=10;
            }
        }
        x=result;

        if(prev==x){
            if(x>=33) {
                x-=33;
            }else{
                break;
            }
        }
    }
    return x==0;
}

int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        cout<<(canUnlock(x)?"YES\n":"NO\n");
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>p(n);
        int x=1;
        for(int i=k-1;i<n;i+=k){
            p[i]=x++;
        }

        for(int i=0;i<n;i++){
            if(p[i]==0){
                p[i]=x++;
            }
        }

        for(int i:p){
            cout<<i<< " ";
        }
        cout<<endl;
    }

    return 0;
}

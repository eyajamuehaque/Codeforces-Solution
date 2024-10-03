#include<iostream>
#include<bitset>
using namespace std;

void Solve(){

    long long b,c,d,a;
    cin>>b>>c>>d;
    bitset<64> b_b(b);
    bitset<64> b_c(c);
    bitset<64> b_d(d);
    bitset<64> b_a(0);

    int mp[2][2][2];
    mp[0][0][0]=0;
    mp[0][1][0]=0;
    mp[1][0][1]=0;
    mp[1][1][1]=0;
    mp[0][0][1]=1;
    mp[1][1][0]=1;
    mp[0][1][1]=-1;
    mp[1][0][0]=-1;

    for(int i=0;i<64;i++){
        int chars=mp[b_b[i]][b_c[i]][b_d[i]];
        if(chars==-1){
            cout<<-1<<endl;
            return;
        }else{
            b_a[i]=chars;
        }
    }

    cout<<b_a.to_ullong()<<endl;

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--){
    Solve();
}

return 0;

}

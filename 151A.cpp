#include<iostream>
using namespace std;

int main(){

int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int td=(k*l)/nl;
int tl=(c*d)/1;
int pp=p/np;

cout<<min(td,min(tl,pp))/n<<endl;



return 0;
}

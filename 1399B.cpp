#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int min_a= *min_element(a,a+n);
    int min_b= *min_element(b,b+n);

    long long tab=0;

    for(int i=0;i<n;i++){
        int diff_a=a[i]-min_a;
        int diff_b=b[i]-min_b;

        int jab=min(diff_a,diff_b);

        tab += jab+(diff_a-jab)+(diff_b-jab);
    }

    cout<<tab<<endl;

}

return 0;
}

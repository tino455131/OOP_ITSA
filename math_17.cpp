#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
int GCD(long long int t,long long int v){
    if(t%v==0){
        return v;
    }else return GCD(v,t%v);
}
int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>a>>b){
        if(i!=0) cout<<endl;
        cout<<GCD(a,b);
        // printf("%d", GCD(a,b));
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
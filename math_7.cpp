#include <iostream>
#include <iomanip>
using namespace std;
typedef double data_type;
int main(){
    data_type a;
    long long int b;
    int i=0;
    while(cin>>b){
        if(i!=0) cout<<endl;
        cout<<b<<" "<<b*b<<" "<<b*b*b;
        // printf("%lld %lld %lld",b,b*b,b*b*b);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
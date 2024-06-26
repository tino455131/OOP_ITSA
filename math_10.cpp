#include <iostream>
#include <iomanip>
using namespace std;
typedef double data_type;
int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>fixed>>setprecision(1)>>a){
        if(i!=0) cout<<endl;
        b = a*9.0/5.0 + 32;
        cout<<fixed<<setprecision(1)<<b;
        // printf("%.1f", b);
        i++;
    }
    // printf("\n");
    cout<<endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>a>>b){
        if(i!=0) cout<<endl;
        cout<<(a+b)*(a+b);
        // printf("%lld",(a+b)*(a+b));
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
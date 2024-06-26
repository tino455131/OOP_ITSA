#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>a){
        if(i!=0) cout<<endl;
        long long int sum = 0;
        for(int j=1; j<=a; j++){
            cout<<j<<"*"<<j<<"="<<j*j<<endl;
            // printf("%d*%d=%lld\n",j,j,j*j);
        }
        i++;
    }
    return 0;
}
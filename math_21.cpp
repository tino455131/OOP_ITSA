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
        long long int sum=1;
        while(a>0){
            sum*=a;
            a--;
        }
        cout<<sum;
        // printf("%lld", sum);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
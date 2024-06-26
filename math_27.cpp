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
        long long int sum = 0;
        if(b>a){
            long long int temp=b;
            b=a;
            a=temp;
        }
        for(int j=b; j<=a; j++){
            sum+=j;
        }
        cout<<sum;
        // printf("%lld", sum);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
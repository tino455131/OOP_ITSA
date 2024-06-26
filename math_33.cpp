#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;

int main(){
    data_type a;
    data_type b;
    cin>>a;
    // scanf("%lld", &a);
    int flag = 0;
    for(int i=1;i<=a;i++){
        int sum = 0;

        for(int j=1;j<=i/2;j++){
            if(i % j==0){
                sum += j;
            }
        }
        if(sum == i){
            if(flag) cout<<" ";
            cout<<i;
            // printf("%d", i);
            flag = 1;
        }
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
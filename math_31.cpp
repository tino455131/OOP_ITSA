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
        int flag =0;
        for(int j=1; j<=a; j++){
            if(j%6==0){
                if(j%12 != 0){
                    sum += j;
                }
            }
        }
        cout<<sum;
        // printf("%lld",sum);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
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
        if(a>31){
            cout<<"Value of more than 31";
            // printf("Value of more than 31");
        }else{
            long long int temp = 1<<a;
            cout<<temp;
            // printf("%lld", 1<<a);
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
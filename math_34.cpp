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
        int flag = 0;
        for(int j=1;j<=a;j++){
            if(a%j==0){
                if(flag) cout<<" ";
                cout<<j;
                // printf("%d", j);
                flag = 1;
            }
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
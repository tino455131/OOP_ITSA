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
        int flag = 0;
        for(long long int j=2; j<a; j++){
            if(a%j==0){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<"NO";
            // printf("NO");
        }else{
            cout<<"YES";
            // printf("YES");
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
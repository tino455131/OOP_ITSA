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
            if(a>100 || b>100){
                cout<<"outside";
                // printf("outside");
            }else{
                cout<<"inside";
                // printf("inside");
            }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
typedef int data_type;
int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>a){
        if(i!=0) cout<<endl;
        cout<<"NT10="<<a/10<<endl;
        // printf("NT10=%d\n",a/10);
        a = a - 10*(a/10);
        cout<<"NT5="<<a/5<<endl;
        // printf("NT5=%d\n",a/5);
        a = a - 5*(a/5);
        cout<<"NT1="<<a;
        // printf("NT1=%d",a);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
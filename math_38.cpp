#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(){
    data_type a[3];
    data_type b;
    data_type c;
    int i=0;
    while(cin>>a[0]>>a[1]>>a[2]){
        if(i!=0) cout<<endl;
        data_type maxi = max(max(a[0],a[1]),a[2]);
        int j=0;
        for(;j<3;j++){
            if(maxi==a[j]){
                int temp=a[2];
                a[2] = a[j];
                a[j] = temp;
                break;
            }
        }
        
        if(a[2]<a[0]+a[1]){
            cout<<"fit";
            // printf("fit");
        }else{
            cout<<"unfit";
            // printf("unfit");
        }
        

        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
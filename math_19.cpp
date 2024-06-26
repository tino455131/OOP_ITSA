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
        cout<<fixed<<setprecision(1);
        if(a<=800){
            cout<<a*0.9;
            // printf("%.1f", a*0.9);
        }else if(a < 1500){
            cout<<a*0.9*0.9;
            // printf("%.1f", a*0.9*0.9);
        }else{
            cout<<a*0.9*0.79;
            // printf("%.1f", a*0.9*0.79);
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
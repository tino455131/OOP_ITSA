#include <iostream>
#include <iomanip>
using namespace std;
typedef double data_type;
int main(){
    data_type a;
    int b;
    int i=0;
    while(cin>>b){
        if(i!=0) cout<<endl;
        // double sum=0;
        cout<<fixed<<setprecision(1)<<(float)b * 1.6;
        // printf("%.1f", (float)b * 1.6);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
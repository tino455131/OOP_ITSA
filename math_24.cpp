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
        double sum = 0;
        while(a>120){
            sum += (double)b*1.66;
            a--;
        }
        if(a<=120 && a>60){
            sum += (double)(a-60)*b*1.33;
            a-=(a-60);
        }
        sum+=(double)a*b;
        cout<<fixed<<setprecision(1)<<sum;
        // printf("%.1f", sum);

        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
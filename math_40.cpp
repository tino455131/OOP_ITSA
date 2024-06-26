#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(){
    data_type a;
    data_type b;
    data_type c;
    int i=0;
    while(cin>>a){
        if(i!=0) cout<<endl;
        int sum = 0;
        int flag = 0;
        for(int j=1;j<=a;j++){
            sum+=j;

            cout<<j;
            // printf("%d", j);

            if(j!=a) cout<<" + ";
        }

        cout<<" = "<<sum;
        // printf(" = %d", sum);

        i++;
    }
    cout<<"\n";
    // printf("\n");
    return 0;
}
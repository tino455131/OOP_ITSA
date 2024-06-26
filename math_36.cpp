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
        switch (a){
        case 3 ... 5:
            cout<<"Spring";
            // printf("Spring");
            break;
        case 6 ... 8:
            cout<<"Summer";
            // printf("Summer");
            break;
        case 9 ... 11:
            cout<<"Autumn";
            // printf("Autumn");
            break;
        default:
            cout<<"Winter";
            // printf("Winter");
            break;
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}
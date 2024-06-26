#include <iostream>
#include <iomanip>
using namespace std;
typedef int data_type;
int main(){
    data_type a;
    data_type b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    // scanf("%d %d", &a, &b);
    // scanf("%d %d", &c, &d);
    int d_min = (c*60+d) - (a*60+b);
    int sum = 0;
    for(int i=0;i<4;i++){
        if(d_min>=30){
            sum+=30;
            d_min-=30;
        }else{
            break;
        }
    }
    for(int i=0;i<4;i++){
        if(d_min>=30){
            sum+=40;
            d_min-=30;
        }else{
            break;
        }
    }
    while(d_min>=30){
        sum+=60;
        d_min-=30;
    }
    cout<<sum<<endl;
    // printf("%d", sum);
    // printf("\n");
    return 0;
}
#include <iostream>

using namespace std;



int reverse(int x) {
    // long long container
    long long c=0;
    long long y=x;
    int flag=1;
    //INT_MIN
    //INT_MAX
    if (x<0){
        y *=-1;
        flag=-1;
    }
    for(int i=0;y!=0;i++){
        int b = y%10;
        cout<<b<<endl;
        c +=b;
        c*=10;
        y/= 10;
    }
    c/=10;
    c*=flag;
    if (INT_MIN<= c && c<= INT_MAX){
        return c;
    }
    return 0;
}

int main(){
    int ret=0;
    ret = reverse(123);
    cout<<"result "<<ret<<endl;
    return 0;
}
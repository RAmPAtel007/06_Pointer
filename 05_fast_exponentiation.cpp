#include <iostream>
using namespace std;

int fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){// b is odd in bitwise
          ans=ans*a;  
        }
        a=a*a;
        // b>>=1; or b=b/2;
        b=b/2;
    }
    return ans;

}//O(logb)

int slowexp(int a, int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans*=a;
    }
    return ans;
}//O(b)

int main(){
    // cout<<slowexp(5,4); // 5 ki power 4 ka ans 
    cout<<fastExponentiation(5,4);
}
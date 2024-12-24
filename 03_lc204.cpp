#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
// bool isPrime(int n){
//     if(n<=1) return false;
//     int sqrttN = sqrt(n);
//     for(int i=2; i<=sqrttN; i++){
//         if(n%i ==0)
//         return false;
//     }
//     return true;
//     // problem is time limit exceeded
// }
// int countPrime(int n){
//     int count=0;

//     for(int i=0; i<n ; i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     return count;

// }



int countPrime(int n){
    if(n==0) return 0;

    vector<bool> prime(n,true);//all are marked prime
    prime[0]= prime[1] =false;
    int ans=0;

    for(int i=2 ; i<n; i++){
        if(prime[i]){
            ans++;

            int j=2*i;
            while(j<n){
                prime[j]= false;
                j=j+i;
            }
        }
    }
    return ans;

}
int main(){
    int a;
    cin>>a;
    cout<<countPrime(a);

// problem is time limit exceeded
    


}
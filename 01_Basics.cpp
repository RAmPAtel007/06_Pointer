#include <iostream>
using namespace std;

int main(){
    // int a=5;
    // int* ptr =&a;
    // cout<<*ptr<<endl; //value present at that address
    // cout<<&a<<endl;
    // cout<<ptr<<endl; 
    // //address provide kr dega or jo address hai wooh toh a store hai toh ptr will give address of a 
    // cout<<&ptr<<endl;

    // int* nullpoi=0; //null pointer 
    // cout<<*nullpoi<<endl;

    //copy pointer

    int b=9; 
    int* ptrr = &b;
    int* dusraPtr =ptrr;

    cout<<*ptrr<<endl;
    cout<<*dusraPtr<<endl;

}
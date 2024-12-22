#include <iostream>
using namespace std;

int main(){
    int arr[4]= { 12,23,34,56};

    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;

    int *p = arr;
    cout<< p<< endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    cout<<*arr+1<<endl;
    cout<<*(arr +1)<<endl;
    cout<<*(arr+2)<<endl;

    int *q =arr;
    q=q+2;
    cout<< *q; // arr[2];

    //pointer notes are imp
}



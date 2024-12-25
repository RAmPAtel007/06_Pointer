#include <iostream>
using namespace std;

void util(int* p ){ // pass by value (copy create hue hai )
    // p = p +1; // no change in the value of a 
    *p =*p +1;
}
int main(){
    // int a=5;
    // int* p =&a;

    // // int **q = &p; // double pointer 
    // cout<<"After"<<endl;
    // cout<<a<<endl; 
    // cout<<p<<endl; 
    // cout<<*p<<endl; 

    // util(p);
     
    // cout<<"Before"<<endl;
    // cout<<a<<endl; 
    // cout<<p<<endl; 
    // cout<<*p<<endl; 
    // return 0; 
    


    int a=5;
    int& b=a;
    cout<<a<<endl;
    cout<<b<<endl;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;// memory location o=toh same hai toh b bhi update hoga 
    b++;
    cout<<a<<endl;
    cout<<b<<endl;

}
#include <iostream>
using namespace std;
void product(int* a, int* b){
    cout << "Product of " << *a << " and " << *b <<" is "<< (*a)*(*b) << endl;
}
int main(){
    int a;
    cout<< "Enter the first number: ";
    cin>>a;
    int b;
    cout<< "Enter the second number: ";
    cin>>b;
    product(&a,&b);
    return 0;
}
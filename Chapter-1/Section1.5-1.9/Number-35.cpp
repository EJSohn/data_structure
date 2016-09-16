#include <iostream>
#include <numeric>

using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    float b[5]={5.1, 4.2, 3.3, 2.1, 1.0};

    cout<<inner_product(a, a+5, b, 5)<<endl;
    return 0;
}



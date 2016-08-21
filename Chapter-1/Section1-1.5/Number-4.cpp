#include <iostream>
using std::cout;
using std::endl;

template<class Ta, class Tb>
double innerProduct(int n, Ta& a, Tb& b)
{
    double sum = 0.0;

    for(int i=0; i<n; i++){
        sum += a[i]*b[i];
    }

    return sum;
}

int main(){
    int a[5]={1,2,3,4,5};
    float b[5]={5.1, 4.2, 3.3, 2.1, 1.0};

    cout<<innerProduct(5, a, b)<<endl;
    return 0;
}



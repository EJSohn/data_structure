#include <iostream>
using std::cout;;
using std::endl;;

template<class Ta, class Tb>
int mismatch(const Ta& a,const Tb& b)
{
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n; i++){
        if(a[i]!=b[i]) return i;
    }

    return 1004;
}

int main(){
    int test_a[] = {6,12,18,24};
    int test_b[] = {6,12,24,30};
    float test_c[] = {6.0, 18.3, 36.0, 24.0};

    cout<<mismatch(test_a, test_b)<<endl;
    cout<<mismatch(test_a, test_c)<<endl;

    return 0;
}



#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int test_a[] = {6,12,18,24};
    int test_b[] = {6,12,24,30};
    float test_c[] = {6.0, 18.3, 36.0, 24.0};

    cout<<*mismatch(test_a,test_a+4, test_b).first<<endl;
    cout<<*mismatch(test_a,test_a+4, test_c).first<<endl;

    return 0;
}



#include <iostream>
#include <numeric>

using namespace std;

int main(){
    float a[5];
    int b[5];

    iota(a, a+5, 3.5);
    iota(b, b+5, 3);

    copy(a, a+5, ostream_iterator<float>(cout, ","));
    cout<<endl;
    copy(b, b+5, ostream_iterator<int>(cout, ","));
    cout<<endl;

    return 0;
}



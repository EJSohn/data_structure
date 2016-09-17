#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int array_one[] = {2, 100, 74, 4, 50};
    float array_two[] = {1.0, 2.2, 4.5, 5.2, 6.2};

    cout<<is_sorted(array_one, array_one+5)<<endl;
    cout<<is_sorted(array_two, array_two+5)<<endl;

    return 0;
}


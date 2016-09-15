#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string list[5];

    fill(list, list+5, "happy chuseok!");
    copy(list, list+5, ostream_iterator<string>(cout, " "));
    
    cout<<endl;

    return 0;
}



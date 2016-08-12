#include <iostream>
using std::endl;
using std::cout;

template<class T>
void fill(int start, int end, T value)
{
    T a[end];
    for(int i=start; i<end-1; i++){
        a[i]=value;
    }
    
    cout<<"[";
    for(int i=0; i<end; i++){
        cout<<a[i];
        cout<<",";
    }
    cout<<"]"<<endl;
}

int main(){
    fill(0, 5, 1.5);

    return 0;
}



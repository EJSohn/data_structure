#include <iostream>
#include <typeinfo>
using namespace std;


template <class Ta, class Tb>
string isInArray(Ta& arr, Tb val, int index)
{
    if (arr[index]==val) return "yes it is in here!";
    else if(arr[index]!=val&&index==0) return "No, it is not in here.";
    else return isInArray(arr, val, index-1);
}

int main()
{
    string arr[] = {"apple", "banana", "watermelon", "cherry"};
    string val = "banana";
    string val2 = "grape";

    cout<<isInArray(arr, val, 3)<<endl;
    cout<<isInArray(arr, val2, 3)<<endl;

    cout<<"test by number"<<endl;
    
    int arr2[] = {1,2,3,5,7};
    int val3 = 4;
    float val4 = 5.0;
    int val5 = 7;

    cout<<isInArray(arr2, val3, 4)<<endl;
    cout<<isInArray(arr2, val4, 4)<<endl;
    cout<<isInArray(arr2, val5, 4)<<endl;
    return 0;
}





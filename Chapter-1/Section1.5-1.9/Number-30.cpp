#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void printArr(T list[], int m);

template <class T>
void permutations(T list[], int m);


int main()
{
    int list[] = {3, 1, 2};

    permutations(list, 2);

    char clist[] = {'d', 'f', 'a'};

    permutations(clist, 2);

    return 0;
}

template <class T>
void printArr(T list[], int m)
{
    cout<<"{";

    for(int i=0; i<m+1; i++)
    {
        cout<<list[i]<<" ";
    }

    cout<<"}"<<endl;
}


template <class T>
void permutations(T list[], int m)
{
    // before sorting
    cout<<"before: ";
    printArr(list, m);

    // sorting the list elements into ascending order
    sort(list, list+m+1);

    // after sorting
    cout<<"after: ";
    printArr(list, m);

    do {
        copy(list, list+m+1,
                ostream_iterator<T>(cout, ""));
        cout<<endl;
    }
    while (next_permutation(list, list+m+1));
}


#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void permutations(T list[], int k, int m)
{
    // sorting the list elements into ascending order
    sort(list+k-1, list+m+1);

    do {
        copy(list+k-1, list+m+1,
                ostream_iterator<T>(cout, ""));
        cout<<endl;
    }
    while (next_permutation(list+k-1, list+m+1));
}

int main()
{
    char list[] = {'a', 'b', 'c'};

    permutations(list, 1, 3);

    return 0;
}




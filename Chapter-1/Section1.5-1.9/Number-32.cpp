#include <iostream>

using namespace std;

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
void permutations(T list[], int m)
{
    while (next_permutation(list, list+m+1)) { } 

    do {
        copy(list, list+m+1,
                ostream_iterator<T>(cout, ""));
        cout<<endl;
    }
    while (next_permutation(list, list+m+1));

}


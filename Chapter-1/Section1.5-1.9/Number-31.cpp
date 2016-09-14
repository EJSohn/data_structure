#include <iostream>
#include <algorithm>

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
    T prev_list[m+1];
    copy(list, list+m+1, prev_list);

    do {
        copy(list, list+m+1,
                ostream_iterator<T>(cout, ""));
        cout<<endl;
    }
    while (prev_permutation(list, list+m+1));
    
    while (next_permutation(prev_list, prev_list+m+1))
    {
        copy(prev_list, prev_list+m+1,
                ostream_iterator<T>(cout, ""));
        cout<<endl;
    }

}


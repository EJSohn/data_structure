#include <iostream>

using namespace std;

template<class T>
void permutations(T list[], int k, int m)
{
    do{
        copy(list, list+m+1, ostream_iterator<T>(cout, " "));
        cout << endl;
    } while ( next_permutation(list, list+m+1));
}

int main()
{
    char list[] = {'a', 'b', 'c'};

    permutations(list, 0, 3);

    return 0;
}



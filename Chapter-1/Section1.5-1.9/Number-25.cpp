// created by Akhilesh Pandey
// updated by Vanessa Sohn

#include <iostream>
#include <vector>

using namespace std;

void print_subsets(int *arr, int index, int size);

int main()
{
    int i;
    int n;
    int arr[100];
    // array size
    cin>>n;

    for(i=0; i<n; i++) cin>>arr[i];
    print_subsets(arr, 0, n);
    
    return 0;
}

void print_subsets(int *arr, int index, int size)
{
    static vector<int> ans;
    if(index==size)
    {
        cout<<"{";
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i];
            if(i!=ans.size()-1) cout<<", ";
        }
        cout<<"}"<<endl;

        return;
    }
    print_subsets(arr, index+1, size);
    ans.push_back(arr[index]);
    print_subsets(arr, index+1, size);
    ans.pop_back();
}




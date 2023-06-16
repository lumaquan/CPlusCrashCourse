#include <iostream>

using namespace std;

template <typename Iter, typename Val>
Val sum(Iter begin, Iter end)
{
    Val s = 0;
    while (begin != end)
    {
        s = s + *begin;
        ++begin;
    }
    return s;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int r = sum<int *, int>(arr, arr + 5);
    cout << r << endl;

}
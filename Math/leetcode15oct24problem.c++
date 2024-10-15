#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0 && i > 0)
        {
            swap(arr[i], arr[i - 1]);
            count++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "number of count" << count << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Largest element : " << max;
    return 0;
}


#include <iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    if (high < low)
    {
        return -1;
    }

    int mid = (high + low) / 2;

    if (key == arr[mid])
    {
        return mid;
    }

    else if (key > arr[mid])
    {
        return binary_search(arr, mid + 1, high, key);
    }

    return binary_search(arr, low, mid - 1, key);
}

int sorted_deletion_element(int arr[], int size, int key)
{
    int position = binary_search(arr, 0, size - 1, key);

    if (position == -1)
    {
        return position;
    }

    // if (position == (size - 1)){
    //     return (size - 1);
    // }
    cout << "position" << ' ' << position << endl;
    cout << "Size" << ' ' << size << endl;
    for (int i = position; i < size; i++)
    {
        cout << "Arr[i]: " << arr[i] << " Arr[i+1]: " << arr[i + 1] << endl;
        arr[i] = arr[i + 1];

        if (i + 1 == size) // size is for some weird reason
        {

            return (size - 1);
        };
    }
}

int main()
{
    int times = 6;
    while (times--)
    {
        int arr[] = {2, 4, 6, 7, 8, 10};

        int size = sizeof(arr) / sizeof(arr[0]);

        int i, key;

        cout << "----------------------------";

        cout << "\n\nBefore Deletion ->  ";

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " " << flush;
        }

        cout << "\nEnter Elements: ";

        cin >> key;

        int result = sorted_deletion_element(arr, size, key);

        if (result == -1)
        {
            cout << "Element Not Found" << endl;
            return 0;
            exit(0);
        }

        cout << "After Deletion ->  ";

        for (int i = 0; i < result; i++)
        {
            cout << arr[i] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}

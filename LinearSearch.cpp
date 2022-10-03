#include<iostream>
using namespace std;

bool search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
    
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,7,9,0};

    cout << " Enter key " << endl;
    int key;

    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    
    return 0;
}
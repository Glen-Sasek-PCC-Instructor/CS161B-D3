//*****************************************************************************
// Author: 
// Assignment:
// Date:
// Description:
// Sources: 
//*****************************************************************************

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 20;
    
    int arr[MAX_SIZE];

    int count = 0;
    int low_index = 0;
    int high_index = 0;

    bool sorted = true;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> arr[i];
    }

    cin >> low_index;
    cin >> high_index;

    for(int i = low_index; sorted && i < high_index; i++) {
        sorted = arr[i] <= arr[i+1];
    }

    cout << (sorted ? "YES" : "NO") << endl;
}



#include <iostream>
#include <string>
using namespace std;


int merge(int arr[], int temp[], int l, int mid, int r) {
    int i,j,k;
    int invCounter = 0;

    i = l;
    j = mid;
    k = l;

    while ((i < mid) && (j < r)) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {    
            temp[k++] = arr[j++];
            invCounter += (mid - i);
        }
    }

    while (i < mid) temp[k++] = arr[i++];

    while (j < r) temp[k++] = arr[j++];

    for (i = l; i < r; i++)
        arr[i] = temp[i];

    return invCounter;
}

int _mergeSort(int arr[], int temp[], int l, int r) {
    int mid, invCounter = 0;

    if (r > l) {
        mid = (l + r) / 2 ;

        invCounter += _mergeSort(arr, temp, l, mid);
        invCounter += _mergeSort(arr, temp, mid, r);

        invCounter += merge(arr, temp, l, mid, r);
    }

    return invCounter;
}


int mergeSort(int arr[], int n) {
    int* temp = new int[n];
    int invCounter = _mergeSort(arr, temp, 0, n);

    delete[]temp;
    return invCounter;
}

int main() {
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << "Number of inversions are " << ans;

    return 0;
}
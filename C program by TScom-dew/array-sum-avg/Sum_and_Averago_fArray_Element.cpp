#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    double avg = (double)sum / n;
    cout << "Sum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << avg << endl;
    return 0;
}

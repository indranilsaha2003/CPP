#include <iostream>
using namespace std;
int main(){
       int n, i;
       cout << "Enter The Size Of the Array : ";
       cin >> n;
       int arr[n];
       cout << "Enter The Elements : " << endl;
       for (i = 0; i < n; i++){
              cin >> arr[i];
       }
       cout << endl;
       int *ptr = arr;
       cout << "Array using pointer : " << endl;
       for (int i = 0; i < n; i++){
              cout << *ptr << " ";
              ptr++;
       }
       cout << endl;
       cout << endl;
       cout << "Array using array name : " << endl;
       for (int i = 0; i < n; i++){
              cout << *(arr + i) << " ";
       }
       cout << endl;
       cout << endl;
       int *arrptr[n];
       for (int i = 0; i < n; i++){
              arrptr[i] = &arr[i];
       }
       cout << "Array using array of pointers : " << endl;
       for (int i = 0; i < n; i++){
              cout << *arrptr[i] << " ";
       }
       cout << endl;
       cout << endl;
       return 0;
}

#include <iostream>
#include <math.h>
#include <random>
using namespace std;



void bubbleSort(int arr[], int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Zamiana miejscami
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{

        int tablica2[100];
    for(int i = 0; i < 100; i++){
         tablica2[i] = rand();
    }

    bubbleSort(tablica2, 100);


    cout << "Drugie sortowanie" << endl;
    for (int i = 0; i < 100; i ++)
    {
        cout << tablica2[i] << endl;
    }
    return 0;
}

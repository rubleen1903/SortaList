#include <iostream>
#include<conio.h>
#include<stdlib.h>
//Rubleen Kaur
//Local Hack Day Submission
#define MAX_SIZE 5

using namespace std;

int main() {
    int arr_sort[MAX_SIZE], i, j, a, t;

    cout << "Simple C++ Bubble Sort Example - Array\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    for (i = 1; i < MAX_SIZE; i++) {
        for (j = 0; j < MAX_SIZE - 1; j++) {
            if (arr_sort[j] > arr_sort[j + 1]) {
                //Swapping Values 
                t = arr_sort[j];
                arr_sort[j] = arr_sort[j + 1];
                arr_sort[j + 1] = t;
            }
        }

        cout << "\nIteration : " << i;
        for (a = 0; a < MAX_SIZE; a++) {
            cout << "\t" << arr_sort[a];
        }
    }

    cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }
}

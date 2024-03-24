#include <iostream>
using namespace std;

template<typename T>
void sort(T arr[]){
    for (int i = 0; i < 5; i++){
		for (int j = i+1; j < 5; j++){
			if (arr[i] > arr[j]){
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
    int arr_int[5] = {5,2,9,1,7};
    float arr_float[5] = {1.5,4.6,2.3,5.5,3.1};
    sort(arr_int);
    sort(arr_float);

    cout << "Sorted integer array:";
    for(int i=0; i<5; i++){
		cout << "  " << arr_int[i];
	}

    cout << endl << "Sorted float array:";
    for(int i=0; i<5; i++){
        cout << "  " << arr_float[i];
    }
}

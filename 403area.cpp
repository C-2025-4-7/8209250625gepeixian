#include <iostream>
using namespace std;
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "输入数组元素个数: ";
    cin >> size;
    int* arr = new int[size];
    cout << "输入 " << size << " 个整数:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "元素 " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\n原始数组: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortArray(arr, size);
    cout << "排序后的数组: ";
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;  
    }
    cout << endl;
    delete[] arr;
    arr = nullptr;
    cout << "内存已释放，程序结束。" << endl;
    return 0;
}
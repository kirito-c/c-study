#include <iostream>
using namespace std;

int main3() {
    int arr[5] = { 1, 2, 3, 4, 5 };  // 示例数组
    int start = 0;                // 起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;  // 结束下标

    while (start < end) {
        // 交换元素
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // 更新下标（必须在循环体内！）
        start++;
        end--;
    }

    // 输出验证
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
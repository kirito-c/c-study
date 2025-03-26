#include<iostream>
#include <vector>        // 引入 vector 容器头文件
#include <algorithm>   // 引入算法库，包含 reverse 函数
using namespace std;
vector<int> arr = { 1, 2, 3, 4, 5 };  
int main()
{
   // 定义一个 vector 容器并初始化
  reverse(arr.begin(), arr.end());     // 调用 reverse 函数逆序数组
}

// 面试题3（一）：找出数组中重复的数字
// 题目：在一个长度为n的数组里的所有数字都在0到n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，
// 也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组{2, 3, 1, 0, 2, 5, 3}，
// 那么对应的输出是重复的数字2或者3。
#include <iostream>
#include <cstdio>

using namespace std;

// 参数:
//        numbers:     一个整数数组
//        length:      数组的长度
//        duplication: (输出) 数组中的一个重复的数字
// 返回值:             
//        true  - 输入有效，并且数组中存在重复的数字
//        false - 输入无效，或者数组中没有重复的数字
bool duplicate(int numbers[],int length,int *duplication)
{
    if (numbers==NULL||length<=0)
    {
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (numbers[i]<0||numbers[i]>length-1)
        {
            return false;
        }
    }
    for (int i = 0; i < length; i++)
    {
        while (numbers[i]!=i)
        {
            
        }
        
    }
    
    
    
}

int main()
{
    int nums[] = {2,12,12,11,2};
    cout<<sizeof(nums)<<endl;
}
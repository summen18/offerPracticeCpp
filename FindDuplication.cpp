// ������3��һ�����ҳ��������ظ�������
// ��Ŀ����һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�
// Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡����磬������볤��Ϊ7������{2, 3, 1, 0, 2, 5, 3}��
// ��ô��Ӧ��������ظ�������2����3��
#include <iostream>
#include <cstdio>

using namespace std;

// ����:
//        numbers:     һ����������
//        length:      ����ĳ���
//        duplication: (���) �����е�һ���ظ�������
// ����ֵ:             
//        true  - ������Ч�����������д����ظ�������
//        false - ������Ч������������û���ظ�������
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
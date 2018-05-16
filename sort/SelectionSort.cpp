//ѡ������ 
//����ԭ������ʼʱ���������ҵ���С����Ԫ�أ��ŵ����е���ʼλ����Ϊ���������У�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- O(n^2)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ ���ȶ�

#include <stdio.h>

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)         // iΪ���������е�ĩβ
    {
        int min = i;
        for (int j = i + 1; j < n; j++)     // δ��������
        {
            if (A[j] < A[min])              // �ҳ�δ���������е���Сֵ
            {
                min = j;
            }
        }
        if (min != i)
        {
            // �ŵ����������е�ĩβ���ò������п��ܰ��ȶ��Դ��ң�����ѡ�������ǲ��ȶ��������㷨
            int temp = A[min];
            A[min] = A[i];
            A[i] = temp;
        }
    }
}

int main()
{
    int A[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 }; // ��С����ѡ������
    int n = sizeof(A) / sizeof(int);
    SelectionSort(A, n);
    printf("ѡ����������");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
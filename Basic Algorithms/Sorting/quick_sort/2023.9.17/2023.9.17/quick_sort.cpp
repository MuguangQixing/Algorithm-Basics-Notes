/*
Quick Sort
	˼�룺����
	step1:ȷ���ֽ�ֵ	a[0],...,a[floor((n+1)/2)],...,a[n-1]
	step2:��������		Ҫ����������ֵС���Ҳ�����
	step3:�ݹ���������
*/
#include<iostream>

using namespace std;

const int N = 1e6;

int n;
int q[N];


void quick_sort(int q[], int left, int right) {
	if (left >= right) return;//��������߽�,������������

	int x = q[left];
	int i = left - 1, j = right + 1;//����ָ��(��Ϊÿ�ζ��������м��ƶ�ָ�����ж�)
	while (i < j) {
		//i���м��ƶ�
		do i++; while (q[i] < x);
		//j���м��ƶ�
		do j--; while (q[j] > x);

		//���ж�
		if (i < j) swap(q[i], q[j]);

	}

	quick_sort(q, left, j);
	quick_sort(q, j + 1, right);

}


int main() {
	printf("���������ݵ�������\n");
	scanf_s("%d", &n);//���������������scanf()����cin

	printf("���������ݣ�\n");
	for (int i = 0; i < n; i++) scanf_s("%d", &q[i]);

	quick_sort(q, 0, n - 1);

	printf("���������Ϊ��\n");
	for (int i = 0; i < n; i++) printf("%d ", q[i]);

	return 0;

}


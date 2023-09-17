/*
Quick Sort
	思想：分治
	step1:确定分界值	a[0],...,a[floor((n+1)/2)],...,a[n-1]
	step2:调整区间		要求左侧区间的值小于右侧区间
	step3:递归左右两端
*/
#include<iostream>

using namespace std;

const int N = 1e6;

int n;
int q[N];


void quick_sort(int q[], int left, int right) {
	if (left >= right) return;//如果超出边界,结束函数运行

	int x = q[left];
	int i = left - 1, j = right + 1;//定义指针(因为每次都是先向中间移动指针再判断)
	while (i < j) {
		//i向中间移动
		do i++; while (q[i] < x);
		//j向中间移动
		do j--; while (q[j] > x);

		//再判断
		if (i < j) swap(q[i], q[j]);

	}

	quick_sort(q, left, j);
	quick_sort(q, j + 1, right);

}


int main() {
	printf("请输入数据的数量：\n");
	scanf_s("%d", &n);//大量数据情况下用scanf()不用cin

	printf("请输入数据：\n");
	for (int i = 0; i < n; i++) scanf_s("%d", &q[i]);

	quick_sort(q, 0, n - 1);

	printf("排序后数据为：\n");
	for (int i = 0; i < n; i++) printf("%d ", q[i]);

	return 0;

}


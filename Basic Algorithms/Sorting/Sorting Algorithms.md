## 排序算法

### <t style='color:purple'>快速排序</t>


#### <t style='color:orange'>代码模板</t>

```C++
void quick_sort(int q[], int left, int right)
{
    if (left >= right) return;

    int i = left - 1, j = right + 1;
    int x = q[left];

    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);

        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, left, j),;
    quick_sort(q, j + 1, right);
}
```

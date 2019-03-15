### size_t vs int
- 32位机器, typedef unsigned int size_t
- 64位机器, typedef unsigned long int size_t 

### 数组内存模型
- 一维数组
```
int a[n];
则 address(a[n]) = a + n * sizeof(int);
```
- 二维数组
```
int a[m][n];
则 address(a[m][n]) = a + [(m * n) + n] * sizeof (int);
```
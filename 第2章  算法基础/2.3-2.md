## 题目描述:
>重写过程`merge`，使之不用哨兵，

-----
## 思路
书上的`merge`使用哨兵只是避免多次检查`L`诉诸或者`R`数组是否已复制完。
#### 伪代码：
	merge(A,p,q,r)
		n1=q-p
		n2=r-q
		new array L<0,1,...,n1-1>,R<0,1,...,n2-1>
		for i=0 to n1-1
			L[i]=A[p+i]
		for i=0 to n2-1
			R[i]=A[q+i]
		i=j=k=0
		while i<n1 && j<n2
			if L[i]<R[j]
				A[p+k]=L[i]
				i=i+1
				k=k+1
			else
				A[p+k]=R[j]
				j=j+1
				k=k+1
		while i<n1
			A[p+k]=L[i]
			i=i+1
			k=k+1
		while j<n2
			A[p+k]=R[j]
			j=j+1
			k=k+1
	end

#### c 代码：
```c
	#include<malloc.h>
	void merge(int *A,int size,int p,int q,int r)
	{
		int n1=q-p;
		int n2=r-q;
		int *L=(int*)malloc(sizeof(int)*n1);
		int *R=(int*)malloc(sizeof(int)*n2);
		int i,j,k;
		for(i=0;i<n1;++i)
		{
			L[i]=A[p+i];
		}
		for(j=0;j<n2;++j)
		{
			R[j]=A[q+j];
		}
		i=j=k=0;
		while(i<n1 && j<n2)
		{
			if(L[i]<R[j])
			{
				A[p+k]=L[i];
				i=i+1;
				k=k+1;
			}else{
				A[p+k]=R[j];
				j=j+1;
				k=k+1;
			}
		}
		while(i<n1)
		{
			A[p+k]=L[i];
			k=k+1;
			i=i+1;
		}
		while(j<n2)
		{
			A[p+k]=R[j];
			k=k+1;
			j=j+1;
		}
		free(R);
		free(L);
	}
```
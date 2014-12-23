 ##题目描述：
> 考虑将两个n位二进制整数`A<a0,a1,..,an-1>`和`B<b0,b1,..,bn-1>`相加后存储在`C<c0,c1,..,cn-1,cn>`，给出形式化的描述，并写出伪代码。

----
##思考：
###形式化描述：
设置一个进位标志`jin`，
- **初始时**：`jin=0`
- **过程中**：`C[i]=(A[i]+B[i]+jin)% 2`，`jin=(A[i]+B[i]+jin)/ 2`
- **终止**：`C[n]=jin`

###伪代码：
	add-binary(A,B)
		jin=0
		for i=0 to n-1
			C[i]=(A[i]+B[i]+jin)% 2
			jin=(A[i]+B[i]+jin)/ 2
		C[n]=jin
	end

### c 代码：
    #include<malloc.h>
     struct binary{
    	 int *a;
    	 int n;
     }
     struct binary add_binary(struct binary A,struct binary B)
     {
    	 struct binary C;
    	 C.a=(int*)malloc(sizeof(int)*(A.n+1));
    	 C.n=A.n+1;
    	 int i=0,jin=0;
    	 while(i<n)
    	 {
    		 C.a[i]=(A.a[i]+B.a[i]+jin)%2;
    		 jin=(A.a[i]+B.a[i]+jin)/2;
    	 }
    	 C.a[C.n-1]=jin;
    	 return C;
     }
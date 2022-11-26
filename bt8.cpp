#include<stdio.h>
#include<stdlib.h>


void nhap          (int *a, int n);
void xuat          (int *a, int n);
void max           (int *a, int n);
void min           (int *a, int n);
int check          (int x);
void snt           (int *a, int n);
void timx          (int *a, int n);
//void tongdcc       (int *a, int n);
//void chan          (int *a, int n);
///void avb           (int *a, int *b, int *c, int M, int N);


void *calloc       (size_t nitems, size_t size);

   int main()
{
	     int n,*a,M,N;
	     int *A,*B,*C;
	     a=(int*)calloc(256,sizeof(int));
	     A=(int*)calloc(256,sizeof(int));
	     B=(int*)calloc(256,sizeof(int));
	     C=(int*)calloc(256,sizeof(int));
	     printf("Nhap n so dong & cot cho ma tran u : n=");
	     nhap(a,n);
	     xuat(a,n);
	     max(a,n);
	     min(a,n);
	     snt(a,n);
	     timx(a,n);
	     //tongdcc(a,n);
	     //chan(a,n);
	     printf("\n\n\n\n\n\n\n");
	     printf("\n\n                    XAY DUNG MA TRAN A&B VA TINH TICH CUA A&B              \n\n");
		 printf("\n nhap so dong cho A&B : m=");
		 scanf("%d",&M);
		 printf("|n nhap so cot cho A&B : n=");
		 scanf("%d",&n);
		 //avb(A,B,C,M,N);
		 printf("\n\n nhan phim bat ki de ket huc");                          
	
	     
}



void nhap(int *a, int n)
{
	printf("\n\n nhap cac phan tu cho ma tran U :");
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n\n U[%d][%d]=",i,j);
		}
	}
}


void xuat(int *a, int n)
{
	printf("\n\n ma tran U da nhap :\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d",*(a+i*n+j));
		}
		printf("\n\n");
		}
}


void max(int *a, int n)
{
	int max=*(a);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(*(a+i*n+j)>=max) max=*(a+i*n+j);
		}
	}
	printf ("\n\n gia tri lon nhat trong ma tran U la %d",max);
}


 void min(int *a, int n)
 {
 	int min=*(a);
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			if(*(a+i*n+j)<=min) min=*(a+i*n+j);
 		}
 	}
 	printf ("\n\n gia tri nho nhat trong ma tran U la %d", min);
 }
 
 
 int check(int x)
 {
 	int ok=1;
 	if(x<2)
 	{
 		ok=0;
 	}
 	else
 	{
 		for(int i=2;i<x;i++)
 		{
 			if(x%i==0&& x!=2)
 			{
			 ok=0;
 			 break;
 			}
 		}
 	}
 	return 0;
 }
 
 
 void snt(int *a, int n)
 {
 	printf("\n\n cac phan tu so nguyen trong ma tran u:\n\n");
 	int dem=0, tong=0;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
        {
        	if (check(*(a+i*n+j))==1)
        	{
        		printf ("%d",*(a+i*n+j));
        		dem++;
        		tong=tong+*(a+i*n+j);
        	}
        }
    }
    printf("\n\n co %d pan tu co gia tri la so nguyen trong ma tran U va tong chung bang %d",dem,tong);
}


void timx(int *a, int n)
{
	int x,ok=0;
	printf("\n\n nhap x can tim :x= ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
			if (x==*(a+i*n+j))
			{
				ok++;
				printf("n\n xuat hien tai dong thu %d, cot thu %d ( vi tri U[%d][%d]) trong ma tran U",i+1,j+1,i,j);
			}
		}
	}
	if(ok==0)
	printf("\n\n x khong xuat hirn ma tran U !");
}

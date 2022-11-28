#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void inhoa     (char S[100]);
void nhap      (char S1[50], char S2[50]);
void xuat      (char S1[50], char S2[50]);
void dem       (char S1[50], char S2[50]);
void nhapx     (char S1[50]);
void demtu     (char S1[50]);
void noichuoi  (char S1[50], char S2[50], char S3[100]);
void dx        (char S1[50]);
void dao       (char S1[50]);

//( Tat Unikey truoc khi chay chuong trinh nhe !)

int main()
{
	char S1[50], S2[50], S3[100];
	int key;
	nhap(S1,S2);//1.1
	xuat(S1,S2);//1.2
	dem(S1,S2);//1.3
	nhapx(S1);//1.4
	demtu(S1);//1.5
	noichuoi(S1,S2,S3);//1.6
	dx(S1);//1.7
	dao(S1);//1.8
	
	
   while(true)
   {
        system("cls");
        printf("************************************\n");
		printf("**      THAO TAC TREN CHUOI       **\n");
		printf("**   1.Nhap va chuan hoa chuoi    **\n");
		printf("** 	 2.Dem so tu trong chuoi      **\n");
		printf("**	 3.Ghep chuoi 				  **\n");
		printf("** 	 4.Kiem tra doi xung          **\n");
		printf("**	 5.In chuoi dao nguoc         **\n");
		printf("**   0.Thoat 		      	      **\n");
		printf("************************************\n");
		fflush(stdin);
		printf("\n \t\t   AN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
        {
           	  case 1:
					fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
			  		printf("\nBam phim bat ky de tiep tuc!");
			  		getch();
			  		break;
			  case 2:
//goi ham thuc de hien cong viec tuong ung
					printf("\nBam phim bat ky de tiep tuc!");
					getch();
					break;
			  case 3:
					printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
					getch();
					break;

		      case 4:
					printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
					break;
			  case 5:
					printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
					getch();
					break;
			  case 0:
					exit(1);
					default:
					printf("\nKhong co chuc nang nay!");
					printf("\nBam phim bat ky de tiep tuc!");
					getch();
					break;
		}
   }
}
	
	
	
	gets(S1);
}


void nhap(char S1[50], char S2[50])//1
{
	 printf("Nhap chuoi S1 :\n\n"); gets(S1);
	 printf("\n\n");
	 printf("Nhap chuoi S2 :\n\n"); gets(S2);
}

void inhoa(char S[100])
{
	 S[0]=S[0]-32;
	 for (int i=0;i<strlen(S);i++)
	 {
	 	 if (S[i]==' ' && S[i+1]!=' ')
	 	 {
	 	 	S[i+1]=S[i+1]-32;
	 	 }
	 	 
	 }
}

void xuat(char S1[50], char S2[50])//2
{
	 int i;
	 printf("\n\nXuat chuoi chuan S1 :\n\n");
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[0]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
	 	 }
     }
     for (i=0;i<strlen(S1);i++)
     {
	 	 if (S1[i]==' ' && S1[i+1]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
		 }
	 }
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[strlen(S1)-1]==' ')
	 	 {
	 	 	S1[strlen(S1)-1]='\0';
	     }
     }
	 strlwr(S1);
	 inhoa(S1);
	 puts(S1);
	 
	 printf("\n\nXuat chuoi chuan S2 :\n\n");
	 for (i=0;i<strlen(S2);i++)
	 {
	 	 if (S2[0]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S2);j++)
	 	 	{
	 	 		S2[j]=S2[j+1];
	 	 	}
	 	 i--;
	 	 }
     }
     for (i=0;i<strlen(S2);i++)
     {
	 	 if (S2[i]==' ' && S2[i+1]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S2);j++)
	 	 	{
	 	 		S2[j]=S2[j+1];
	 	 	}
	 	 i--;
		 }
	 }
	 for (i=0;i<strlen(S2);i++)
	 {
	 	 if (S2[strlen(S2)-1]==' ')
	 	 {
	 	 	S2[strlen(S2)-1]='\0';
	     }
     }
	 strlwr(S2);
	 inhoa(S2);
	 puts(S2);
}


void dem(char S1[50], char S2[50])//3
{
	 strlwr(S1);
	 strlwr(S2);
	 int check=0;
	 int dem=0;
	 if (strlen(S1)<strlen(S2)) printf("\n\nChuoi S2 khong xuat hien trong chuoi S1");
	 else
	 {
	 	for (int i=0;i<strlen(S1);i++)
	 	{
	 		if (S2[0]==S1[i])
	 		{
	 		   for (int j=0;j<strlen(S2);j++)
	 		   {
	 		   	   if (S2[j]!=S1[j+i])
	 		   	   {
					  check++;
				   }
	 		   }
	 		   if (check==0) dem++;
	 		   check=0;
	 		}
	 	}
	 	if(dem==0) printf("\n\nChuoi S2 khong xuat hien trong chuoi S1 !");
	 	else       printf("\n\nChuoi S2 xuat hien trong chuoi S1 %d lan",dem);	
	 }
	 inhoa(S1); inhoa(S2);
}



void nhapx(char S1[50])//4
{
	 int dem=0;
	 char x[1];
	 printf("\n\nNhap vao mot ky tu bat ky : ");    gets(x);
	 while(strlen(x)>1)
	 {
	 	  printf("\n\nNhap lai chi mot ky tu bat ky : ");    gets(x);
	 }
	 strlwr(S1);  strlwr(x);
	 for(int i=0;i<strlen(S1);i++)
	 {
	 	if(x[0]==S1[i]) dem++;
	 }
	 if (dem==0) printf("\n\nKy tu tren khong xuat hien trong chuoi S1 !");
	 else        printf("\n\nKy tu tren xuat hien trong chuoi S1 %d lan",dem);
	 inhoa(S1);
}

void demtu(char S1[50])
{
	 int dem=0;
	 for(int i=0;i<strlen(S1);i++)
	 {
	 	if(S1[i]==' ') dem++;
	 }
	 printf("\n\nCo %d tu trong chuoi S1 !",dem+1);
}


void noichuoi(char S1[50], char S2[50], char S3[100])
{
	 for(int i=0;i<strlen(S1);i++)
	 {
	 	S3[i]=S1[i];
	 }
	 for(int i=0;i<strlen(S2);i++)
	 {
	 	S3[strlen(S1)+i]=S2[i];
	 }
	 printf("\n\nChuoi sau khi noi chuoi S2 vao cuoi chuoi S1 :\n\n"); puts(S3);
}


void dx(char S1[50])
{
	 int check;
	 printf("\n\n Chuoi S1 :\n\n"); puts(S1);
	 strlwr(S1);
	 if (strlen(S1)%2==0)
	 {
	 	check=1;
	 	for (int i=0;i<(strlen(S1)/2);i++)
	 	{
	 	    if (S1[i]!=S1[strlen(S1)-1-i])
	 	    {
	 	       check=0;
	 	       break;
	 	    } 
	 	}
	 }
	 else 
	 {
	 	check=1;
	 	for (int i=0;i<((strlen(S1)-1)/2);i++)
	 	{
	 	    if (S1[i]!=S1[strlen(S1)-1-i])
	 	    {
	 	       check=0;
	 	       break;
	 	    } 
	    }
     }
	 if (check==0) printf("\n\nChuoi S1 la chuoi khong doi xung !");
	 else          printf("\n\nChuoi S1 la chuoi doi xung !");
	 inhoa(S1);
}


void dao(char S1[50])
{
     char Nguoc[50];
	 for (int i=0;i<strlen(S1);i++)
	 {
	 	 Nguoc[i]=S1[strlen(S1)-1-i];
	 }
	 printf("\n\nChuoi nguoc cua S1 la :\n\n"); puts(Nguoc);
}
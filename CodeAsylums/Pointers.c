#include<stdio.h>
void fun(int &p)
{
	p=30;

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif

//////////////////////////////////////////////////////////////////////

/*int x=15;
int *ptr;
ptr=&x;
printf("%p",ptr);
printf("\n");
printf("%d",*ptr);
*ptr=20;
printf("\n");
printf("%d",*ptr);
printf("\n");
printf("%p",ptr);
printf("\n");
printf("\n");*/
//////////////////////////////////////////////////////////////////////


/*int v[3]={10,20,30};
int i;
for(i=0;i<3;i++)
{
	int *p=&v[i];
	printf("%p-->",p);
	printf("%d\n",*p);
}
printf("\n");*/
//////////////////////////////////////////////
/*int b[3]={10,20,30};
int *pt;
pt=v;

for(i=0;i<3;i++)
{
	printf("%p-->",pt);
	printf("%d\n",*pt);
	pt++;
}

for(i=0;i<3;i++)
{
	printf("%p-->",pt);
	printf("%d\n",pt[i]);

}
printf("%d",*b);*/
//////////////////////////////////////////////


	    int x=20;
	    fun(x);
	    printf("%d",x);
////////////////////////////////////////////
/*int v[3]={10,20,30};
int i;
for(i=0;i<3;i++)
{
	int *p=&v[i];
	printf("%p-->",p);
	printf("%d\n",*p);
}
printf("%d",*(v+1));*/
//////////////////////
/*int v[2][3]={{10,20,30},{40,50,60}};
printf("%d",*(*(v+1)+2));*/
//////////////////////////
/*char *ptr="Hello Adi";
printf("%c",*ptr);*/
 
   

	return 0;
}
#include<stdio.h>
typedef struct comlex
{
int real,img;
}
complex;
complex addcomplex(complex x , complex y);

void main()
{
	complex c1,c2,c3;
	c1.real=10,c1.img=20;
	c2.real=5,c2.img=6;
	c3=addcomplex(c1,c2);
	
	
}
 complex addcomplex(complex x, complex y)
{
	complex temp;
	
	temp.real=x.real+y.real;
	temp.img=x.img+y.img;
	
	return temp;
}
void display(complex c)
{
	printf("%d %d ",c.real,c.img);
}
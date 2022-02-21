#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int m;
	float area,perimetr,r,p,x,a,b,c;
	printf("\n Vvedite vud fugiru :"); scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("Vvedite raduis");
			scanf("%f",&r);
			perimetr=3.14*r*r;
			area=2*3.14*r*r;
			printf("Area=%f Perimetr=%f",area,perimetr); break;
		case 2:
			printf("Vvedite storonu");
			scanf("%f %f %f",&a,&b,&c);
			p=(a+b+c)/2;
			x=p*((p-a)*(p-b)*(p-c));
			area=sqrt((float)x);
			perimetr=(a+b+c);
			printf("Area=%f Perimetr=%f",area,perimetr); break;
		default: printf("\n Error \n");
	}
	return 0;
}


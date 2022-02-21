#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int m;
	float area,perimetr,r,p,x,a,b,c;
	printf("\n Vvedite vud fugiru(1-cyrlce 2-triangle) :"); scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("Vvedite raduis");
			scanf("%f",&r);
			if (r>0)
			{
				perimetr=2*3.14*r;
				area=3.14*r*r;
				printf("Area=%f Perimetr=%f",area,perimetr);
			}
			if (r<0)
			{
				printf("Error");
			}
			break;
			
		case 2:
			printf("Vvedite storonu");
			scanf("%f %f %f",&a,&b,&c);
			if ((a>0)&&(a>0)&&(c>0))
			{
				p=(a+b+c)/2;
				x=p*((p-a)*(p-b)*(p-c));
				area=sqrt((float)x);
				perimetr=(a+b+c);
			}
			if ((a>=0)||(b>=0)||(c>=0))
			{
				printf("Error");
			}
			printf("Area=%f Perimetr=%f",area,perimetr); break;
		default: printf("\n Error \n");
	}
	return 0;
}


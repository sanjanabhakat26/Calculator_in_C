#include<stdio.h>
#include<math.h>
#include<string.h>
void add(int,float[]);
void sub(int,float[]);
void mul(int,float[]);
int mod(int,int);
void sinx(float,float);
void cosx(float,float);
void tanx(float,float);
void secx(float,float);
void cosecx(float,float);
void cotx(float,float);
long power(float,float);
void average(int,float);
int factorial(int n)
{
        int i,fact=1;
        for(i=1;i<=n;i++)
        fact=fact*i;
        return (fact);
}
void main()
{
	char choice,o,select[10];
	int i,n,r,n1,n2;
	const float pi=3.14159;
	float dsin,rds,dc,rc,dt,rt,ds,rsc,dcs,rcs,dct,rct,num1,num2;
	float a[10000],b[10000],c[10000];
	printf("What operation do you want to perform?\n");
	printf("Enter 'a'for arithmetic operations:+,-,*,/\n or \n'b' for others:avg,mod,log,sin,cos,tan,sec,cosec,cot,exp:");
	scanf("%c",&o);
	if(o=='a')
	{
	printf("Enter your choice from : +,-,*,/\n");
	scanf("%s",&choice);
}
else if(o=='b')
{
	printf("Enter any function from the following:avg,mod,log,sin,cos,tan,sec,cosec,cot,exp");
	scanf("%s",&select);
}
	switch(choice)
	{
		case'+':
			{
				printf("Enter number of elements to add:");
            	scanf("%d",&n);
             	printf("Enter the numbers:");
             	for(i=0;i<n;i++)
             	{
		        scanf("%f",&a[i]);
	            }
	            add(n,&a[0]);
	            break;
			}
				case'-':
			{
				printf("Enter number of elements to subtract in sequence:");
            	scanf("%d",&n);
             	printf("Enter the numbers:");
             	for(i=0;i<n;i++)
             	{
		        scanf("%f",&b[i]);
	            }
	            sub(n,&b[0]);
	            break;
			}
				case'*':
			{
				printf("Enter number of elements to multiply:");
            	scanf("%d",&n);
             	printf("Enter the numbers:");
             	for(i=0;i<n;i++)
             	{
		        scanf("%f",&c[i]);
	            }
	            mul(n,&c[0]);
	            break;
			}
			case'!':
				{
					printf("Enter the number:");
					scanf("%d",&r);
					factorial(r);
				}
			
		}
		if(strcmp(select,"mod")==0)
		{
		printf("Enter the numbers to perform modulo division:");
		scanf("%d %d",&n1,&n2);
		mod(n1,n2);	
		}
		else if(strcmp(select,"sin")==0)
				{
					printf("Enter angle in degree:\n");
	               scanf("%f", &dsin);
                	rds= dsin * (pi / 180.0);
                	sinx(dsin,rds);
                
				}
		else if(strcmp(select,"cos")==0)
				{
					printf("Enter angle in degree:\n");
	               scanf("%f", &dc);
                	rc= dc * (pi / 180.0);
                	cosx(dc,rc);
    
				}
		else if(strcmp(select,"tan")==0)
				{
					printf("Enter angle in degree\n");
	               scanf("%f", &dt);
                	rt= dt * (pi / 180.0);
                	tanx(dt,rt);
				}
		else if(strcmp(select,"sec")==0)   
				{
					printf("Enter angle in degree:\n");
	               scanf("%f", &ds);
                	rsc= ds * (pi / 180.0);
                	secx(ds,rsc);
				}
		else if(strcmp(select,"cosec")==0)  
				{
					printf("Enter angle in degree:\n");
	               scanf("%f", &dcs);
                	rcs= dcs * (pi / 180.0);
                	cosecx(dcs,rcs);
				}
		else if(strcmp(select,"cot")==0)
				{
					printf("Enter angle in degree:\n");
	               scanf("%f", &dct);
                	rct= dct * (pi / 180.0);
                	cotx(dct,rct);
				}
		else if(strcmp(select,"pow")==0)		
					{
						printf("Enter base and power: ");
                        scanf("%d %d",&num1, &num2);
                        long result = power(num1, num2);
					}
       

else if(strcmp(select,"log")==0)
{
double n, result;

  printf("Enter a number to calculate its natural logarithm (base = e):\n");
  scanf("%lf", &n);
  result = log(n);
  printf("Natural log of %.2lf = %lf\n", n, result);
}
	else if(strcmp(select,"avg")==0)
	{
		float d[100],total=0;
		int i,n;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		total=total+d[i];
	}
	average(n,total);
	}
				
			
	}  
void add( int n,float b[])
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	printf("Sum of the numbers:%f\n",sum);
}
void sub( int n,float b[])
{
	int i;
	float dif=0;
	for(i=0;i<n;i++)
	{
		dif=dif+b[i]-b[i-1];
	}
	printf("Total difference of the numbers:%f\n",dif);
}
void mul( int n,float b[])
{
	int i;
	float product=1;
	for(i=0;i<n;i++)
	{
		product=product*b[i];
	}
	printf("Product of the numbers:%f\n",product);
}
int mod(int n, int k)
{
	int ans;
	ans=n%k;
	printf("Quotient=%d",ans);
	
}
void sinx(float n,float d)
{
printf("sin(%f) = %f\n", n, sin(d) );	
}
void cosx(float n,float d)
{
	printf("cos(%f) = %f\n", n, cos(d) );
}
void tanx(float n,float d)
{
	printf("tan(%f) = %f\n", n, tan(d) );
}
void secx(float n,float d)
{
	printf("cosec(%f) = %f\n", n, 1/sin(d) );
}
void cosecx(float n,float d)
{
		printf("sec(%f) = %f\n", n, 1/cos(d) );
}
void cotx(float n,float d)
{
		printf("cot(%f) = %f\n", n, 1/tan(d) );

}
long power(float a, float b)
{
	long result = 1;
  for(int i=1; i<=b; i++)
  {
    result *= a;
  }
  printf("The result = %ld", result);
}
void average(int n, float t)
{
	float avg=t/n;
	printf("Average=%f",avg);
}

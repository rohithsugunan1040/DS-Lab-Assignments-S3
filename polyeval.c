#include<stdio.h>


struct poly
{
  float coeff;
  int exp;
};


//declaration of polynomials
struct poly a[50];

int main()
{
 int i;
 int d;
 int k=0;
 float sum=0;
 
 
 printf("Enter the highest degree of poly1:");
 scanf("%d",&d);
 
 //taking polynomial terms from the user
 for(i=0;i<=d;i++)
 {
 
    //entering values in coefficient of the polynomial terms
    printf("\nEnter the coeff of x^%d :",i);
    scanf("%f",&a[i].coeff);
	
	//entering values in exponent of the polynomial terms
	a[k++].exp = i;
 }
 for(i=0;i<=d;i++)
 {
    sum=sum+a[i].coeff;


 }
//sum=(int)sum;
 printf("The sum of coefficients is %.2f",sum);
}
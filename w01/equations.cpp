#include<math.h>
#include<stdio.h>

int main(){
    double x1,x2;
    int a,b,c;
    printf("Enter a b c");
    scanf("%d %d %d",&a,&b,&c);
    printf("For equation %dx^2+%dx+%d = 0 ,two roots are\n",a,b,c);
if(b*b-4*a*c>=0){
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%f \n x2=%f",x1,x2);
}
else{
	printf("No real roots");
}
}

/*
Enter a b c: 2 -3 1
For equation 2 x^2 -3 x + 1 =0, two roots are
x1 = 1.0
x2 = 0.5
*/

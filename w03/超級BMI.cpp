#include <stdio.h>

int main(){
    float height,m,weight,BMI; 
    printf("Enter your Height:");
    scanf("%f",&height);
    printf("Enter your Weight:");
    scanf("%f",&weight);
    
    
    
    
    while(BMI>=0){
    	
    	m=height/100.;
        BMI=weight/(m*m) ;
        
      printf("BMI = %.1f\n",BMI);
      if(BMI<18.5)
        printf("�魫�L��\n",BMI);
      else if(BMI>=18.5 && BMI<24)
        printf("���`�d��\n",BMI);
      else if(BMI>=24 && BMI<27)
        printf("�L��\n",BMI);
      else if(BMI>=27 && BMI<30)
        printf("���תέD\n",BMI);
      else if(BMI>=30 && BMI<35)
        printf("���תέD\n",BMI);
      else if(BMI>=35)
        printf("���תέD\n",BMI);
    printf("Enter your Height:");
    scanf("%f",&height);
    printf("Enter your Weight:");
    scanf("%f",&weight);
}
}

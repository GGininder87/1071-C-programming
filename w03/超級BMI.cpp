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
        printf("體重過輕\n",BMI);
      else if(BMI>=18.5 && BMI<24)
        printf("正常範圍\n",BMI);
      else if(BMI>=24 && BMI<27)
        printf("過重\n",BMI);
      else if(BMI>=27 && BMI<30)
        printf("輕度肥胖\n",BMI);
      else if(BMI>=30 && BMI<35)
        printf("中度肥胖\n",BMI);
      else if(BMI>=35)
        printf("重度肥胖\n",BMI);
    printf("Enter your Height:");
    scanf("%f",&height);
    printf("Enter your Weight:");
    scanf("%f",&weight);
}
}

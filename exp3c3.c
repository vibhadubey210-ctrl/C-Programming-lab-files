//3.	WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3;
    float area;
    printf("Enter the value of x1\n");
    scanf("%f",&x1);
    printf("Enter the value of x2\n");
    scanf("%f",&x2);
    printf("Enter the value of x3\n");
    scanf("%f",&x3);
    printf("Enter the value of y1\n");
    scanf("%f",&y1);
    printf("Enter the value of y2\n");
    scanf("%f",&y2);
    printf("Enter the value of y3\n");
    scanf("%f",&y3);
    printf("Enter the value of x1\n");
    area= x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if(area==0){
        printf("This is colienar");
    }
  else{
    printf("Not coliear");
  }
  return 0;
    }

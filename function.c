#include<stdio.h>
#include<math.h>
int sum(int a,int b);
void prod(int a , int b);
void square();
void rectangle();
void circle();

int sumNatural(int n);
void prntHW(int n);
void fibonacci();

int main(){
    // int a,b,s;
    // int n;

    // printf("enter a num.: ");
    // scanf("%d",&n);
    // printf("The sqr of a num. is: %f",pow(n,2));

    // printf("enter a num: ");
    // scanf("%d",&a);
    // printf("enter again a num: ");
    // scanf("%d",&b);

    // square();
    // rectangle();
    // circle();

    // s=sum(a,b);//actual parameter/argument
    // printf("thier sum is: %d \n",s);

    // prod(a,b);

    //-------recursive function-------------

    // prntHW(5);

    // printf("sum of number to 5 is: %d",sumNatural(5));



    return 0;
}
int sum(int x,int y){//formal parameter/parameter
    return x+y;
}

void prod(int a,int b){
    int prod;
    prod = a*b;
    printf("product is: %d \n",prod);
}

void square(){
    int l;
    printf("enter length of square: ");
    scanf("%d",&l);
    printf("area of square is: %d \n",l*l);
}
void rectangle(){
    int l,b;
    printf("enter length of rectangle: ");
    scanf("%d",&l);
    printf("enter breadth of rectangle: ");
    scanf("%d",&b);
    printf("area of rectangle is: %d \n",l*b);
}
void circle(){
    int r;
    printf("enter radius of circle: ");
    scanf("%d",&r);
    printf("area of circle is: %f \n",3.14*r*r);
}

void prntHW(int n){
    if(n==0){
        return;
    }
    printf("Hello World\n");
    prntHW(n-1);
}
int sumNatural(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sumNatural(n-1);
    int sumN=sumNm1+n;
    return sumN;
}


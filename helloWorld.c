#include<stdio.h>
int main(){

    // -------------chapter-1(variables,data types & input/output)------------

    // int a,b,perimeter,n;
    // printf("enter 1st side\n");
    // scanf("%d",&a);
    // printf("enter 2nd side\n");
    // scanf("%d",&b);
    // perimeter = 2*(a+b);
    // printf("its perimeter is = %d \n", perimeter);

    // printf("enter a num.");
    // scanf("%d",&n);
    // printf("its cube is : %d",n*n*n);

    // ------------ chapter-2(instructions and operators)---------

    // int n,c;
    // printf("enter a number:");
    // scanf("%d",&n);
    // c=n%2;
    // printf("%d \n",c==0);
    // printf("%d",n>9 && n<100);

    // float a,b,c;
    // float avg,sml;
    // printf("enter 1st number:");
    // scanf("%f",&a);
    // printf("enter 2nd number:");
    // scanf("%f",&b); 
    // printf("enter 3rd number:");
    // scanf("%f",&c);
    // avg=(a+b+c)/3.0;
    // sml=a<b && a<c || b<a && b<c || c<a && c<b;
    // printf("%f is the avg of given numbers. \n",avg);
    // printf("smallest number among given numbers is %f",sml);

    //------------chapte-3(conditional statements)----------------

    // char ch;
    // printf("enter a letter: ");
    // scanf("%c",&ch);
    // if(ch>='A' && ch<='Z'){
    //     printf("letter is in uppercase");

    // } 
    // else if(ch>='a' && ch<='z'){
    //     printf("letter is in lowercase");
    // }
    // else{
    //     printf("letter is not from english alphabet");
    // }

    // int n;
    // printf("enter a number: "); 
    // scanf("%d",&n);

    // if(n>0){
    //     printf("the number is natural number");
    // }
    // else{
    //     printf("its not natural number");
    // }

    // int n,r,a=0,m;
    // printf("enter a number: ");
    // scanf("%d",&n);
    // m=n;
    // if(n!=0){
    //     c:
    //     r = m%10;
    //     a = a + r*r*r;
    //     m = m/10;
    //     if(m!=0){
    //         goto c;
    //     }
    // }
    // if(a==n){
    //     printf("its armstrong number : %d",a);
    // }

    // -----------chapter-4(loop control instructions)------------

    // int n;
    // do{
    //     printf("enter a new num: ");
    //     scanf("%d",&n);

    //     if(n%7==0){
    //         break;
    //     }
    // }while(1);
    // printf("End");

    // int i;
    // for(i=1;i<=10;i++){
    //     if(i==3){
    //         continue;//skip it
    //     }
    //     printf("%d",i);
    // }

    // int i,j;
    // for(i=1;i<=4;i++){
    //     for (j=1;j<=5;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int num,c=0;
    // printf("enter a num: ");
    // scanf("%d",&num);
    // for(int i=1;i<=num;i++){
        
    //     int rem=num%i;
    //     if(rem==0){
    //         // printf("%d",i);
    //         c += 1;
            
    //     }
    // }
    // if(c==2){
    //     printf("Num is prime");
    // }else{
    //     printf("Num is composite");
    // }

    // int n,c=0;
    // printf("enter a num: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         int r=i%j;
    //         if(r==0){
    //             c+=1;
    //         }
    //     }
    //     if(c==2){
    //             printf("%d\n",i);
    //     }
    //     c=0;
    // }

    //---------------------chapter-6(pointers)------------------------

    return 0;

}

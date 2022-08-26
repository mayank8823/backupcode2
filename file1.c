// // this program is written by Pushkar Choudhary
// // student id:202152333
// // aim: maximum of three numbers
// #include <stdio.h>
// int main ()
// {
//   int a, b, c;
//   printf ("Enter the numbers\n");
//   scanf ("%d\n%d\n%d", &a, &b, &c);
//   if (a > b && a > c){
//       printf ("a is greatest that is = %d", a);
//     }
//   else if (b > a && b > c){
//       printf ("b is greatest that is = %d", b);
//     }
//   else{
//       printf ("c is greatest that is = %d", c);
//     }

//   return 0;
//}
// #include <stdio.h>

// int main()
// {
//     int a,b;
//     scanf("%d",&a);
//     for(int i=0;i<=a;i++){
//         for(int j=0;j<=a;j++){
//             if(j<=a-i){
//                 printf(" ");
//             }
//             else{
//                 printf("* ");
//             }
//         }
        
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    float ca,s1,s2,s3,s,ta,l,b,radius;
    printf("Enter the shape type(1 for circle,2 for triangle, 3 for rectangle): ");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
           printf("Enter the radius: ");
           scanf("%f",&radius);
           ca=3.14159*radius*radius;
           printf("Area of circle= %f",ca);
           break;
        case 2:
           printf("Enter side 1: ");
           scanf("%f",&s1);
           printf("Enter side 2: ");
           scanf("%f",&s2);
           printf("Enter side 3: ");
           scanf("%f",&s3);
           s = (s1+s2+s3)/2;
           ta = sqrt(s*(s-s1)*(s-s2)*(s-s3));
           printf("Area of triangle= %f",ta);
           break;
        case 3:
           printf("Enter length: ");
           scanf("%f",&l);
           printf("Enter breadth: ");
           scanf("%f",&b);
           printf("Area of rectangle= %f",l*b);
    }
    return 0;

}
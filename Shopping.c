#include <stdio.h>

int main(){
   double m, b, e, a;
   int qm, qb, qe, qa;
   printf("Enter price of Milk:\n");
   scanf("%lf", &m);
   printf("How much milk do you have:\n");
   scanf("%d", &qm);
   double pm = qm * m;
   printf("%s %lf \n", "Price of milk is:", pm);
   
   printf("Enter the price of Eggs:\n");
   scanf("%lf", &e);
   printf("How much eggs do you have:\n");
   scanf("%d", &qe);
   double pe = qe * e;
   printf("%s %lf \n", "Price of Eggs is:", pe);

   printf("Enter the price of Bread:\n");
   scanf("%lf", &b);
   printf("How much bread do you have:\n");
   scanf("%d", &qb);
   double pb = qb * b;
   printf("%s %lf \n", "Price of Bread is:", pb);

   double tp = pb + pe + pm;
   printf("%s %lf \n", "Total price is", tp);
	return 0;
   
}

#include <stdio.h>

int readint();
double readdoub();
double calc(int, double, double);
void printres(double);

int main(){
	double m,n,r;
	int l;
	l = readint();
	m = readdoub();
	n=readdoub();
	r = calc(l, m, n);
	printres(r);
        return 0;

}

int readint(){
	int z;
	printf("Enter an int pls:");
	scanf("%d", &z);
	return z;
}

double readdoub(){
	double x;
	printf("Enter two doubles pls:");
	scanf("%lf", &x);
	return x;
}
double calc(int z, double x, double y){
	double result;
	result=x*y+z ;
	return result;   
}

void printres(double r){
	printf("%.2f\n", r);
}

#include <math.h>
#include <stdio.h>
int main() {
	double a,b,c,discriminant , root1, root2 ,realPart, imgpart;
	printf("enter coefficient a, b,and c: ");
	scanf("%lf %lf %lf , &a, &b, &c");
	
	discriminant = b*b-4*a*c;
	
	if (discriminant > 0 ) {
		root1 = (-b+ sqrt(discriminant)) / (2*a);
		root2 = (-b + sqrt(discriminant))/ (2*a);
		printf("root1 = %.2lf and root2 = %.2lf ", root1 , root2);
	}
	 else if(discriminant == 0) {
	 	root1 = root2 = -b /(2*a);
	 	printf(" root1 = root2 = %.2lf;",root1);
	 	
	 }
	 
	 else {
	    realPart = -b/(2*a);
	    imgpart = sqrt(-discriminant)/ (2*a);
	    printf("root1 = %.2lf + %.2lfi and root2 = %.2f- %.2fi , realPart, imgpart ,realPart, imgpart");
   } 
    
    return 0;
}

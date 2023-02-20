#include<stdio.h>
#include<math.h>
int main()
{
	float A, B, C, root1, root2;
	float real, imaginary, discriminant;
	
	
	printf("Enter the value of A\n");
	scanf("%f",&A);
	printf("Enter the value of B\n");
	scanf("%f",&B);
	printf("Enter the value of C\n");
	scanf("%f",&C);
	
	if( A==0 || B==0 || C==0){
		printf("Error: Young man in your right senses do you think there will be available roots???\n");
	}
	 else{
	 	discriminant = (B*B) - (4*A*C);
	 	if(discriminant < 0){
	 		printf("Imaginary roots\n");
	 		real = -B/(2*A);
	 		imaginary = sqrt(abs(discriminant))/(2*A);
	 		printf("Root1 = %f +i %f\n",real, imaginary);
	 		printf("Root2 = %f -i %f\n",real, imaginary);
		 }
		  else if(discriminant == 0){
		  	printf("Roots are real and equal\n");
		  	root1 = -B/(2*A);
		  	root2 = root1;
		  	printf("Root1 = %f \n",root1);
		  	printf("Root2 = %f \n",root2);
		  }
		   else if(discriminant > 0){
		   	printf("Roots are real but distinct\n");
		   	root1 =(-B+sqrt(discriminant))/(2*A);
		   	root2 =(-B-sqrt(discriminant))/(2*A);
		   	printf("Root1 = %f \n",root1);
		   	printf("Root2 = %f \n",root2);
		   	
		   }
	 }
	 return 0;
}

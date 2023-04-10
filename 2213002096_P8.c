#include<stdio.h>
#include<math.h>

int main(){
	
int li, ls, x;
float r, r2;

	printf("Con el for\n\n");

	printf("Limite inferior\n");
	scanf("%d",&li);


	printf("Limite superior\n");
	scanf("%d",&ls);

	for(x = li; x <= ls; x++){
		r=r+(3*pow(x,3)+(2*pow(x,2))+x+1);
		}

printf("%.2f\n", r);


printf("Con el While");
x=li;

	while(x <= ls){
		r2=r2+(3*pow(x,3)+(2*pow(x,2))+x+1);
		x++;
		}

	printf("\n%.2f",r2);
	return 0; 	
}

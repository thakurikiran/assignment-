#include <stdio.h>

struct Person{
	char name[50];
	int age;
};

int main(){
	int i;
	struct Person p[5];
	float b;
	
	for(i=0;i<5;i++){
		printf("Enter the name and age of %d person: \n",i+1);
		scanf("%s",p[i].name);
	
		scanf("%d",&p[i].age);
		
		
	}
	for(i=0;i<5;i++){
		if(p[i].age<=15){
			printf("The degree of membership of %s is 1.\n",p[i].name);
		}
		else if(p[i].age>15 && p[i].age<=35){
			b = (35-p[i].age)*0.05;
			printf("The degree of membership of %s is %0.2f.\n",p[i].name,b);
		}
		else{
			printf("The degree of membership of %s is 0.\n",p[i].name);
		}
	}
	
	return 0;
}
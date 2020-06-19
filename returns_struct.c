#include<stdio.h>

//Function that returns a struct.

//Since the function will return a struct, the data type must also be struct. 
//Like the data type of the function that returns int is int.

struct Movie{
	
	char name[20];
	char director[30];
	int year;
};

void show(struct Movie a);
struct Movie fill();

int main(){
	
	struct Movie movie=fill();
	show(movie);
	
	
	return 0;
}

void show(struct Movie a){
	printf("The name of the movie:%s\nThe director of movie:%s\nThe first screening year of the film:%d",a.name,a.director,a.year);
}

struct Movie fill(){
	
	struct Movie m;
	printf("Please enter information of movie(name,director,year):");
	scanf("%s %s %d",&m.name,&m.director,&m.year);
	
	return m;

}

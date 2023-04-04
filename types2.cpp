#include <cstdio>
#include <cstddef>
#include <iostream>
#include <string>

enum STATE{INSTANTIATED, STARTED, CREATED, DESTROYED};


void printState(STATE state)
{
    
    std::string text;;

	switch(state)
	{
		case (STARTED):
			text = "Is starred";		
		 	break;

	 	case CREATED:
	 		{
				text = "Is created";	
				break;
			}

	 	case DESTROYED:
			text = "Is destroyed";		
		 	break;

	 	default: 
	 		text = "Wrong key";
		 	break;	

	}

	std::cout << text << std::endl;

}



struct Book{
char name[256];
int year;
int pages;
bool harcover;
};


void printBook(Book book){
 	std::cout << book.name << std::endl;
 	std::cout << book.year << std::endl;
 	std::cout << book.pages << std::endl;
 	std::cout << book.hardcover << std::endl;
 	
}

int main()
{



STATE state = INSTANTIATED;
printState(state);

Book crashCourse;
crashCourse.name[0] = 'A';
crashCourse.name[1] = '\0';
crashCourse.year = 2009;
crashCourse.pages = 248;
crashCourse.harcover = false;
printBook(crashCourse);


return 0;
}








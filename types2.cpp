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



struct Book
{
	std::string name;
	int year;
	int pages;
	bool hardcover;
};


union Variant
{
	//std::string cadena;
	int integer;
	double mydouble;
};

Book createBook(std::string name, int year, int pages, bool hardcover)
{
	Book book;
	book.name = name;
	book.year = year;
	book.pages = pages;
	book.hardcover = hardcover;
    return book;
}


void printBook(Book book)
{
 	std::cout << book.name << std::endl;
 	std::cout << book.year << std::endl;
 	std::cout << book.pages << std::endl;
 	std::cout << book.hardcover << std::endl;
 	
}

int main()
{

STATE state = INSTANTIATED;
printState(state);


// Create Book PODs and printe them all.
Book books[3];
Book crashCourse = createBook("Crash course in C++", 2009, 478, false);
Book masteringGit = createBook("Mastering GIT", 2011, 501, false);
Book android = createBook("Android Advanced", 2017, 879, false);
books[0] = crashCourse;
books[1] = masteringGit;
books[2] = android;
printBook(books[0]);
printBook(books[1]);
printBook(books[2]);


Variant v;
v.integer = 124;
v.mydouble = 3.14159265;
std::cout << sizeof(v) << std::endl;
std::cout << v.integer << std::endl;
std::cout << v.mydouble << std::endl;

return 0;
}
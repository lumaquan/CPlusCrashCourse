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


int main()
{

STATE state = INSTANTIATED;
printState(state);

return 0;
}








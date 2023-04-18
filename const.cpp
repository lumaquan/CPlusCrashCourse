#include <cstdio>

void printChar(char *name)
{
    name[0] = 'a';
    printf("%s\n", name);
}

class MyObject
{

public:
    void useStateDoNotChageIt() const
    {
        int value = 2 * state;
        printf("state = %d , calculated = %d\n", state, value);
    }

    void useState()
    {
        state++;
    }

    void printState(){
        printf("state = %d\n", state);
    }

private:
    int state;
};

int main()
{

    char name[] = "Luis Melendez";
    char word[] = {'a', 'b'};
    printChar(name);
    printChar(word);
    MyObject obj;
    obj.useStateDoNotChageIt();
    obj.useState();
    obj.printState();

    const MyObject &myConst = obj;
    MyObject &my = obj;
    my.useState();
    obj.printState();

    my = myConst;
    obj.printState();
    
    return 0;
}

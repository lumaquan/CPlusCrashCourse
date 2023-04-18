#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

struct Element
{

    Element *next{};

    Element(char c1, char c2, short op)
    {
        prefix[0] = c1;
        prefix[1] = c2;
        op_num = op;
    }

    void insert_next(Element *nextElement)
    {
        nextElement->next = next;
        next = nextElement;
    }

    char prefix[2];
    short op_num;
};




int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *ap = a;
    cout << *(ap + 3) << endl;

    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char *upper_ptr = &upper[0];

    int val = 10;
    int *myp = &val;
    printf("%d\n", *myp);

    lower[3] = 'd';
    *(lower + 3) = 'x';

    upper_ptr[3] = 'D';
    *(upper + 3) = 'X';

    char letter_d = lower[3];
    char letter_D = upper_ptr[3];

    printf("lower: %s\nupper: %s\n", lower, upper);

    lower[7] = 'a';




    Element luis = {'S', 'r', 23};
    Element nadia = {'S', 'a', 34};
    Element jose = {'C', 's', 56};
    Element ricardo = {'D', 'o', 45};

    luis.insert_next(&nadia);
    nadia.insert_next(&jose);
    jose.insert_next(&ricardo);

    for (Element *current = &luis; current; current = current->next)
    {
        cout << current->op_num << endl;
    }

    int x = 10;
    int& rx = x;
    cout << "x = " << x << endl;
    cout << "rx = " << rx << endl;
    rx = 34;
    cout << "x = " << x << endl;
    cout << "rx = " << rx << endl;
    int y = 20;
    rx = y;
    cout << "x = " << x << endl;
    cout << "rx = " << rx << endl;

    rx = 50;
    cout << "x = " << x << endl;
    cout << "rx = " << rx << endl;
    cout << "y = " << y << endl;

    string name = "grande";

    return 0;
}
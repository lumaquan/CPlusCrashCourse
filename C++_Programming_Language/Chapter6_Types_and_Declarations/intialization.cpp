#include <iostream>

using namespace std;

class Node
{
public:
    Node(int x, int y) : x{x}, y{y}
    {

        cout << "ordinary constructor" << endl;
    }

    Node(const Node &node)
    {
        cout << "copy constructor" << endl;
        x = node.x;
        y = node.y;
    }

    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

private:
    int x, y;
};

int main()
{
    Node n1{1, 2};
    Node n2 = {3, 4};
    Node n3(5, 6);
    Node n4{n1};
    Node n5 = n2;
    Node n6(n3);
    n1.print();
    n2.print();
    n3.print();
    n4.print();
    n5.print();
    n6.print();

    Node *pn7 = new Node{7, 8};
    Node *pn8 = new Node(9, 10);
    Node *pn9 = new Node{*pn7};
    Node *pn10 = new Node{*pn8};
    delete pn7;
    delete pn8;
    delete pn9;
    delete pn10;

    // char c{1000};      narrowing is not allowed when using {}
    // int ipi{3.1416};    narrowing is not allowed when using {}
    float pi{3.141592653589793238};
    cout << pi << endl;
    char c = 1000;
    cout << c << endl;
    int ipi{pi};  // clang++ does not allow this 
    cout << ipi << endl;
}
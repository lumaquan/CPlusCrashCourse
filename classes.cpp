#include <cstdio>
#include <cstddef>
#include <iostream>
#include <string>

using namespace std;

struct Clock
{
    void add_year()
    {
        year++;
    }

    int get_year()
    {
        return year;
    }

private:
    int year;
};

class Setting
{

    int id;
    string title;
    string summary;

public:
    Setting() : Setting(0, "NO_TITLE", "NO_SUMMARY") {}

    Setting(int my_id) : Setting(my_id, "NO_TITLE", "NO_SUMMARY") {}

    Setting(int my_id, string my_title, string my_summary)
    {
        id = my_id;
        title = my_title;
        summary = my_summary;
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void printState()
    {
        cout << "id = " << id << endl;
        cout << "title = " << title << endl;
        cout << "summary = " << summary << endl;
    }
};

struct ProcessBlock
{
    int id;
    int parendId;
    int ip;
    double time;
};

int main()
{

    Clock clock;
    clock.add_year();
    clock.add_year();
    cout << clock.get_year() << endl;

    Setting idiom;
    idiom.printState();
    Setting color = Setting(1);
    color.printState();
    Setting guess{32};
    guess.printState();

    ProcessBlock processBlock = {2, 1, 0x454545, 3.1416};
    cout << processBlock.time << endl;

    int a_1[] = {1, 2, 3};
    int a_2[5] = {};
    int a_3[5] = {1, 2, 3, 4, 5};
    int a_4[]{1, 2, 3};

    return 0;
}
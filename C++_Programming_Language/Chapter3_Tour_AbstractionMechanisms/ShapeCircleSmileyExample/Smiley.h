#pragma once

#include "Circle.h"
#include <vector>

class Smiley : public Circle
{
public:
    Smiley(Point p, int r) : Circle{p, r}, mouth{nullptr}
    {
        cout << "Smiley<" << this << ">" << endl;
    }

    ~Smiley()
    {
        cout << "~Smiley<" << this << ">" << endl;
        delete mouth;
        for (auto p : eyes)
            delete p;
    }

    void draw() const
    {
        cout << "drawing head:" << endl;
        Circle::draw();
        cout << "drawing eyes:" << endl;
        for (auto p : eyes)
            p->draw();
        if (mouth)
        {
            cout << "drawing mouth:" << endl;
            mouth->draw();
        }
    }

    Point center() const
    {
        return Circle::center();
    }

    void move(const Point &to)
    {
        Circle::move(to);
    }

    void rotate(int ang)
    {
        cout << "rotate Smiley" << endl;
    }

    void add_eye(Shape *s)
    {
        eyes.push_back(s);
    }

    void set_mouth(Shape *s)
    {
        mouth = s;
    }

private:
    vector<Shape *> eyes;
    Shape *mouth;
};
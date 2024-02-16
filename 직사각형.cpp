#include <iostream>

using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    Rectangle(int width, int height);
    int get_width() const;
    int get_height() const;
    void set_width(int width);
    void set_height(int height);
    int area() const;
    int perimeter() const;
    bool is_square() const;
};

Rectangle::Rectangle(int width, int height)
{
    this->set_width(width);
    this->set_height(height);
}

int Rectangle::get_width() const
{
    return this->width;
}

int Rectangle::get_height() const
{
    return this->height;
}

void Rectangle::set_width(int width)
{
    if(width <= 1000 && width > 0) this->width = width;
    else return;
}

void Rectangle::set_height(int height)
{
    if(height <= 2000 && height > 0) this->height = height;
    else return;
}

int Rectangle::area() const
{
    return this->width * this->height;
}

int Rectangle::perimeter() const
{
    return (this->width * 2) + (this->height * 2);
}

bool Rectangle::is_square() const
{
    if(this->width == this->height) return true;
    else return false;
}

int main()
{
    int w,h;
    cin >> w >> h;
    Rectangle Rect = Rectangle(w,h);
    cout << Rect.get_width() << endl;
    cout << Rect.get_height() << endl;
    cout << Rect.area() << endl;
    cout << Rect.perimeter() << endl;
    cout << Rect.is_square() << endl;
}
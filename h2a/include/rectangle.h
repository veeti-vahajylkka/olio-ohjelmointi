#ifndef RECTANGLE_H
#define RECTANGLE_H

struct Rectangle {
    private:
        double width;
        double height;

    public:
        double getArea();
        double getCircum();
        void setWidth(double);
        void setHeight(double);
};

#endif
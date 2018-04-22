//
// Created by Alison Alvarez on 4/21/18.
//

#ifndef RECTANGLE2D_RECTANGLE2D_H
#define RECTANGLE2D_RECTANGLE2D_H


class Rectangle2D {
public:
    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

private:
    double x, y, width, height;


};


#endif //RECTANGLE2D_RECTANGLE2D_H

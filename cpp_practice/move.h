#pragma once


#ifndef MOVE_H_
#define MOVE_H_


class Move {
private:
	double x;
	double y;
public:
    Move(double a = 0, double b = 0); // set x,y to a,b
    void showmove() const; //show current x,y values
    Move add(const Move& m) const;
    // this function adds x of m to x of invoking object to get new x,
    // add y of m to y of invoking object to get new y, create a new
    // move object initialized to new x,y values and returns it.
    void reset(double a = 0, double b = 0); //reset x, y to a, b
};


#endif 

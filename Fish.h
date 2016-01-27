/* 
 * File:   Fish.h
 * Author: diana
 *
 * Created on January 25, 2016, 9:26 PM
 */

#ifndef FISH_H
#define	FISH_H

#include "Object.h"

class Fish: public Object
{
private:
    static GLfloat vertex[172];
    static GLfloat normal[172];
    static GLfloat texels[172];
    static GLfloat colors[172];
    static GLfloat material[4];
    static GLfloat shininess;
    float tailAngle, tailAngleCutOff, tailAngleInc;     // For tail calculations
    float Th;       // Rotation angle
    float Sx, Sy, Sz;   // Scaling
    void drawSide();    // Draws a side of the fish
public:
    Fish(float x=0,float y=0,float z=0,float dx=1,float dy=1,float dz=1,float th=0);             // Constructor
    void display();     // Draws the full fish
    void rotate(float th);
    void scale(float dx, float dy, float dz);
            
};


#endif	/* FISH_H */


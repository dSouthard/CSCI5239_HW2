/*
* Header file for Renderable
*
*
* Renderable Class. This is an abstract class that all of the 
* objects that
* are attached to the scene inherit from. It provides basic 
* functionality
* for moving/rotating/scaling objects as well as defining a pure 
* virtual
* function '_draw()' that must be difined by its children classes 
* which 
* actually does the drawing of any specific object.
*
* Written by Igor Kromin
*/

#ifndef REDERABLE_H
#define REDERABLE_H

#include <QGLWidget>

class Object
{
protected:
   float x0,y0,z0;                          //  Location
   // To be implemented later
//   float rx, ry, rz;                        // rotation axis
//   float sx, sy, sz;                        // Spinning axis
   Object(float x=0,float y=0,float z=0);   //  Constructor
public:
   void translate(float x,float y,float z); //  Set translation
   virtual void display()=0;                //  Render the object
   virtual ~Object() {};                    //  Do nothing destructor
   float getX();                            // Return current x value
   float getY();                            // Return current y value
   float getZ();                            // Return current z value
};

#endif

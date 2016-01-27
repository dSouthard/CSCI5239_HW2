# CSCI5239_HW2
Procedural Textures
Diana Southard
CSCI 5239 Spring 2016

#### Directions
Create a program that allows a scene to be viewed in 3D from any direction under user control.

The objects in the scene should be colored using a procedural texture shader. You may not use the brick or mandlebrot shaders shown in class.  If you use a shader from the text or the web, you should improve it.

Your scene should be lit.  You may reuse the phong() function from Example 3 but improvements are always encouraged.

The resulting shader may be only a few lines long, so make sure you can justify and explain every line.

#### Program Use Instructions
Use the dropdown menus to select between the following options:
- Shader: None, "Sine Wave," "Psychedelic"
	*Sine Waves:* Texture is a simple sin function of of S and T
	*Psychedelic:* Sine Wave texture set to move with time.
- Projection: Orthogonal or Perspective
- Object: Cube, Teapot, or Goldfish
	*Goldfish:* 3D model of a fish with moving tailfin.

Use the sliders to adjust the display object's current position in the X, Y, and Z axis. Subsequent translations will be displayed labeled "Position" below positioning sliders.

Using the mouse, the object can be rotated by dragging with the right mouse button. Subsequent angles of rotation will be displayed below the positioning sliders. The scene can also be zoomed in/out by using the mouse wheel or scrolling with a touchpad, with the resulting zoom level also displayed.

The scene is lit by a rotating sphere which can be paused using the "Pause" button. Once paused, the button is renamed to "Animate" which will resume the sphere's rotation.

All positioning adjustments can be reset by clicking on the "Reset" button on the bottom left of the menu. This will restore the object to the center of the screen in its origiinal angle position.

Use the Quit button or the window's exit button to end the program.

**Time To Complete Assignment:** ~ 8 hours

Based on provided class Example 3.

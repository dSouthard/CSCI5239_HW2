/* Sine Wave texture shader
* Derived from http://computer-graphics.se/TSBK07-files/pdf/PDF09/7b.pdf
* Added Lighting effects, optimized calculations
*/


//  Light from vertex shader
varying float LightIntensity;

void main()
{
// Create a simple sin function based off of texture coordinates
float a = sin(gl_TexCoord[0].s*30.0)*0.5+0.5;
float b = sin(gl_TexCoord[0].t*30.0)*0.5+0.5;

//  Create color for fragment
   gl_FragColor = vec4(a,b,1.0,1.0);

//  Adjust color intensity for lighting (interpolated from vertex shader values)
    gl_FragColor *= LightIntensity;
}

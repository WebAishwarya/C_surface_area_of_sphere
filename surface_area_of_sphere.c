#include <stdio.h>

int main() 
{
    float radius = 6;
    float surface_area_of_sphere;
    
    surface_area_of_sphere = 4 * 3.14 * radius * radius;
    
    printf("Value of radius is : %.2f\n\n", radius);
    printf("Surface area of the sphere : %.2f\n", surface_area_of_sphere);
    
    return 0;
}

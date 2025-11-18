#include <stdio.h>
#include <math.h> 

int main() {
    float initial_velocity, acceleration, time, distance;
    printf("Enter the initial velocity (u) in m/s: ");
    scanf("%f", &initial_velocity);
    printf("Enter the acceleration (a) in m/s^2: ");
    scanf("%f", &acceleration);
    printf("Enter the time (t) in seconds: ");
    scanf("%f", &time);
    distance = (initial_velocity * time) + (0.5 * acceleration * time * time);
    printf("The distance traveled (s) is: %.2f meters\n", distance);
    return 0;
}

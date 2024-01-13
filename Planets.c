#include <math.h>
#include <stdio.h>

int main(void) {
  double circumference;
  printf("Circumference (km) of planet? ");
  scanf("%lf", &circumference);
  double acc;
  printf("Acceleration due to gravity (m/s^2) on planet?\n");
  scanf("%lf", &acc);

  printf("Calculating the escape velocity...\n");
  double pi = acos(-1);
  double G = 6.6726 * pow(10, -11);
  double r = (circumference*1000) / (2 * pi);
  double m = (acc * pow(r, 2)) / (G);
  double me = (m / pow(10, 21));
  double v = sqrt((2 * G * m) / r);

  printf("Planet radius: %.1lf km\n", r/1000);
  printf("Planet mass: %.1lf x 10^21 kg\n", me);
  printf("Escape velocity: %.1lf km/s\n", v/1000);

  return 0;
}

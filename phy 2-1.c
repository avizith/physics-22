#include <stdio.h>
#include <math.h>

void findOrder(double lambda, double d, double theta) {
    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return;
    }

    lambda = lambda * 1e-9;
    d = d * 1e-6;
    double theta_rad = theta * M_PI / 180.0;

    double m_calc = (d * sin(theta_rad)) / lambda;
    int m = (int)(round(m_calc));

    if (m > 0) {
        printf("%d-th order maxima\n", m);
    } else {
        printf("No maxima found.\n");
    }
}

int main() {
    double lambda, d, theta;

    printf("Enter wavelength (in nm): ");
    scanf("%lf", &lambda);
    printf("Enter slit separation (in micrometers): ");
    scanf("%lf", &d);
    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta);

    findOrder(lambda, d, theta);
    return 0;
}

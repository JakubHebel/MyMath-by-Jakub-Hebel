#include <cmath>

double heron(double a, double b, double c)
{
    double p, s;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}

double exponentiation(double a, double b)
{
    double p;
    p = pow(a,b);
    return p;
}

double factorial(double a)
{
    int s=1;

    for (int i=1; i<=a; i++)
    {
        s *=i;
    }

    return s;
}

int divisibility(int a, int b)
{
    int d;
    d = a%b;
    return d;
}

int euclidean(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

double bodymass(double mass, double height)
{
    double bmi;
    bmi = mass / (height * height);
    return bmi;
}

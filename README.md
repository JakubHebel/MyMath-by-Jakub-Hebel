# MyMath by Jakub Hebel
### Examples of using functions
#### 1. Heron - returns area of a triangle, computed from its sides lengths

double heron (double a, double b, double c)

a, b, c - lengths of triangle's sides

p - semiperimeter of the triangle

s - area of the triangle

#### 2. Exponentiation - reutrns the result of exponentiation one number to the power of another
double exponentiation(double a, double b)

a - the base

b - the exponent

p - result of exponentiation

#### 3. Factorial - returns factorial of given number (max 12!)

double factorial(double a)

a - given number

s - factorial of given number

#### 4. Divisibility - checks, whether one number is divisible by another

int divisibility(int a, int b)

a, b - numbers, of which we check divisibility

d - the remainder of division

if the remainder = 0, the numbers are divisible, if not, they aren't

#### 5. Greatest common divisor (Euclidean) - returns greatest common divisor of 2 numbers

int euclidean(int a, int b)

a, b - numbers, from which we want to get greatest common divisor

a (after the loop) - greatest common divisor

#### 6*. BMI - returns your Body Mass Index and writes, whether your weight is too little, ok or too big

double bodymass(double mass, double height)

mass - your body mass in kg

height - your height in cm

bmi - your Body Mass Index

// forward_feed_example_in_c_language.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#define MAX2(a, b) (a) > (b) ? (a) : (b)

// attributes of a neuron
double w;   // weight of an input
double b;   // bias

double getActivation(const double x) // c
{
    // linear or identity activation function
    return x;

    // ReLU max(0, x);
    // return MAX2(0, x);
}

double feedForward(const double input)
{
    const double sigma = w * input + b;

    return getActivation(sigma);
}
int main()
{
    // initialize attributes of a neuron
    w = 2.0;
    b = 1.0;

    double input;   // input x
    double output;

    input = 0.0;
    output = feedForward(input);
    printf("%f %f \n", input, output);

    input = 1.0;
    output = feedForward(input);
    printf("%f %f \n", input, output);

    input = 2.0;
    output = feedForward(input);
    printf("%f %f \n", input, output);
    // output y = f(\sigma) = f(w*input x + b)

    return 0;
}


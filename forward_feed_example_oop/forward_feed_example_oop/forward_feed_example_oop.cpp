// C-Style to C++ (OOP)
//

#include <stdio.h>
#define MAX2(a, b) (a) > (b) ? (a) : (b)

class Neuron
{
public:
    Neuron()
        : w_(2.0), b_(1.0)
    {}
    Neuron(const double& w_input, const double& b_input)
        : w_(w_input), b_(b_input)
    {}

public: // attributes
    double w_;   // weight of an input
    double b_;   // bias

public: // behaviors
    double feedForward(const double& input)
    {
        const double sigma = w_ * input + b_;

        return getActivation(sigma);
    }

    double getActivation(const double& x) // c
    {
        // linear or identity activation function
        return x;

        // ReLU max(0, x);
        // return MAX2(0, x);
    }

    void feedForwardAndPrint(const double& input)
    {
        printf("%f %f \n", input, feedForward(input));
    }
};

int main()
{
    // initialize my_neuron
    Neuron my_neuron(2.0, 1.0);

    for (double input = 0.0; input < 3.0; ++input)
    {
        my_neuron.feedForwardAndPrint(input);
    }
    

    return 0;
}


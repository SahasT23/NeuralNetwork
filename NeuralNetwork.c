#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// simple neural network to learn the XOR function

#define numInputs 2
#define numHiddenNodes 2
#define numOutputs 1
#define numTrainingSets 4

int main(void) {
  const double lr = 0.1f;

  double hiddenLayer[numHiddenNodes];

  double outputLayer[numOutputs];

  double hiddenLayerBias[numHiddenNodes];
}
float predict(float *vector) {
    const int dim = 5;
    const float weight[5] = {0, 0, 0, 0, 0};
    const float bias = 0;
    float threshold;
    
    for (int kk=0; kk<dim; kk++) {
        threshold += weight[kk] * vector[kk];
        threshold -= bias;
    }
    return threshold;
}

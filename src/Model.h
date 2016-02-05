#ifndef ONCE_MODEL_H
#define ONCE_MODEL_H

class Model {
private:
    int rank;
    int size;
public:
    Model(int rank, int size);
    int reduceRanks();
};

#endif // ONCE_MODEL_H

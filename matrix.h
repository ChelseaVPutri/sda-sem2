#include <iostream>

class MatrixRow {
    private:
        int column;
        int* value;

    public:
        MatrixRow();
        MatrixRow(int);
        int get(int);
        int set(int, int);
};

class Matrix {
    private:
        int row, col;
        MatrixRow* rows;

    public:
        Matrix();
        Matrix(int, int);
        int get(int, int);
        void set(int, int, int);  
};
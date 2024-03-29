
#ifndef COLUMN_VECTOR
#define COLUMN_VECTOR
#include "Matrix.hpp"

/**
 *该类继承自Matrix，用以实现列向量
 */
namespace matrix {
    template<typename T>
    class ColumnVector: public Matrix<T> {
    private:
        int row;
    public:
        ColumnVector(int row, T arr[]) : Matrix<T>(row, 1, arr) {
            this->row = row;
        }

        ColumnVector(int row) : Matrix<T>(row, 1) {
            this->row = row;
        }
    };
}
#endif
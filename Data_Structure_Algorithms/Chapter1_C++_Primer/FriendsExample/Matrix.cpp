    #include "Matrix.h"
    
    Matrix::Matrix(const Vector &r1, const Vector &r2, const Vector &r3)
    {
        a[0][0] = r1.a[0];
        a[0][1] = r1.a[1];
        a[0][2] = r1.a[2];
        a[1][0] = r2.a[0];
        a[1][1] = r2.a[1];
        a[1][2] = r2.a[2];
        a[2][0] = r3.a[0];
        a[2][1] = r3.a[1];
        a[2][2] = r3.a[2];
    }

    Vector Matrix::mul(const Vector &v)
    {
        Vector w;
        for (size_t r = 0; r < 3; r++)
        {
            for (size_t c = 0; c < 3; c++)
            {
                w.a[r] += a[r][c] * v.a[c];
            }
        }
        return w;
    }
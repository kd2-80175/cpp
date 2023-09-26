#include <iostream>
using namespace std;
class matrix
{
private:
    int r;
    int c;
    int **arr;

public:
    matrix()
    {

        this->r = 3;
        this->c = 3;
        arr = new int *[3];

        arr[0] = new int[3];
        arr[1] = new int[3];
        arr[2] = new int[3];
    }

    matrix(int r, int c)
    {
        this->r = r;
        this->c = c;

        arr = new int *[r];
        for (int m = 0; m < r; m++)
        {
            arr[m] = new int[c];
        }
    }

    void accept()
    {
        cout << "entries for matrix element" << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        cout << "the matrix elements are:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    friend void add(matrix m1, matrix m2, matrix m3, int r, int c);
    friend void subtract(matrix m1, matrix m2, matrix m3, int r, int c);
    friend void multiply(matrix m1, matrix m2, matrix m3, int r, int c);
    friend void transpose(matrix m, int r, int c);
};
void add(matrix m1, matrix m2, matrix m3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            cout << m3.arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void subtract(matrix m1, matrix m2, matrix m3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3.arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
            cout << m3.arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void multiply(matrix m1, matrix m2, matrix m3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < r; k++)
            {
                m3.arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
            }
            cout << m3.arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void transpose(matrix m, int r, int c)
{
    int temp[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            temp[i][j] = m.arr[j][i];
            cout << temp[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int x, y;
    cout << "enter the indexes for matrix";
    cin >> x >> y;

    matrix m1(x, y); // pass by value
    matrix m2(x, y);
    matrix m3(x, y);

    m1.accept();
    m1.display();
    m2.accept();
    m2.display();
    //add(m1, m2, m3, x, y);
    // subtract(m1, m2, m3, x, y);
    // multiply(m1, m2, m3, x, y);
    transpose(m1,  x, y);
transpose(m2,x,y);
    return 0;
}
#include <iostream>
#include <math.h>
#define n 5
using namespace std;
/*
    3 5 9 24 2
    1 74 -2 80 -1
    52 -5 -7 53 19
    11 88 -5 81 -39
    -3 -8 -4 -6 -22
 */

class Vector {
private:
    int arr[5];
public:
    friend void EnterTheMatrix(Vector matrix[]) {
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {
                cin >> matrix[i].arr[j];
            }
        }

    }

    void mergeSort(int begin, int end) {
        if (begin < end) {
            int middle = (begin + end) / 2;
            mergeSort(begin, middle);
            mergeSort(middle + 1, end);
            merge(begin, middle, end);
        }
    }
    friend void ShowTheMatrix(Vector matrix[])
    {
        for(int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; ++i) {
                cout << matrix[i].arr[j]<< " ";
            }
            cout << endl;
        }
        cout<<endl;
    }
    void merge(int begin, int middle, int end) {
        int t[5];
        int i = begin, j = middle + 1, k = 0;

        while (i <= middle && j <= end) {
            if (this->arr[i] <= this->arr[j]) {
                t[k] = this->arr[i];
                k++;
                i++;
            } else {
                t[k] = this->arr[j];
                k++;
                j++;
            }
        }

        while (i <= middle) {
            t[k] = this->arr[i];
            k++;
            i++;
        }

        while (j <= end) {
            t[k] = this->arr[j];
            k++;
            j++;
        }
        for (i = begin; i <= end;i++) {
            this->arr[i] = t[i - begin];
        }
    }
    double Calculation(Vector matrix[])
    {
        int sum[4] = {0, 0, 0, 0};
        double result= 1;
        for(int j = 0; j<n-1;j++){
            for (int i = j+1; i < n;i++) {
                sum[j] += matrix[j].arr[i];
            }
            result *= sum[j];
            cout <<"Sum of column: "<< sum[j] << endl;
        }
        cout << endl;
        result = pow(result, 1.0/4.0);
        cout<<"Average geometric:"<< result <<endl;
        }
    };


int main()
{
    Vector Matrix[n];
    cout << "Enter the matrix:" << endl;
    EnterTheMatrix(Matrix);

    //for passing again the matrix
    for (int i = 0; i < n; ++i)
        {
            Matrix[i].mergeSort(0, n-1);
        }

    cout<<"Sorted matrix:"<< endl;
    ShowTheMatrix(Matrix);
    Matrix->Calculation(Matrix);

    return 0;
}



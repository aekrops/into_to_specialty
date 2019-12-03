#include <iostream>
#include <cmath>
#include <iomanip>

#define size 5
using namespace std;

class Vector {
private:
    int rowArray[size];
public:
    friend void setMatrix(Vector matrix[])
    {
        for (int row = 0; row < size; row++)
        {
            for (int column = 0; column < size; column++)
            {
                cin >> matrix[column].rowArray[row];
            }
        }
    }

    void ascendingColumnMergeSort(int begin, int end)
    {
        if (begin < end)
        {
            int middle = (begin + end) / 2;
            ascendingColumnMergeSort(begin, middle);
            ascendingColumnMergeSort(middle + 1, end);
            merge(begin, middle, end);
        }
    }

    friend void getMatrix(Vector matrix[])
    {
        for(int row = 0; row < size; row++)
        {
            for (int column = 0; column < size; column++)
            {
                cout << setw(3) <<matrix[column].rowArray[row]<< " ";
            }
            cout << endl;
        }
        cout<<endl;
    }

    void merge(int begin, int middle, int end)
    {
        int unitingArray[size];
        int i = begin, j = middle + 1, k = 0;

        while (i <= middle && j <= end)
        {
            if (this->rowArray[i] <= this->rowArray[j])
            {
                unitingArray[k] = this->rowArray[i];
                k++;
                i++;
            } else
                 {
                    unitingArray[k] = this->rowArray[j];
                    k++;
                    j++;
                 }
        }


        while (i <= middle)
        {
            unitingArray[k] = this->rowArray[i];
            k++;
            i++;
        }


        while (j <= end)
        {
            unitingArray[k] = this->rowArray[j];
            k++;
            j++;
        }

        for (i = begin; i <= end;i++)
        {
            this->rowArray[i] = unitingArray[i - begin];
        }
    }

    double calculation(Vector matrix[])
    {
        int sumUnderMainDiagonal[size - 1] = {0, 0, 0, 0};
        double multiplies = 1;
        double geometricMean;
        for(int column = 0; column < size - 1;column++)
        {
            for (int row = column+1; row < size;row++)
            {
                sumUnderMainDiagonal[column] += matrix[column].rowArray[row];
            }
            cout <<"Sum of elements of the column under the main diagonal of matrix: "<<setw(2)<< sumUnderMainDiagonal[column] << endl;
            multiplies *= sumUnderMainDiagonal[column];
        }
        cout << endl;
        geometricMean = pow(multiplies, 1.0/4.0);
        cout<<"Average geometric:"<< geometricMean <<endl;
        }
    };

int main()
{
    Vector MyMatrix[size];
    cout << "Enter the matrix:" << endl;
    setMatrix(MyMatrix);

    for (int column = 0; column < size; column++)
        {
            MyMatrix[column].ascendingColumnMergeSort(0, size - 1);
        }

    cout<<"Sorted matrix:"<< endl;
    getMatrix(MyMatrix);
    MyMatrix->calculation(MyMatrix);

    return 0;
}



#include <iostream>

using namespace std;

int** declareMatrix(int numRows, int numColumns){
    int **matrix = new int*[numRows];
    for (int i = 0; i < numRows; i++)
    {
        *(matrix + i) = new int[numColumns];
    }
    return matrix;
}

int** sumMatrices(int **matrixA, int **matrixB, int numRows, int numColumns){
    int **resultingMatrix = declareMatrix(numRows, numColumns);
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++){
            int numA = *(*(matrixA + i) + j );
            int numB = *(*(matrixB + i) + j );

            *( *(resultingMatrix + i) + j ) = numA + numB;

        }
    }

    return resultingMatrix;
}
int** transposeMatrix(int **matrix, int numRows, int numColumns){
    int** transposedMatrix = declareMatrix(numColumns, numRows);

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++){
            *(*( transposedMatrix + j) + i) =  *( *(matrix + i) + j );
        }
    }
    
    return transposedMatrix;
}

int** multiplyMatrices(int **matrixA, int **matrixB, int numRows, int numColumns){
    int** result = declareMatrix(numRows, numColumns);

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++){
            *( *(result + i) + j ) = *( *(matrixA + i) + j ) * *( *(matrixB + i) + j );
        }
    }
    
    return result;
}

void fillMatrix(int** matrix, int numRows, int numColumns){
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++){
            cin >> *( *(matrix + i) + j );
        }
    }
}

void printMatrix(int **matrix, int numRows, int numColumns){
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numColumns; j++){
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }
}


void addTwoMatricesInterface(){
    int numColumns = 0;
    int numRows = 0;
    cout << "\n\n What will be the dimensions of the matrices" << endl;

    cout << "Columns: ";
    cin >> numColumns;

    cout << "Rows: ";
    cin >> numRows;

    int** matrixA = declareMatrix(numRows, numColumns); 
    int** matrixB = declareMatrix(numRows, numColumns); 

    cout << "Insert matrix A: " << endl;
    fillMatrix(matrixA, numRows, numColumns);

    cout << "Insert matrix B: " << endl;
    fillMatrix(matrixB, numRows, numColumns);

    int **resultOfSum = sumMatrices(matrixA, matrixB, numRows, numColumns);

    cout << "The result is: " << endl;
    printMatrix(resultOfSum, numRows, numColumns);
}

void findTransposeMatrixInterface(){
    int numColumns = 0;
    int numRows = 0;
    cout << "\n\n What will be the dimensions of the matrix" << endl;

    cout << "Columns: ";
    cin >> numColumns;

    cout << "Rows: ";
    cin >> numRows;

    int **matrix = declareMatrix(numRows, numColumns);
    fillMatrix(matrix, numRows, numColumns);

    int **transposedMatrix = transposeMatrix(matrix, numRows, numColumns); 

    cout << "The transpose is: " << endl;
    printMatrix(transposedMatrix, numColumns, numRows);
}

void multiplyTwoMatricesInterface(){
 
    int columnsA = 0, columnsB = 0, rowsA = 0, rowsB = 0;
    cout << "\n\n What will be the dimensions of the matrices." << endl;
    cout << "You are required to insert two matrices with the same dimensions or in second case two matrices with compatible dimensions." << endl;
    cout << "Two matrices are considered to be compatible when dimensions A == D and B == P in (Axb, PxD)" << endl;

    cout << "InsertDimensions for matrixA: " << endl;
    cout << "Columns: ";
    cin >> columnsA;
    cout << "Rows: ";
    cin >> rowsA;

    int** matrixA = declareMatrix(rowsA, columnsA); 
    cout << "Insert matrix A: " << endl;
    fillMatrix(matrixA, rowsA, columnsA);

    cout << "InsertDimensions for matrixA: " << endl;
    cout << "Columns: ";
    cin >> columnsA;
    cout << "Rows: ";
    cin >> rowsA;

    int** matrixB = declareMatrix(rowsB, columnsB); 
    cout << "Insert matrix B: " << endl;
    fillMatrix(matrixB, rowsB, columnsB);

    if (columnsA == columnsB && rowsA == rowsB){
        int** result = multiplyMatrices(matrixA, matrixB, rowsA, columnsA);
        cout << "The result is: " << endl;
        printMatrix(result, rowsA, columnsA);
    } else if(columnsA == rowsB && columnsB == rowsA){
        cout << "using secondary method inclompleted";
    }

    
}


int main()
{
    
    int selection;

    cout << "\n\nWhat do you want to do? " << endl;
    cout << "1. Add two matrices up" << endl;
    cout << "2. Find the transpose of a matrix" << endl;
    cout << "3. Multiply two matrices" << endl;
    cout << "Enter 0 to exit" << endl;

    while(true){
        cin >> selection;
        switch(selection){
            case 0:
                break;
            case 1:
                addTwoMatricesInterface();
                break;
            case 2:
                findTransposeMatrixInterface();
                break;
            case 3:
                multiplyTwoMatricesInterface();
                break;
            default:
                continue;
        }
        break;
    }

    return 0;
}
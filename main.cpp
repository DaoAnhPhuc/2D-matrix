#include <iostream>
#include <array>

using namespace std;

int main ()
{
    const size_t rows = 4, collums = 4;

    array<array< int, collums >, rows >matrix  ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout << "The matrix in tabular form " << "\n" << endl;

    for ( unsigned int row = 0; row < matrix.size(); ++row)
        {
            for ( unsigned int collum = 0; collum < matrix[row].size(); ++collum )
            {
                cout << matrix[row][collum] << ' ';

                if ( collum % (collums -1) == 0 && collum != 0)
                cout << endl;
            }
        }

    cout << endl;

    //sum of element in each row 
        for ( unsigned int row = 0; row < matrix.size(); ++row)
           {
             for ( unsigned int collum  = 0, sum = 0; collum < matrix[row].size(); ++collum)
                {
                    sum += matrix[row][collum];


                     if ( collum % (collums -1) == 0 && collum != 0)
                        {
                            cout << "Sum of " << row + 1 << " row: " << sum;
                            cout << endl;
                        }
                }
           }
           cout << endl;
        //sum of each collum
           for ( unsigned int collum = 0; collum < collums; ++collum)
           {
             for ( unsigned int row  = 0, sum = 0; row < rows ; ++row)
                {
                    sum += matrix[row][collum];


                     if ( row % (rows -1) == 0 && row != 0)
                        {
                            cout << "Sum of " << collum + 1 << " collum: " << sum;
                            cout << endl;
                        }
                }
           }

           cout << endl;

        //Sum of each diagonal
        for ( int row = 0, collum = 0, sumLeft = 0 ; row < rows, collum < collums; ++row , ++collum)
           {
                 sumLeft += matrix[row][collum];

                 if ( (row % (rows-1) == 0) && (collum % (collums-1) == 0) && (row != 0) && ( collum != 0)) 
                    cout << "Sum of left side diagonal: " << sumLeft << "\n" << endl;
           }
         for ( int row = rows - 1, collum = collums - 1, sumRight = 0 ; row >= 0, collum >= 0; --row , --collum)
           {
                 sumRight += matrix[row][collum];

                 if ( row == 0 && collum ==0) 
                    cout << "Sum of right side diagonal: " << sumRight << "\n" << endl;
           }
 } 
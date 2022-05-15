#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

const string FILENAME_SOURCE = "../lesson_1/task_1/in.txt";
const string FILENAME_TARGET = "../lesson_1/task_1/out.txt";

int* createArray(ifstream& source, int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        source >> arr[i];
    }
    return arr;
}

int* shiftArray(int* arr, int size, int shift)
{
    int* shiftedArr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        int index = (i + shift + size) % size;
        shiftedArr[i] = arr[index];
    }

    delete[] arr;
    return shiftedArr;
}

void writeArrayToFile(ofstream& target, int* arr, int size)
{
    target << size << endl;

    for (int i = 0; i < size; ++i)
    {
        target << arr[i] << " ";
    }
    target << endl;
}


int main()
{
    ifstream source;
    ofstream target;

    source.open(FILENAME_SOURCE);
    int size1 = 0;
    source >> size1;
    int* arr1 = createArray(source, size1);
    int size2 = 0;
    source >> size2;
    int* arr2 = createArray(source, size2);
    source.close();


    arr1 = shiftArray(arr1, size1, 1);
    arr2 = shiftArray(arr2, size2, -1);

    target.open(FILENAME_TARGET);
    writeArrayToFile(target, arr2, size2);
    writeArrayToFile(target, arr1, size1);
    target.close();

    delete [] arr1;
    delete [] arr1;

    return 0;
}
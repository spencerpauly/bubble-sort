#include <iostream>

using namespace std;

//Function Prototypes
void swapSort(int data[], int dataSize);
void printArray(int data[], int dataSize);
void loopData(int seed, int data[], int dataSize);
bool checkArray(int data[], int dataSize);


//Main Function

int main()
{
    //The data you want to sort
    int data[] = {7,1,9,4,2,6,8,9,6,5,3,6,8,5,3,6,4,3,0,7,8,1,3,7,9,0,6,4,3,2};
    int dataSize = 30;

    //Sorting Parent Function
    swapSort(data,dataSize);

    return 0;
}


//Main Sorting Function

void swapSort(int data[], int dataSize) {
    int iterations = 0;
    while (checkArray(data,dataSize) == false) {
         iterations++;
        if (iterations%2 == 0) {
            loopData(0, data, dataSize);
        } else {
            loopData(1, data, dataSize);
        }
    }
    cout << "Total Iterations: " << iterations;
}


//Printing Function to print each iteration

void printArray(int data[], int dataSize) {
    cout << "Array: {";
    for (int i=0 ; i<dataSize; i++) {
        cout << data[i] << ",";
    }
    cout << "}" << endl;
}


//Inner loop that handles each swap of numbers

void loopData(int seed, int data[], int dataSize){
    for (int i=seed;i<dataSize;i++) {
        if (data[i] > data[i+1]) {
            swap(data[i],data[i+1]);
            printArray(data,dataSize);
        }
    }
}


//Check function to determine if the data is fully sorted or not

bool checkArray(int data[], int dataSize) {
    for (int i=0 ; i<dataSize ; i++) {
        if (data[i] > data[i+1]) {
            return false;
        }
    }
    return true;

}

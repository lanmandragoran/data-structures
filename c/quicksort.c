//Sort an array using a simple but inefficient quicksort
#include <stdio.h>
#include <stdlib.h>
#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

int main(int argc, char **argv){
    int* data;
    int dataIndex = 0;

    if(argc != '2'){
        printf("Please input an array as an argument.\n");
    }
    else{
        if(LEN(argv) == 4)
            data = (int *) malloc(2);
        else{
            data = (int *) malloc(LEN(argv)/2);
        }
    }
        for(int i = 0; i < LEN(argv); i++){
            switch((*argv)[i]){
                case ' ':
                    break;
                case '[':
                    break;
                case ']':
                    break;
                case ',':
                    break;
                default: 
                    data[dataIndex] = (*argv[i]) - '0';
                    dataIndex++;
                    break;
        }
    }

int dataLength = sizeof(data)/sizeof(data[0]);;

if(dataLength < 2){
        return data;
}

int pivotIndex = dataLength / 2;
int pivotValue = data[pivotIndex];

int leftCount = 0;

//Count how many are less than the pivot

for(int i = 0; i < dataLength; ++i){
    if(data[i] < pivotValue) ++leftCount;
}

//Allocate the arrays and create the subsets

int* left = (int *)malloc(leftCount);
int* right = (int *)malloc(dataLength - leftCount - 1);

int l = 0;
int r = 0;

for(int i = 0; i < dataLength; ++i){
    if(i == pivotIndex) continue;

    int val = data[i];

    if(val < pivotValue){
        left[l++] = val;
    } else {
        right[r++] = val;
    }
}

//Sort the subsets

left = quicksortSimple(left);
right = quicksortSimple(right);

int leftLength = sizeof(left)/sizeof(left[0]);
int rightLength = sizeof(right)/sizeof(right[0]);

//Combine the sorted arrays and the pivot back into the original array

//System.arraycopy(left, 0, data, 0, leftLength);
//data[leftLength] = pivotValue;
//System.arraycopy(right, 0, data, leftLength + 1, rightLength);

int stepValues = 0;
int leftStep = 0;
int rightStep = 0;
int totalValues = leftLength + rightLength + 1;
int* finalArray = (int *)malloc(totalValues);

while(stepValues < totalValues){
    if(stepValues < leftLength){
        finalArray[stepValues] = 
    }
}



int i = 0;
while(i < dataLength){
    printf("Values in order are: %d \n", data[i]);
    i++;
}

}
#include <iostream>



using namespace std;





int binarySearch(int arr[], int value, int left, int right) {



      while (left <= right) {



            int middle = (left + right) / 2;



            if (arr[middle] == value)



                  return middle;



            else if (arr[middle] > value)



                  right = middle - 1;



            else



                  left = middle + 1;



      }



      return -1;



}









int main()

{

    int arr[9]={7,8,11,13,14,16,19,24,32};

    int arrsize = 9;

    int mini = 0;

    int num_to_find = 13;



    int results = binarySearch(arr,num_to_find,mini,arrsize-1);



    if (results == -1)

        cout<<"Number was not found"<<endl;

    else

        cout<<"Number was found at "<<results<<endl;







    return 0;

}

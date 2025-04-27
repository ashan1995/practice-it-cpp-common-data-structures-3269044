#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string strArray[] = {"apple", "banana", "cherry", "orange"};

    std::cout << findItem(strArray, 3, (string) "banana") << std::endl;
    return 0;
}

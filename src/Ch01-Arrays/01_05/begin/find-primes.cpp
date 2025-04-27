#include <iostream>
#include <vector>

using namespace std;

void isPrime(int number, std::vector<int> &primes)
{
    for (int i = 2; i <= (number * number); i++)
    {
        if (number != i && (number % i) == 0)
        {
            return;
        }
    }
    primes.push_back(number);
}

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    if (size == 0)
        return;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 1)
            continue;
        isPrime(arr[i], primes);
    }
}

int main()
{
    int numbers[] {4, 7, 12, 3, 9, 17, 29};
    
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}

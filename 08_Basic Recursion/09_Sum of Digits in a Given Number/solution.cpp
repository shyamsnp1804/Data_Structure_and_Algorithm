#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Method to compute the sum of digits of given number
  int addDigits(int num)
  {
    // Base case: if the number is a single digit, return it
    if (num < 10)
    {
      return num;
    }

    // Recursive case: sum the digits and continue
    int sum = sumDigits(num);

    return addDigits(sum);
  }

private:
  // Helper function to add the sum of digits recursively
  int sumDigits(int num)
  {
    // Base case: If the number is 0, return 0
    if (num == 0)
      return 0;

    // Recursive case
    return sumDigits(num / 10) + (num % 10);
  }
};

int main()
{
  Solution solution;

  // Example number
  int num = 529;

  // Call the addDigits method and print the result
  int result = solution.addDigits(num);
  std::cout << "Sum of digits: " << result << std::endl;

  return 0;
}
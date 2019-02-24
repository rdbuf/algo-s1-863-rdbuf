/****************************************************************************
Задача 1_1

Найти, на сколько нулей оканчивается n! = 1 * 2 * 3 * … * n.
n <= 1000.

  in  | out
  ----|-----
  25  | 6
****************************************************************************/

#include <iostream>

int main() {
	int n; std::cin >> n;
	int result = 0;
	for (int divisor = 5; divisor <= n; divisor *= 5) {
		result += n / divisor;
	}
	std::cout << result;
}

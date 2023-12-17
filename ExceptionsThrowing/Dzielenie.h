#include <iostream>

class Dzielenie
{
	public:
	int wynik;
	Dzielenie(int a, int b)
	{
		if (b == 0)
		{
			throw std::domain_error("Dzielenie przez zero\n");
		}
		else if (b == 1)
		{
			throw std::domain_error("Dzielenie przez jeden\n");
		}
		wynik = a / b;
	}
	friend std::ostream& operator<<(std::ostream& os, const Dzielenie& dziel) noexcept
	{
		return os << dziel.wynik << '\n';
	}
};
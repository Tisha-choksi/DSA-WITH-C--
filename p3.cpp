#include <iostream>
int main()
{
	int i;
	for(i=65;i<=90;++i)
	{
		std::cout << static_cast<char>(i) << " ";
	}
}
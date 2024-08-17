#include <iostream>
int main()
{
	int i;
	for(i=97;i<=125;++i)
	{
		std::cout << static_cast<char>(i) << " ";
	}
}
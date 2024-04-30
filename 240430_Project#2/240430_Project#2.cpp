#include <iostream>

#define Row 5
#define Column 4

int main()
{
	std::string age;
	

	std::string math[Row][Column] =
	{
		{"이름","나이","국어","수학"},
		{"방지턱","19","66","68"},
		{"정직한","20","73","94"},
		{"김가루","19","58","37"},
		{"조나단","20","82","29"}
	};

		std::cout << "나이를 입력하시오" << std::endl;
		std::cin >> age;

	
	for (int i = 0; i < Row; i++)
	{
		math[i][0];

		for (int j = 0; j < Column; j++)
		{
			std::string score = math[i][j];
			if (score == age)
			{
				std::cout << math[i][0] << ", " << math[i][3] << std::endl;
			}
		}
	}
	
}


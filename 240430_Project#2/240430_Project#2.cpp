#include <iostream>

#define Row 5
#define Column 4

int main()
{
	std::string age;
	

	std::string math[Row][Column] =
	{
		{"�̸�","����","����","����"},
		{"������","19","66","68"},
		{"������","20","73","94"},
		{"�谡��","19","58","37"},
		{"������","20","82","29"}
	};

		std::cout << "���̸� �Է��Ͻÿ�" << std::endl;
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


#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using std::cin;
using std::cout;
using std::string;
using std::ifstream;
using std::getline;

int main()
{
	system("reg add HKCU\Console /v FaceName /t REG_SZ /d \"Lucida Console\" /f");
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	system("color F0");
	system("cls");
	string answer = "";
	cout << "Вас приветствует программа говорун!\nЕсли вы хотите озвучить содержание нужного вами файла, то введите !FILE\nДля выхода введите !EXIT.\n";
	while (true)
	{
		cout << "Введите фразу для озвучки: ";
		getline(cin, answer);
		if (answer == "!EXIT")
		{
			return 0;
		}
		else if (answer == "!FILE")
		{
			string file_name;
			cout << "Расположите нужный вам файл в одной директории(папке) с программой. Название текстового файла должно быть без пробелов!\nВведите имя файла(c расширением, то есть вместо example введите example.txt): ";
			cin >> file_name;
			ifstream file(file_name);
			if (!file.is_open())
			{
				cout << "Что-то пошло не так! Попробуйте еще раз, криворукий мудень.\n";
				continue;
			}
			getline(file, answer);
			

		}
		answer = "speaker.vbs \"" + answer + "\"";
		system(answer.c_str());
	}
}

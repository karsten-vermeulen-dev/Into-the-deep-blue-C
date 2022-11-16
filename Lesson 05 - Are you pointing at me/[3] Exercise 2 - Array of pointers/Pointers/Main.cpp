#include <iostream>
#include <string>

const int maxStudents{ 5 };

struct Student
{
	int age;
	std::string name;
	std::string course;
};

int main()
{
	Student* students[maxStudents];

	for (int i = 0; i < maxStudents; i++)
	{
		students[i] = new Student;

		std::cout << "Enter the details for Student #" << i + 1 << std::endl;
		std::cout << "Enter the age: ";
		std::cin >> students[i]->age;

		std::cin.ignore();
		std::cin.clear();

		std::cout << "Enter the name: ";
		std::getline(std::cin, students[i]->name);

		std::cout << "Enter the course: ";
		std::getline(std::cin, students[i]->course);

		std::cout << std::endl;
	}

	std::cout << "#==================#" << std::endl;
	std::cout << "|   STUDENT DATA   |" << std::endl;
	std::cout << "#==================#" << std::endl;

	for (int i = 0; i < maxStudents; i++)
	{
		std::cout << "| Student #" << i + 1 << "       | " << std::endl;
		std::cout << "|==================|" << std::endl;
		std::cout << "| Name: " << students[i]->name << std::endl;
		std::cout << "| Age: " << students[i]->age << std::endl;
		std::cout << "| Course: " << students[i]->course << std::endl;
		std::cout << "|==================|" << std::endl;
	}

	for (int i = 0; i < maxStudents; i++)
	{
		delete students[i];
	}

	system("pause");
	return 0;
}
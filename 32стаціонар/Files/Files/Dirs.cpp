#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<io.h>
#include<iomanip>

using namespace std;
void FilesDirsRead();

void main()
{
//	system("mkdir test");
	
	//CreateDirectory("D://testLesson", false);
	//CopyFile("D://123.txt", "D://testLesson//newFile5.txt", true);

	//remove("D://123.txt");
	//rename("D://testLesson//newFile5.txt", "D://testLesson//123.txt");



	char path[256];
	cout << "Enter path:\n";
	cin >> path;
	cout << "Mask:\n";
	char mask[30];
	cin >> mask;
	strcat(path, mask);
	_finddata_t *file = new _finddata_t;
	long done = _findfirst(path, file);
	int w = done;
	cout << "W = " << w << endl;
	while (w != -1)
	{
		cout << file->name << endl;// ім'я файлу


		cout << setw(15) << "Attributes: "				// атрибути
			<< (file->attrib & _A_SUBDIR ? "d" : "")
			<< (file->attrib & _A_ARCH ? "a" : "")
			<< (file->attrib & _A_HIDDEN ? "h" : "")
			<< (file->attrib & _A_SYSTEM ? "s" : "")
			<< (file->attrib & _A_RDONLY ? "r" : "")
			<< (file->attrib & _A_NORMAL ? "n" : "")
			<< "\n";

		cout << setw(15) << "Size: "
			<< file->size / 1024.0 << " KB" << "   "
			<< "\n";



		w = _findnext(done, file);
	}
	_findclose(done);
}


void FilesDirsRead()
{
	//----зчитати файли (э можливість задавати маску)
	char **files;
	int counter = 0;
	HANDLE h;
	WIN32_FIND_DATA findData;
	h = FindFirstFile("D://*.*", &findData);
	if (h != 0)
	{
		do
		{
			counter++;

		} while ((FindNextFile(h, &findData)) != 0);
	}
	FindClose(h);

	files = new char*[counter];
	counter = 0;
	h = FindFirstFile("D://*.*", &findData);
	if (h != 0)
	{
		do
		{
			files[counter] = new char[250];
			strcpy(files[counter], findData.cFileName);
			counter++;

		} while ((FindNextFile(h, &findData)) != 0);
	}
	FindClose(h);

	for (size_t i = 0; i < counter; i++)
	{
		cout << i << "  " << files[i] << endl;
	}
	int pos;
	cin >> pos;

	cout << "\n-------------------------------------\n";
	cout << "\n-------------------------------------\n";

	cout << "\n-------------------------------------\n";
	char filePath[250];
	strcpy(filePath, "D://");
	strcat(filePath, files[pos]);
	strcat(filePath, "//*.*");
	cout << filePath << endl;
	h = FindFirstFile(filePath, &findData);
	if (h != 0)
	{
		do
		{
			cout << findData.cFileName << endl;

		} while ((FindNextFile(h, &findData)) != 0);
	}
	FindClose(h);
}
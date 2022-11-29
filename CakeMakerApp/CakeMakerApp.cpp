#include <iostream>
#include <string>
#include<windows.h>
#include"CommandPanel.h"
using namespace std;

int main()
{
	cout << "\n\t-Bun venit in aplicatia CakeMaker-" << endl << endl;
	cout << endl << "Asteptati 3 secunde pana sa intrati in lista de optiuni!";
	Sleep(3000);
	system("CLS");
	string name;
	CommandPanel commandPanel;
	int opt,cate;
	do {
		cout << "\t\t-Lista de optiuni-\t\t" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "1.Lista de prajituri pe care putem sa o oferim." << endl;
		cout << "2.Daca doriti sa comandati o singura prajitura." << endl;
		cout << "3.Daca doriti sa comandati mai multe prajituri." << endl;
		cout << "4.Lista de prajituri pe care le avem in stoc in acest moment." << endl;
		cout << "0.Doresc sa parasesc programul." << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Ce optiune doriti sa alegeti? - " ;
		cin >> opt;
		cout << endl;
		system("CLS");
		switch (opt)
		{
		case 1:
			commandPanel.showProducts(); 
			cout << endl << "Asteptati 3 secunde pana sa reveniti inapoi in lista de optiuni!";
			Sleep(3000);
			system("CLS");
			break;
		case 2:
			
			cout << "Ce prajitura ati dori sa comandati? - ";
			cin >> name;
			commandPanel.selectProduct(name);
			cout << endl << "Asteptati 3 secunde pana sa reveniti inapoi in lista de optiuni!";
			Sleep(3000);
			system("CLS");
			break;
		case 3:
			cout << "Ce prajitura ati dori sa comandati? - ";
			cin >> name;
			cout << "Cate "<<name<<"uri doriti? - ";
			cin >> cate;
			commandPanel.selectProductMultiple(name, cate);
			cout << endl << "Asteptati 3 secunde pana sa reveniti inapoi in lista de optiuni!";
			Sleep(3000);
			system("CLS");
			break;
		case 4:
			commandPanel.showProductsInCarousel();
			cout << endl << "Asteptati 3 secunde pana sa reveniti inapoi in lista de optiuni!";
			Sleep(3000);
			system("CLS");
			break;
		case 0:
			system("CLS");
			cout << endl << "\n\t-Va multumim ca ati folosit aplicatia CakeMaker!- ";
			Sleep(3000);
			exit(0);
			break;
		default:
			cout << "Ati introdus optiunea gresit!" << endl;
			cout <<endl << "Asteptati 3 secunde pana sa reveniti inapoi in lista de optiuni!";
			Sleep(3000);
			system("CLS");
			break;
		}

	} while (opt);
	return 0;
}

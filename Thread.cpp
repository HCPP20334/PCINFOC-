 #include <iostream> // ТОП библиотека
#include <windows.h> // ahaahahah
#include <clocale> //  Rus_Lang
#include <string>  // string
#include <fstream> // file read /edit 
#include <conio.h>  // console input / output

using namespace std; // 
int main() {
	char  log , gf; // переменные char
	int button , g , i , who; // переменные int
	string line; // переменная string
	setlocale (LC_ALL , "rus") ; // руссификация консоли. Язык русский
	system ("title Threads v 1.0.8"); // загаловок в консоли
	system ("color a"); // цвет консоли
	cout << " " << endl;
	cout << "Build 1.0.8                      Hackerman_20334"<< endl;
cout << "________________________________________________________________________________" << endl; // вывод. Меню
cout << "                                Test [1]" << endl; // вывод. Меню
cout << "________________________________________________________________________________" << endl;
//int ch = _getch();  //  неизпользуемая часть кода
//system ("cls");    //  неизпользуемая часть кода
//switch (ch) {     //  неизпользуемая часть кода
//	case 0:        //  неизпользуемая часть кода
int ch = _getch(); // переменная ch  равна _getch();
	system ("color a"); // цвет консоли
	ch =   _getch(); // переменная ch  равна _getch();
	switch (ch) {    // обработка значении в переменной ch
		case 49:     // значение 49 проверка
			if (ch == 49) // если ch равна 49
			system ("cls"); // очистка консоли 	
		 cout << "Testing... " << endl;
		 int err = 0;
cout << "_______________________________TEST_CPU________________________________________" << endl; // вывод 

system ("color a"); // цвет консоли

		cout << "Thread_CPU " << endl; // вывод 
		system ("WMIC CPU Get DeviceID,NumberOfCores,NumberOfLogicalProcessors");
cout << "________________________________________________________________________________" << endl;
	cout <<"Идёт подчёт оперативной памяти.." << endl;
		Sleep (6200);
		system ("cls");
cout << "__________________________________RAM___________________________________________" << endl; // вывод 
		cout << "RAM " << endl; // вывод 
	    cout << "" << endl;
	    cout << "Объём памяти       Количество слотов" << endl;
	    system ("wmic memorychip get devicelocator, capacity");// вывод 
 cout << "________________________________________________________________________________" << endl;
 Sleep(6300);
 system ("cls");
 cout << "_________________________________GPU____________________________________________" << endl;
	    cout << "GPU" << endl;
	    cout <<"Название видеоадаптера" << endl;
	    system ("wmic path win32_VideoController get name ");
 cout << "________________________________________________________________________________" << endl;
        cout <<" dev_errors =" << err << endl;
	    cout << "exit (Выход)[Esc]" << endl;
	    cout <<"Donate(задонатить) [space]" << endl;
	    ch =   _getch(); // переменная ch  равна _getch();
	switch (ch) {    // обработка значении в переменной ch
		case 32:     // значение 49 проверка
			if (ch == 32) // если ch равна 491
			system ("start msedge sberbank.ua");
		case 27:	
			system ("cls"); // очистка консоли
cout << "_______________________________EXIT_____________________________________________" << endl; // вывод 	    

	   cout << "EXIT = 1\a" << endl;
	    return 0;
        case 50:
        	system ("color a");
        	system ("cls");// очистка консоли
        }
cout << "_______________________________________________________________________________" << endl;
 	
   
 };
 int err;
 system("cls");
 cout << "dev_error= 1" << endl;
cout << "_______________________________________________________________________________" << endl;
system("color 4f");
 cout << ">>Error_Indefication " << "Hash = 0x0000"<<ch << endl;
 system ("echo Error = 0x0004f %time%  >> log.txt"); // 0x0004f error regestrashion button
 cout <<"Code_Error = 0x0004f" << endl;
 {
 
 if (ch > 49)
 if (ch < 49)
 err = 1;
}
 cout << "" << endl;
 cout << "_______________________________________________________________________________" << endl;
 cout <<"info to error 0x0004f[enter]" << endl;
 ch = _getch();
 if (ch == 13)
 	MessageBox(NULL, " Ошибка регистрации кнопки (error register button )","Thread",NULL|NULL);
 Sleep (1300);
ch = _getch();
switch (ch) {
case 13:
cout << "Exit = true" << endl;
}

return 0;
//
//
//
//
}

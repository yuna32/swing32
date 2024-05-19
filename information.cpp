#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Information {
private:
    string name;
    string phone;

public:
    void set(const string& username, const string& userphone) {
        name = username;
        phone = userphone;
    }

    void print() const {
        cout << "이름: " << name << endl;
        cout << "전화번호: " << phone << std::endl;
    }

    bool check(const string& username, const string& userphone) const {
        if (name == username && phone == userphone) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    vector<Information> infolist;
    string name, phone;
    int number;
    while (true) {
        cout << "***** SWING 회원 정보 관리 프로그램 *****" << endl;
        cout << "1. 회원가입" << endl;
        cout << "2. 로그인" << endl;
        cout << "3. 회원 정보 수정" << endl;
        cout << "4. 종료" << endl;
        cout << "번호를 입력하세요:";
        cin >> number;
        cout << endl;
        cout << endl;

        if (number == 1) {
            cout << "***** 회원가입을 진행합니다 *****";
            cout << endl;
            cout << "이름을 입력하세요: ";
            cin >> name;
            cout << endl;
            cout << "전화번호를 입력하세요: ";
            cin >> phone;
            cout << endl;
            cout << endl;

            bool alreadyRegistered = false;
            for (auto& info : infolist) {
                if (info.check(name, phone)) {
                    alreadyRegistered = true;
                    break;
                }
            }
            if (alreadyRegistered) {
                cout << endl;
                cout << "이미 등록된 정보입니다." << endl;
                cout << endl;
            }

            else {
                Information info;
                info.set(name, phone);
                infolist.push_back(info);

                cout << "회원가입이 완료되었습니다." << endl;
                cout << endl;
            }
        }

        else if (number == 2) {
            cout << "***** 로그인을 진행합니다 *****";
            cout << endl;
            cout << "이름을 입력하세요: ";
            cin >> name;
            cout << endl;
            cout << "전화번호를 입력하세요: ";
            cin >> phone;
            for (auto& info : infolist) {
                if (info.check(name, phone)) {
                    cout << endl;
                    cout << "로그인이 완료되었습니다." << endl;
                    cout << endl;
                    cout << "*** SWING" << name << "님을 응원합니다. ***" << endl;
                    cout << endl;
                    continue;
                }
                else {
                    cout << endl;
                    cout << "회원 정보가 일치하지 않습니다." << endl;
                    cout << endl;
                }

            }

        }

        else if (number == 3) {
            cout << "***** 회원 정보 수정을 진행합니다 *****";
            cout << endl;
            cout << "이름을 입력하세요: ";
            cin >> name;
            cout << endl;
            cout << "전화번호를 입력하세요: ";
            cin >> phone;
            cout << endl;

            bool alreadyRegistered = false;
            for (auto it = infolist.begin(); it != infolist.end(); ++it) {
                if (it->check(name, phone)) {
                    alreadyRegistered = true;
                    string new_name, new_phone;
                    cout << "이름: ";
                    cin >> new_name;
                    cout << endl;
                    cout << "전화번호: ";
                    cin >> new_phone;
                    it = infolist.erase(it);
                    cout << endl;

                    Information info;
                    info.set(new_name, new_phone);
                    infolist.insert(it, info);
                }
                break;
            }
            if (!alreadyRegistered) {
                cout << endl;
                cout << "회원 정보가 일치하지 않습니다." << endl;
                cout << endl;
            }
        }

        else if (number == 4) {
            cout << endl;
            cout << "SWING 회원 정보 관리 프로그램을 종료합니다." << endl;
            break;
        }

        else if (number != 1 && number != 2 && number != 3 && number != 4) {
            cout << endl;
            cout << "정확한 번호를 입력해주세요." << endl;
            cout << endl;
        }
    }

    return 0;
}

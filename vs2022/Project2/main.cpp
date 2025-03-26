#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 定义联系人信息结构
struct PersInfo {
    string name;
    string gender;
    int age;
    string phoneNumber;
    string address;
};

// 定义通讯录类
class Contact {
private:
    vector<PersInfo> contacts; // 使用 vector 存储联系人信息

public:
    // 初始化通讯录
    void init() {
        contacts.clear();
    }

    // 添加联系人
    void addContact() {
        PersInfo info;
        cout << "要存储的联系人姓名是：";
        cin >> info.name;
        cout << "要存储的联系人性别是：";
        cin >> info.gender;
        cout << "要存储的联系人年龄是：";
        cin >> info.age;
        cout << "要存储的联系人电话是：";
        cin >> info.phoneNumber;
        cout << "要存储的联系人地址是：";
        cin >> info.address;
        contacts.push_back(info);
    }

    // 显示所有联系人
    void showContacts() {
        cout << "姓名\t性别\t年龄\t电话\t地址" << endl;
        for (const auto& contact : contacts) {
            cout << contact.name << "\t"
                << contact.gender << "\t"
                << contact.age << "\t"
                << contact.phoneNumber << "\t"
                << contact.address << endl;
        }
    }

    // 根据姓名查找联系人
    int findByName(const string& name) {
        for (int i = 0; i < contacts.size(); ++i) {
            if (contacts[i].name == name) {
                return i;
            }
        }
        return -1;
    }

    // 删除联系人
    void DeleteContact() {
        string name;
        cout << "请输入删除联系人的姓名：";
        cin >> name;
        int find = findByName(name);
        if (find == -1) {
            cout << "没有对应的联系人" << endl;
        }
        else {
            contacts.erase(contacts.begin() + find);
            cout << "删除成功！" << endl;
        }
    }

    // 修改联系人信息
    void ModifyContact() {
        string name;
        cout << "想要修改的联系人是：";
        cin >> name;
        int index = findByName(name);
        if (index == -1) {
            cout << "该联系人不存在" << endl;
        }
        else {
            cout << "要修改的联系人姓名是：";
            cin >> contacts[index].name;
            cout << "要修改的联系人性别是：";
            cin >> contacts[index].gender;
            cout << "要修改的联系人年龄是：";
            cin >> contacts[index].age;
            cout << "要修改的联系人电话是：";
            cin >> contacts[index].phoneNumber;
            cout << "要修改的联系人地址是：";
            cin >> contacts[index].address;
            cout << "修改成功！" << endl;
        }
    }

    // 查找联系人
    void findContact() {
        string name;
        cout << "想要查找的联系人是：";
        cin >> name;
        int index = findByName(name);
        if (index == -1) {
            cout << "该联系人不存在" << endl;
        }
        else {
            cout << "姓名\t性别\t年龄\t电话\t地址" << endl;
            cout << contacts[index].name << "\t"
                << contacts[index].gender << "\t"
                << contacts[index].age << "\t"
                << contacts[index].phoneNumber << "\t"
                << contacts[index].address << endl;
        }
    }
};

int main() {
    Contact myContact;
    myContact.init(); // 初始化
    myContact.addContact(); // 添加联系人
    myContact.showContacts(); // 显示所有联系人
    myContact.findContact(); // 查找联系人
    myContact.DeleteContact(); // 删除联系人
    myContact.ModifyContact(); // 修改联系人信息

    return 0;
}
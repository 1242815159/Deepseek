#include<iostream>
#include<ctime>
#include<random>
#include<windows.h>
#include<random>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL)); 
    std::string inputMessage; 
    std::cout << "请输入想要查询的文本\n"; 
    cin >> inputMessage; 
    Sleep(900); 
    cout << "Deepseek.exe正在向Deepseek服务器申请权限中...\n"; 
    int randomSleepTime; 
    randomSleepTime = (rand() % ( 20000 - 1000 + 1 ) ) + 100;
    Sleep(randomSleepTime); 
    cout << "权限请求成功！Deekseep正在思考中\n"; 
    cout << "[x]10%/100%\n"; 
    Sleep(1000); 
    cout << "[xxx]25%/100%\n"; 
    Sleep(2500); 
    cout << "[xxxx]40%/100%\n"; 
    Sleep(1000); 
    cout << "[xxxxxxx]70%/100%\n"; 
    Sleep(3000); 
    cout << "[xxxxxxxxx]95%/100%\n"; 
    Sleep(4000); 
    cout << "[xxxxxxxxxx]100%/100%\n"; 
    Sleep(2000); 
    cout << "服务器繁忙，请稍后再试\n"; 
    cout << "Press Enter to continue"; 
    system("pause"); 
    return 0; 
}
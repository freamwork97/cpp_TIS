#include <cstring>
#include <iostream>

const int NAME_LEN = 20;      // 고객 이름 길이
const int MAX_CUS_NUM = 100;  // 최대 고객 수

void ShowMenu(void);        // 메뉴 출력
void MakeAccount(void);     // 계좌 생성
void DepositMoney(void);    // 입금
void WithdrawMoney(void);   // 출금
void ShowAllAccInfo(void);  // 모든 계좌 정보 출력

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

typedef struct {           // 구조체 이름 생략 가능
  int accID;               // 계좌 번호
  int balance;             // 잔액
  char cusName[NAME_LEN];  // 고객 이름
} ACCOUNT;

ACCOUNT account[MAX_CUS_NUM];  // 계좌 처리
int accNum = 0;                // 계좌 인덱스

int main(void) {
  int choice;

  while (1) {
    ShowMenu();
    std::cout << "choice: ";
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice) {
      case MAKE:
        MakeAccount();
        break;
      case DEPOSIT:
        DepositMoney();
        break;
      case WITHDRAW:
        WithdrawMoney();
        break;
      case INQUIRE:
        ShowAllAccInfo();
        break;
      case EXIT:
        return 0;
      default:
        std::cout << "Invalid input." << std::endl;
        break;
    }
  }
  system("pause");
  return 0;
}

void ShowMenu(void) {
  std::cout << std::endl;
  std::cout << "--------Menu------------" << std::endl;
  std::cout << "1. MakeAccount" << std::endl;
  std::cout << "2. DepositMoney" << std::endl;
  std::cout << "3. WithdrawMoney" << std::endl;
  std::cout << "4. ShowAllAccInfo" << std::endl;
  std::cout << "5. EXIT" << std::endl;
  std::cout << std::endl;
}

void MakeAccount(void) {
  std::cout << std::endl;
  std::cout << "MakeAccount" << std::endl;
  std::cout << "Account ID: ";
  std::cin >> account[accNum].accID;
  std::cout << "Name: ";
  std::cin >> account[accNum].cusName;
  std::cout << "DepositMoney: ";
  std::cin >> account[accNum].balance;

  accNum++;
}

void DepositMoney(void) {
  int id, money;
  std::cout << std::endl;
  std::cout << "[DepositMoney]" << std::endl;
  std::cout << "Account ID: ";
  std::cin >> id;

  for (int i = 0; i < accNum; i++) {
    std::cout << "DepositMoney: ";
    std::cin >> money;
    account[i].balance += money;
    std::cout << "Deposit completed" << std::endl;
    return;
  }
  std::cout << "Invalid input." << std::endl;
}

void WithdrawMoney(void) {
  int id, money;

  std::cout << std::endl;
  std::cout << "[WithdrawMoney]" << std::endl;
  std::cout << "Account ID: ";
  std::cin >> id;

  for (int i = 0; i < accNum; i++) {
    if (account[i].accID == id) {
      std::cout << "WithdrawMoney: ";
      std::cin >> money;
      if (account[i].balance < money) {
        std::cout << "a lack of balance" << std::endl;
        return;
      } else {
        account[i].balance -= money;
        std::cout << "Withdrawal completed" << std::endl;
        return;
      }
    }
  }
  std::cout << "Invalid input." << std::endl;
}

void ShowAllAccInfo(void) {
  std::cout << std::endl;
  std::cout << "[Account information]" << std::endl;

  for (int i = 0; i < accNum; i++) {
    std::cout << "Account ID: " << account[i].accID << std::endl;
    std::cout << "Name: " << account[i].cusName << std::endl;
    std::cout << "balance: " << account[i].balance << std::endl;
  }
}
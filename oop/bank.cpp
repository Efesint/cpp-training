#include <iostream>
#include <string>

class BankAccount {
// private: - все, что ниже, скрыто от внешнего мира.
// Доступно только методам самого класса.
private:
    std::string owner_name;   // Имя владельца
    double balance;           // Баланс. Нельзя просто так изменить снаружи!
    int account_id;

    // Приватный метод для внутренней проверки
    bool is_amount_valid(double amount) {
        return amount > 0;
    }

// public: - публичный интерфейс, "API" нашего класса.
public:
    // Конструктор: создает ОБЪЕКТ в памяти и инициализирует его.
    // Это именно то место, где мы работаем с "кучей или стеком", о чем говорили ранее.
    BankAccount(std::string name, int id) 
        : owner_name(name), account_id(id), balance(0.0) 
    {
        std::cout << "Счет для " << owner_name << " создан. Баланс: " << balance << std::endl;
    }

    // Метод для пополнения счета. Контролируемый доступ к изменению баланса.
    bool deposit(double amount) {
        if (is_amount_valid(amount)) {
            balance += amount;
            std::cout << "Пополнение на " << amount << ". Текущий баланс: " << balance << std::endl;
            return true; // Успех
        } else {
            std::cout << "Ошибка: сумма пополнения должна быть положительной!" << std::endl;
            return false; // Провал
        }
    }

    // Метод для снятия денег. Гарантирует, что мы не уйдем в минус.
    bool withdraw(double amount) {
        if (is_amount_valid(amount) && amount <= balance) {
            balance -= amount;
            std::cout << "Снятие " << amount << ". Текущий баланс: " << balance << std::endl;
            return true;
        } else {
            std::cout << "Ошибка: недостаточно средств или неверная сумма!" << std::endl;
            return false;
        }
    }

    // Геттер (getter) — метод для чтения приватных данных.
    double get_balance() const { // const означает: "Я гарантирую, что не изменю объект"
        return balance;
    }
};

int main() {
    // Создаем объект account1 в стеке. 
    // Это как наш stack_var из прошлых примеров, только сложный тип.
    BankAccount account1("Alice", 1001);

    // Работаем с объектом только через публичный интерфейс
    account1.deposit(500);
    account1.withdraw(200);
    
    // Прямой доступ к приватным полям ЗАПРЕЩЕН! Раскомментируй — будет ошибка компиляции.
    // account1.balance = 1000000; // Ошибка! balance is private.
    
    // Прочитать баланс можем только через геттер
    std::cout << "Баланс Алисы через геттер: " << account1.get_balance() << std::endl;

    return 0;
} // Деструктор account1 вызовется автоматически, объект в стеке корректно умрет.

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Movement {
private:
    float speed; // Поле 1: Скорость движения (м/cек)
    int time;    // Поле 2: Время движения в минутах

public:
    // Конструктор для инициализации объекта
    Movement(float s, int t) : speed(s), time(t) {}

    // Функция формирования строки с информацией об объекте
    string getInfo() {
        ostringstream oss;
        oss << "Скорость: " << speed << " м/c, Время: " << time << " мин";
        return oss.str();
    }

    // Функция обработки значений полей
    float calculateDistance() {
        // Пройденное расстояние = Скорость * Время
        return speed * (time * 60); // Перевод времени из минут в секунды
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    float speed;
    int time;

    cout << "Введите скорость движения (м/cек): ";
    cin >> speed;
    cout << "Введите время движения (в минутах): ";
    cin >> time;

    // Создание объекта класса Movement
    Movement movement(speed, time);

    // Вывод информации об объекте
    cout << "Информация о движении: " << movement.getInfo() << endl;

    // Вычисление и вывод пройденного расстояния
    cout << "Пройденное расстояние: " << movement.calculateDistance() << " м" << endl;

    return 0;
}
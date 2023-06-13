#include <iostream>

int main()
{
    float num1, num2;
    char op;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o operador (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    float resultado;
    bool erro = false;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "Erro: divisão por zero não é permitida." << std::endl;
                erro = true;
            }
            break;
        default:
            std::cout << "Operador inválido." << std::endl;
            erro = true;
            break;
    }

    if (!erro) {
        std::cout << "Resultado: " << resultado << std::endl;
    }

    return 0;
}
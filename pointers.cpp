#include <iostream>

int main() {
    // 1. Declaração e inicialização de uma variável inteira
    int numero = 42;
    std::cout << "Valor inicial de numero: " << numero << std::endl;

    // 2. Declaração de um ponteiro para inteiro
    int* ptrNumero = &numero;  // ptrNumero recebe o endereço de 'numero'
    std::cout << "Endereço de numero (&numero): " << &numero << std::endl;
    std::cout << "Valor armazenado no ponteiro (ptrNumero): " << ptrNumero << std::endl;

    // 3. Acessando o valor de 'numero' através do ponteiro
    std::cout << "Valor apontado por ptrNumero (*ptrNumero): " << *ptrNumero << std::endl;

    // 4. Modificando a variável 'numero' usando o ponteiro
    *ptrNumero = 100;  // Altera o valor de 'numero' usando o ponteiro
    std::cout << "Novo valor de numero após modificação via ponteiro: " << numero << std::endl;

    // 5. Ponteiro apontando para outra variável
    int outroNumero = 25;
    ptrNumero = &outroNumero;  // Agora o ponteiro aponta para 'outroNumero'
    std::cout << "\nPonteiro redirecionado para outra variável" << std::endl;
    std::cout << "Endereço de outroNumero (&outroNumero): " << &outroNumero << std::endl;
    std::cout << "Valor apontado por ptrNumero (*ptrNumero): " << *ptrNumero << std::endl;

    // 6. Criando um ponteiro nulo (não aponta para nada)
    int* ponteiroNulo = nullptr;
    if (ponteiroNulo == nullptr) {
        std::cout << "\nO ponteiro está nulo e não aponta para nenhuma variável." << std::endl;
    }

    // 7. Alocação dinâmica de memória
    int* ptrDinamico = new int(55);  // Aloca memória dinamicamente e atribui o valor 55
    std::cout << "\nValor alocado dinamicamente: " << *ptrDinamico << std::endl;
    delete ptrDinamico;  // Libera a memória alocada
    ptrDinamico = nullptr;  // Evita ponteiros pendentes

    std::cout << "Memória dinâmica liberada com sucesso.\n" << std::endl;

    return 0;
}

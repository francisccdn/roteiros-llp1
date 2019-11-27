#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data hoje;

    hoje.setData(13,11,2019);
    cout << "hoje: " << hoje.getDia() << '/' << hoje.getMes() << '/' << hoje.getAno() << endl;

    hoje.avancaDia();
    cout << "amanha: " << hoje.getDia() << '/' << hoje.getMes() << '/' << hoje.getAno() << endl;

    return 0;
}

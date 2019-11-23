#ifndef DATA_H
#define DATA_H

class Data
{
  public:
    Data();
    Data(int d, int m, int a);

    int getDia();
    int getMes();
    int getAno();
    void setData(int d, int m, int a);

    void avancaDia();

  private:
    int dia, mes, ano;
};


#endif //DATA_H

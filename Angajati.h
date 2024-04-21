#ifndef POO_ANGAJATI_H
#define POO_ANGAJATI_H
#include <string>
#include <iostream>

class Angajati {
    private:
    std::string nume;
    std::string prenume;
    int salariu;
    std::string functie;
public:
    explicit Angajati(const std::string &n="", const std::string &pre="", int sal=0, const std::string &func="");
    virtual ~Angajati();
    Angajati(const Angajati &aux);
    virtual void DetaliiRol();
    bool operator==(const Angajati &angajat) const;
    bool operator!=(const Angajati &angajat) const;
    friend std::ostream &operator<<(std::ostream &out, const Angajati &angajat);
    friend std::istream &operator>>(std::istream &ci, Angajati &angajat);
    int getSalariu() const;

};


#endif

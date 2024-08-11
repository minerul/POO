#include <iostream>
#include <ostream>
#include <vector>
#include <string>

using namespace std;


class contract {
public:
    contract() : id(next_id++) {}

    contract(string nume, string cif)
            : id(++next_id),
              nume(nume),
              CIF(cif) {}

    int get_id() const {
        return id;
    }

    void set_id(int n) {
        id = n;
    }

    string get_nume() const {
        return nume;
    }

    void set_nume(string n) {
        nume = n;
    }

    string get_cif() const {
        return CIF;
    }

    void set_cif(string s) {
        CIF = s;
    }

    int get_nr_tronson() const {
        return nr_tronson;
    }

    void set_nr_tronson(int nr_tronson) {
        this->nr_tronson = nr_tronson;
    }

    friend std::ostream &operator<<(std::ostream &os, const contract &obj) {
        return os
                << "\nId: " << obj.id
                << "\nNume: " << obj.nume
                << "\nCIF: " << obj.CIF << "\n";
    }

    friend std::istream &operator>>(std::istream &is, contract &obj) {
        cout << "Nume:";
        is >> obj.nume;
        cout << "CIF:";
        is >> obj.CIF;
        return is;
    }

private:
    int id, nr_tronson;
    static int next_id;
    string nume, CIF;

};

int contract::next_id = 1;

class drum {
public:
    drum() {}

    drum(int lungime, int nr_tronsoane, string denumire)
            : lungime(lungime),
              nr_tronsoane(nr_tronsoane),
              denumire(denumire) {}

    friend std::ostream &operator<<(std::ostream &os, const drum &obj) {
        return os
                << "\nLungime: " << obj.lungime
                << "\nNr_tronsoane: " << obj.nr_tronsoane
                << "\ndenumire: " << obj.denumire;
    }

    friend std::istream &operator>>(std::istream &is, drum &dr) {
        cout << "Introduceti denumirea drumului: ";
        is >> dr.denumire;
        cout << "Introduceti lungimea drumului (km): ";
        is >> dr.lungime;
        cout << "Introduceti numarul de tronsoane: ";
        is >> dr.nr_tronsoane;
        return is;
    }

    int get_lungime() const {
        return lungime;
    }

    void set_lungime(int lungime) {
        this->lungime = lungime;
    }

    int get_nr_tronsoane() const {
        return nr_tronsoane;
    }

    void set_nr_tronsoane(int nr_tronsoane) {
        this->nr_tronsoane = nr_tronsoane;
    }

    string get_denumire() const {
        return denumire;
    }

    void set_denumire(string denumire) {
        this->denumire = denumire;
    }

    virtual void adauga_contract(const contract &c);

    virtual void afisare_drum() const;

protected:
    int lungime, nr_tronsoane;
    string denumire;
    vector<contract> contracte;
};

void drum::adauga_contract(const contract &c) {
    contracte.push_back(c);
}

void drum::afisare_drum() const {
    cout << "Nume drum: " << this->denumire << "Lungime: " << this->lungime << "Nr tronsoane: " << this->nr_tronsoane;
    for (const auto &c: contracte) {
        cout << " " << c;
    }
}


class drum_national : public drum {
public:
    virtual ~drum_national() = default;

    drum_national() {}

    explicit drum_national(int nr_judete)
            : nr_judete(nr_judete) {
    }

    drum_national(int lungime, int nr_tronsoane, string denumire, int nr_judete)
            : drum(lungime, nr_tronsoane, denumire),
              nr_judete(nr_judete) {
    }

    friend std::ostream &operator<<(std::ostream &os, const drum_national &obj) {
        return os
                << static_cast<const drum &>(obj)
                << "\nr_judete: " << obj.nr_judete;
    }

    friend std::istream &operator>>(std::istream &is, drum_national &dr) {
        cout << "\nIntroduceti denumirea drumului:";
        is >> dr.denumire;
        cout << "Introduceti lungimea drumului (km):";
        is >> dr.lungime;
        cout << "Introduceti numarul de tronsoane:";
        is >> dr.nr_tronsoane;
        cout << "Introduceti numarul de judete:";
        is >> dr.nr_judete;
        return is;
    }

    void afisare_drum() const override;

private:
    int nr_judete;
};

void drum_national::afisare_drum() const {
    cout << "\nNume drum: " << this->denumire << "\nLungime: " << this->lungime << "\nNr tronsoane: "
         << this->nr_tronsoane << "\nNr judete: " << this->nr_judete;
    for (const auto &c: contracte) {
        cout << " " << c;
    }

}


class drum_european : public drum {
public:
    explicit drum_european(int nr_tari)
            : nr_tari(nr_tari) {
    }

    drum_european() {}

    drum_european(int lungime, int nr_tronsoane, string denumire, int nr_tari)
            : drum(lungime, nr_tronsoane, denumire),
              nr_tari(nr_tari) {
    }

    friend std::ostream &operator<<(std::ostream &os, const drum_european &obj) {
        return os
                << static_cast<const drum &>(obj)
                << " nr_tari: " << obj.nr_tari;
    }

    friend std::istream &operator>>(std::istream &is, drum_european &dr) {
        cout << "\nIntroduceti denumirea drumului:";
        is >> dr.denumire;
        cout << "Introduceti lungimea drumului (km):";
        is >> dr.lungime;
        cout << "Introduceti numarul de tronsoane:";
        is >> dr.nr_tronsoane;
        cout << "Introduceti nr. tari:";
        is >> dr.nr_tari;
        return is;
    }

    int get_nr_tari() const {
        return nr_tari;
    }

    void set_nr_tari(int nr_tari) {
        this->nr_tari = nr_tari;
    }

    void afisare_drum() const override;

protected:
    int nr_tari;
};

void drum_european::afisare_drum() const {
    cout << "\nNume drum: " << this->denumire << "\nLungime: " << this->lungime << "\nNr tronsoane: "
         << this->nr_tronsoane << "\nNr tari: " << this->nr_tari;
    for (const auto &c: contracte) {
        cout << " " << c;
    }
}

class autostrada : public drum {
public:
    explicit autostrada(int nr_benzi)
            : nr_benzi(nr_benzi) {
    }

    autostrada() {}

    autostrada(int lungime, int nr_tronsoane, string denumire, int nr_benzi)
            : drum(lungime, nr_tronsoane, denumire),
              nr_benzi(nr_benzi) {
    }

    friend std::ostream &operator<<(std::ostream &os, const autostrada &obj) {
        return os
                << static_cast<const drum &>(obj)
                << "\nNr_benzi: " << obj.nr_benzi;
    }

    friend std::istream &operator>>(std::istream &is, autostrada &obj) {
        cout << "\nIntroduceti denumirea drumului:";
        is >> obj.denumire;
        cout << "Introduceti lungimea drumului (km):";
        is >> obj.lungime;
        cout << "Introduceti numarul de tronsoane:";
        is >> obj.nr_tronsoane;
        cout << "Introduceti nr. tari:";
        is >> obj.nr_benzi;
        return is;
    }

    void afisare_drum() const override;

protected:
    int nr_benzi;
};

void autostrada::afisare_drum() const {
    cout << "\nNume drum: " << this->denumire << "\nLungime: " << this->lungime << "\nNr tronsoane: "
         << this->nr_tronsoane << "\nNr tari: " << this->nr_benzi;
    for (const auto &c: contracte) {
        cout << " " << c;
    }
}


class autostrada_europeana : public autostrada {
public:
    friend ostream &operator<<(ostream &os, const autostrada_europeana &obj) {
        return os
                << static_cast<const autostrada &>(obj)
                << " nr_tari: " << obj.nr_tari;
    }

    friend istream &operator>>(istream &is, autostrada_europeana &obj) {
        cout << "\nIntroduceti denumirea drumului:";
        is >> obj.denumire;
        cout << "Introduceti lungimea drumului (km):";
        is >> obj.lungime;
        cout << "Introduceti numarul de tronsoane:";
        is >> obj.nr_tronsoane;
        cout << "Introduceti nr. tari:";
        is >> obj.nr_tari;
        cout << "Introduceti nr. benzi: ";
        is >> obj.nr_benzi;
        return is;
    }

    void afisare_drum() const override;

private:
    int nr_tari;
};

void autostrada_europeana::afisare_drum() const {
    cout << "\nNume drum: " << this->denumire << "\nLungime: " << this->lungime << "\nNr tronsoane: "
         << this->nr_tronsoane << "\nNr benzi: " << this->nr_benzi << "\nNr. tari: " << this->nr_tari;
    for (const auto &c: contracte) {
        cout << " " << c;
    }
}


int main() {
    vector<drum_national> drumuri_nationale;
    vector<drum_european> drumuri_europene;
    vector<autostrada> autostrazi;
    vector<autostrada_europeana> autostrazi_europene;
    int n;
    while (n != 3) {
        cout << "1.Drum nou\n2.Afisare drumuri\n3.Exit\n";
        cin >> n;
        if (n == 1) {
            int n2;
            cout << "1.Drum national\n2.Drum european\n3.Autostrada\n4.Autostrada europeana\n";
            cin >> n2;
            if (n2 == 1) {
                drum_national d;
                cin >> d;
                for (int i = 0; i < d.get_nr_tronsoane(); ++i) {
                    contract c;
                    cin >> c;
                    c.set_nr_tronson(i);
                    d.adauga_contract(c);
                }
                drumuri_nationale.push_back(d);
            }
            if (n2 == 2) {
                drum_european d;
                cin >> d;
                for (int i = 0; i < d.get_nr_tronsoane(); ++i) {
                    contract c;
                    cin >> c;
                    c.set_nr_tronson(i);
                    d.adauga_contract(c);
                }
                drumuri_europene.push_back(d);
            }
            if (n2 == 3) {
                autostrada d;
                cin >> d;
                for (int i = 0; i < d.get_nr_tronsoane(); ++i) {
                    contract c;
                    cin >> c;
                    c.set_nr_tronson(i);
                    d.adauga_contract(c);
                }
                autostrazi.push_back(d);
            }
            if (n2 == 4) {
                autostrada_europeana d;
                cin >> d;
                for (int i = 0; i < d.get_nr_tronsoane(); ++i) {
                    contract c;
                    cin >> c;
                    c.set_nr_tronson(i);
                    d.adauga_contract(c);
                }
                autostrazi_europene.push_back(d);
            }

        } else if (n == 2) {
            for (const auto &d: drumuri_nationale) {
                d.afisare_drum();
            }
            for (const auto &d: drumuri_europene) {
                d.afisare_drum();
            }
            for (const auto &d: autostrazi) {
                d.afisare_drum();
            }
            for (const auto &d: autostrazi_europene) {
                d.afisare_drum();
            }
        }
    }
    // drum_national d;
    // cin >> d;
    // d.afisare_drum();
    // cout << d;
    // contract c, c2;
    // cin >> c;
    // cout << c;
    // cin >> c2;
    // cout << c2;
    // d.adauga_contract(c);
    // d.adauga_contract(c2);
    // d.afisare_drum();
    return 0;
}
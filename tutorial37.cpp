// Hybrid Inheritance
#include <iostream>
using namespace std;

class LivingBeings
{
public:
    LivingBeings() {}
    LivingBeings(int lId)
    {
        int typesOfOrgaisms = 2;
    }
    void LivingBeingsDisplay()
    {
        cout << "This is the Base Class: " << endl;
        cout << "The characteristics of the Living Beings are: " << endl;
        cout << "They respire, grow, live" << endl;
    }

public:
    ~LivingBeings() {}
};

class Animal : public LivingBeings
{
public:
    int noOfLegs, avgLifeSpan;
    string modeOfFood[20], name[20]; // classified as Herbivorous, Carnivorous, Omnivorous
    Animal() {}
    Animal(int id)
    {
        id = 101;
    }
    void animalDisplay()
    {
        cout << "The characteristics of the animal are: " << endl;
        cout << "They are mobile" << endl;
        cout << "They can eat, perform all basic functions " << endl;
    }

public:
    ~Animal() {}
};

class HumanBeings : public Animal
{
public:
    HumanBeings() {}
    HumanBeings(int hbId)
    {
        noOfLegs = 2;
        avgLifeSpan = 80;
        modeOfFood[20] = "Omnivorous";
        name[10] = "Lisa";
    }
    void displayHumans()
    {
        cout << "This is the list of the Human-Beings: " << endl;
        cout << "The characteristics they possess are: " << endl;
        cout << "The number of legs : " << noOfLegs << endl;
        cout << "The average Kife Span of Human Beings : " << avgLifeSpan << endl;
        cout << "The mood Of Food is: " << modeOfFood << endl;
        cout << "The First Human Name exixted : " << name << endl;
    }

public:
    ~HumanBeings() {}
};

class Plants : public LivingBeings
{
public:
    int noOfEmbryo;
    string typesOfLeaves[10], typesOfRoots[10], typesOfVegitation[20];
    Plants() {}
    Plants(int pId)
    {
        pId = 201;
    }
    void plantsDisplay()
    {
        cout << "The characteristics of the plants are: " << endl;
        cout << "They release Oxygen during Photosynthesis reaction" << endl;
        cout << "They produce fruits" << endl;
    }

public:
    ~Plants() {}
};

class BanyanTree : public Plants
{
public:
    BanyanTree() {}
    BanyanTree(int plantId)
    {
        noOfEmbryo = 2;
        typesOfLeaves[10] = "Large";
        typesOfRoots[10] = "Fiberous";
        typesOfVegitation[10] = "Tropical";
    }
    void banyanTreeDisplay()
    {
        cout << "This is the list of the plants: " << endl;
        cout << "The characteristics they possess are: " << endl;
        cout << "The number of Embryo : " << noOfEmbryo << endl;
        cout << "The types of Leaves : " << typesOfLeaves << endl;
        cout << "The types of roots : " << typesOfRoots << endl;
        cout << "The types of vegitation they inhabit : " << typesOfVegitation << endl;
    }

public:
    ~BanyanTree() {}
};

int main()
{
    LivingBeings lb;
    lb.LivingBeingsDisplay();
    cout << endl;

    Animal an;
    an.animalDisplay();
    cout << endl;

    Plants pt;
    pt.plantsDisplay();
    cout << endl;

    HumanBeings hb;
    hb.displayHumans();
    cout << endl;

    BanyanTree bt;
    bt.banyanTreeDisplay();
    cout << endl;

    return 0;
}
#include "Cercle.h"
#include "Point.h"
#include <iostream>

int main() {
    // Création dynamique de deux points
    Point* p1 = new Point(3.0, 4.0);
    Point* p2 = new Point(6.0, 8.0);

    // Affichage des points
    std::cout << "Point 1:" << std::endl;
    p1->afficher();
    std::cout << "Point 2:" << std::endl;
    p2->afficher();

    // Calcul et affichage de la distance entre les deux points
    std::cout << "Distance entre Point 1 et Point 2: " << p1->distance(*p2) << std::endl;

    // Création dynamique de deux cercles avec les points créés dynamiquement
    Cercle* c1 = new Cercle(1, 5.0, *p1);
    Cercle* c2 = new Cercle(2, 5.0, *p2);

    // Affichage des cercles
    std::cout << "\nCercle 1:" << std::endl;
    c1->afficher();
    std::cout << "Cercle 2:" << std::endl;
    c2->afficher();

    // Test d'égalité entre les deux cercles
    if (c1->Egalit(*c2)) {
        std::cout << "Les cercles sont egaux." << std::endl;
    }
    else {
        std::cout << "Les cercles sont differents." << std::endl;
    }

    // Calcul et affichage des surfaces et périmètres des cercles
    std::cout << "Surface de Cercle 1: " << c1->Surface() << std::endl;
    std::cout << "Perimetre de Cercle 1: " << c1->Perimetre() << std::endl;

    std::cout << "Surface de Cercle 2: " << c2->Surface() << std::endl;
    std::cout << "Perimetre de Cercle 2: " << c2->Perimetre() << std::endl;

    // Test si un point appartient au cercle
    if (c1->apartient(*p2)) {
        std::cout << "Le point 2 appartient au Cercle 1." << std::endl;
    }
    else {
        std::cout << "Le point 2 n appartient pas au Cercle 1." << std::endl;
    }

    // Modifier le rayon du premier cercle
    c1->Modifier(7.0);
    std::cout << "\nApres modification du rayon de Cercle 1:" << std::endl;
    c1->afficher();

    // Libérer la mémoire allouée pour les cercles et les points
    delete c1;
    delete c2;
    delete p1;
    delete p2;

    return 0;
}

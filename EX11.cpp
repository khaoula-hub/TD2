#include<iostream>
using namespace std;
class personne{
    private:
    float x;
    float y;
    float z;
    public:
    vecteur3d(x,y,z);
    void afficher();
    float somme(const Vecteur3D& autre);
    float produit(const Vecteur3D& autre);
    void coincide(const Vecteur3D& autre);
    float norme(x,y,z);
    float normax(const Vecteur3D& autre);
};
vecteur3d::vecteur3d(x,y,z){
    this->x=x;
    this->y=y;
    this->z=z;
}
float vecteur3d::somme(const Vecteur3D& autre){
    return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
}
float vecteur3d::produit(const Vecteur3D& autre){
    return Vecteur3D(x * autre.x, y * autre.y, z * autre.z);
}
float vecteur3d::coincide(const Vecteur3D& autre){
    if(x=x.autre && y=y.autre && z=z.autre){
        cout<<"les deux vecteurs se coincident"<<endl;
    }
    else{
        cout<<"les deux vecteurs ne se coincident pas"<<endl;
    }
}
float vecteur3d:: norme(x,y,z){
    return(sqrt(x*x+y*y+z*z));
}
float vecteur3d::normax(const Vecteur3D& autre){
    if(norme(x,y,z)>norme(x.autre,y.autre,z.autre)){
        cout<<"la norme maximale est celui du vecteur 1"
    }
    else{
        cout<<"la norme maximale est celui du vecteur 2"
    }
}
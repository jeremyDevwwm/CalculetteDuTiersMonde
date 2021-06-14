//
//  main.cpp
//  CalculetteTiersMonde
//
//  Created by Dijoux Jérémy on 14/06/2021.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double num1;
    double num2;
    int choice;
    bool calcLoop (true);
    
    do {
        
        cout << "Veuillez selectionner un operateur : \n";
        cout << "Pour l'addition : tapez 1\n" << "Pour la multiplication : tapez 2\n" << "Pour la soustraction : Tapez 3\n" << "Pour la division : Tapez 4\n";
        cin >> choice;
        if(choice >= 1 && choice <= 4){
            switch (choice) {
                case 1:
                    cout << "Vous avez choisi l'addition \n";
                    cout << "Veuillez entrer un premier nombre \n";
                    cin >> num1;
                    cout << "Veuillez entrer un deuxième nombre \n";
                    cin >> num2;
                    cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
                    break;
                case 2:
                    cout << "Vous avez choisi la multiplication \n";
                    cout << "Veuillez entrer un premier nombre \n";
                    cin >> num1;
                    cout << "Veuillez entrer un deuxième nombre \n";
                    cin >> num2;
                    cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
                    break;
                case 3:
                    cout << "Vous avez choisi la soustraction \n";
                    cout << "Veuillez entrer un premier nombre \n";
                    cin >> num1;
                    cout << "Veuillez entrer un deuxième nombre \n";
                    cin >> num2;
                    
                        if(num1<=num2){
                        cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
                        } else {
                        cout << num2 << " - " << num1 << " = " << num1 - num2 <<endl;
                        }
                    break;
                    
                    case 4:
                        cout << "Vous avez choisi la division \n";
                        cout << "Veuillez entrer un premier nombre \n";
                        cin >> num1;
                        cout << "Veuillez entrer un deuxième nombre \n";
                        cin >> num2;
                    
                        if(num2 == 0){
                            cout << "Division par 0 impossible, veuillez entrer à nouveau votre deuxième nombre \n";
                            cin >> num2;
                            cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
                        } else {
                            cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
                            
                        }
                        
                    break;
                default:
                    cout << "Vous avez rentre des donnees incorrectes";
                    break;
            }
            
            cout << "Souhaitez-vous effectuer une autre opération ? \n";
            cout << "1 - Oui \n";
            cout << "2 - Non \n";
            cin >> choice;
            
            if (choice == 2){
                calcLoop = false;
            }
        } else {
            cout << "Veuillez entrer un nombre parmi les choix proposés : \n";
            cout << "Pour l'addition : tapez 1\n" << "Pour la multiplication : tapez 2\n" << "Pour la soustraction : Tapez 3\n" << "Pour la division : Tapez 4\n";
            cin >> choice;
        }
        
    } while(calcLoop);
    
    return 0;
}

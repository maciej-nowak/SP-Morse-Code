#include "coding.hpp"
#include "decoding.hpp"
#include "music.hpp"
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    int codeDecode, inputConsoleFile, outputConsoleFile;
    char pathToFile[256], pathToSaveFile[256];
    string text, music;
    cout<<"Kodowanie: 1"<<endl<<"Dekodowanie: 2"<<endl;
    cin>>codeDecode;

//------------------------------------------------------------------------------------------
//CODING

    if(codeDecode==1)
    {
        system("CLS");
        cout<<"Tekst z konsoli: 1"<<endl<<"Tekst z pliku: 2"<<endl;
        cin>>inputConsoleFile;

        //INPUT FROM CONSOLE--------------------------------------------------------------------

        if(inputConsoleFile==1)
        {
            system("CLS");
            cout<<"Kod do konsoli: 1"<<endl<<"Kod do pliku: 2"<<endl;
            cin>>outputConsoleFile;

            system("CLS");
            cout<<"Podaj tekst:"<<endl;
            cin.ignore();
            getline(cin,text);

            //OUTPUT TO CONSOLE-------------------------------------------------------------

            if(outputConsoleFile==1)
            {
                system("CLS");
                cout<<"Odkodowany tekst:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<text<<endl<<endl;
                cout<<"Zakodowany tekst:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<code(text)<<endl<<endl<<endl;
                music=code(text);
                listen(music);
            }

            //OUTPUT TO FILE----------------------------------------------------------------

            if(outputConsoleFile==2)
            {

                system("CLS");
                cout<<"Podaj sciezke do zapisania pliku:"<<endl;
                cin.getline(pathToSaveFile,256);
                ofstream outputFile;
                outputFile.open(pathToSaveFile);
                if(outputFile.good())
                {
                    outputFile<<code(text);
                    cout<<endl<<"Plik zostal zapisany"<<endl<<endl;
                }
                else cout<<"Blad plikow"<<endl<<endl;
                outputFile.close();
            }

        }

        //INPUT FROM FILE--------------------------------------------------------------------

        if(inputConsoleFile==2)
        {
            system("CLS");
            cout<<"Kod do konsoli: 1"<<endl<<"Kod do pliku: 2"<<endl;
            cin>>outputConsoleFile;
            system("CLS");
            cout<<"Podaj sciezke do wczytania pliku:"<<endl;
            cin.ignore();
            cin.getline(pathToFile,256);
            ifstream inputFile;
            inputFile.open(pathToFile);
            system("CLS");

            //OUTPUT TO CONSOLE--------------------------------------------------------------

            if(inputFile.good())
            {

                if(outputConsoleFile==1)
                {
                    cout<<"Odkodowany tekst:"<<endl;
                    cout<<"-------------------------------------------------------"<<endl<<endl;
                    while(!inputFile.eof())
                    {
                        getline(inputFile,text);
                        cout<<text<<endl;
                    }
                    cout<<endl<<endl;
                    inputFile.close();

                    inputFile.open(pathToFile);
                    if(inputFile.good())
                    {
                        cout<<"Zakodowany tekst:"<<endl;
                        cout<<"-------------------------------------------------------"<<endl<<endl;
                        while(!inputFile.eof())
                        {
                            getline(inputFile,text);
                            cout<<code(text)<<endl;
                            music=code(text);
                            listen(music);
                        }
                        cout<<endl<<endl;
                    }
                    else cout<<"Blad plikow"<<endl<<endl;
                    inputFile.close();
                }


                //OUTPUT TO FILE------------------------------------------------------------------

                if(outputConsoleFile==2)
                {
                    system("CLS");
                    cout<<"Podaj sciezke do zapisania pliku:"<<endl;
                    cin.getline(pathToSaveFile,256);
                    ofstream outputFile;
                    outputFile.open(pathToSaveFile);

                    if(outputFile.good())
                    {
                        while(!inputFile.eof())
                        {
                            getline(inputFile,text);
                            outputFile<<code(text)<<endl;
                        }
                        cout<<endl<<"Plik zostal zapisany"<<endl<<endl;
                    }
                    else cout<<"Blad plikow"<<endl<<endl;
                    outputFile.close();

                }
            }
            else cout<<"Blad plikow"<<endl<<endl;
            inputFile.close();
        }
    }

//-------------------------------------------------------------------------------------------
//DECODING

    if(codeDecode==2)
    {
        system("CLS");
        cout<<"Kod z konsoli: 1"<<endl<<"Kod z pliku: 2"<<endl;
        cin>>inputConsoleFile;

        //INPUT FROM CONSOLE-----------------------------------------------------------------

        if(inputConsoleFile==1)
        {
            system("CLS");
            cout<<"Tekst do konsoli: 1"<<endl<<"Tekst do pliku: 2"<<endl;
            cin>>outputConsoleFile;

            system("CLS");
            cout<<"Podaj kod:"<<endl;
            cin.ignore();
            getline(cin,text);

            //OUTPUT TO CONSOLE---------------------------------------------------------------

            if(outputConsoleFile==1)
            {
                system("CLS");
                cout<<"Zakodowany tekst:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<text<<endl<<endl;
                cout<<"Odkodowany tekst:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<decode(text)<<endl<<endl<<endl;
            }

            //OUTPUT TO FILE--------------------------------------------------------------------

            if(outputConsoleFile==2)
            {
                system("CLS");
                cout<<"Podaj sciezke do zapisania pliku:"<<endl;
                cin.getline(pathToSaveFile,256);
                ofstream outputFile;
                outputFile.open(pathToSaveFile);
                if(outputFile.good())
                {
                    outputFile<<decode(text);
                    cout<<endl<<"Plik zostal zapisany"<<endl<<endl;
                }
                else cout<<"Blad plikow"<<endl<<endl;
                outputFile.close();
            }

        }

        //INPUT FROM FILE------------------------------------------------------------------------

        if(inputConsoleFile==2)
        {
            system("CLS");
            cout<<"Tekst do konsoli: 1"<<endl<<"Tekst do pliku: 2"<<endl;
            cin>>outputConsoleFile;
            system("CLS");
            cout<<"Podaj sciezke do wczytania pliku:"<<endl;
            cin.ignore();
            cin.getline(pathToFile,256);
            ifstream inputFile;
            inputFile.open(pathToFile);


            //OUTPUT TO CONSOLE-------------------------------------------------------------------

            if(inputFile.good())
            {

                if(outputConsoleFile==1)
                {
                    cout<<"Zakodowany tekst:"<<endl;
                    cout<<"-------------------------------------------------------"<<endl<<endl;
                    while(!inputFile.eof())
                    {
                        getline(inputFile,text);
                        cout<<text<<endl;
                    }
                    cout<<endl<<endl;
                    inputFile.close();

                    inputFile.open(pathToFile);
                    if(inputFile.good())
                    {
                        cout<<"Odkodowany tekst:"<<endl;
                        cout<<"-------------------------------------------------------"<<endl<<endl;
                        while(!inputFile.eof())
                        {
                            getline(inputFile,text);
                            cout<<decode(text)<<endl;
                        }
                        cout<<endl<<endl;
                    }

                    inputFile.close();
                }
                else cout<<"Blad plikow"<<endl<<endl;

                //OUTPUT TO FILE---------------------------------------------------------------------

                if(outputConsoleFile==2)
                {
                    system("CLS");
                    cout<<"Podaj sciezke do zapisania pliku:"<<endl;
                    cin.getline(pathToSaveFile,256);
                    ofstream outputFile;
                    outputFile.open(pathToSaveFile);

                    if(outputFile.good())
                    {
                        while(!inputFile.eof())
                        {
                            getline(inputFile,text);
                            outputFile<<decode(text)<<endl;
                        }
                        cout<<endl<<"Plik zostal zapisany"<<endl<<endl<<endl;
                    }
                    else cout<<"Blad plikow"<<endl<<endl;
                    outputFile.close();
                }
            }
            else cout<<"Blad plikow"<<endl<<endl;
            inputFile.close();
        }
    }
    return 0;
}

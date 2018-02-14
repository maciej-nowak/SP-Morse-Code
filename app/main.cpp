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
    cout<<"Coding: 1"<<endl<<"Decoding: 2"<<endl;
    cin>>codeDecode;

//------------------------------------------------------------------------------------------
//CODING

    if(codeDecode==1)
    {
        system("CLS");
        cout<<"Text from console: 1"<<endl<<"Tekst from file: 2"<<endl;
        cin>>inputConsoleFile;

        //INPUT FROM CONSOLE--------------------------------------------------------------------

        if(inputConsoleFile==1)
        {
            system("CLS");
            cout<<"Code to console: 1"<<endl<<"Code to file: 2"<<endl;
            cin>>outputConsoleFile;

            system("CLS");
            cout<<"Enter text:"<<endl;
            cin.ignore();
            getline(cin,text);

            //OUTPUT TO CONSOLE-------------------------------------------------------------

            if(outputConsoleFile==1)
            {
                system("CLS");
                cout<<"Text decoded:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<text<<endl<<endl;
                cout<<"Text coded:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<code(text)<<endl<<endl<<endl;
                music=code(text);
                listen(music);
            }

            //OUTPUT TO FILE----------------------------------------------------------------

            if(outputConsoleFile==2)
            {

                system("CLS");
                cout<<"Enter the path to save file:"<<endl;
                cin.getline(pathToSaveFile,256);
                ofstream outputFile;
                outputFile.open(pathToSaveFile);
                if(outputFile.good())
                {
                    outputFile<<code(text);
                    cout<<endl<<"File has been save"<<endl<<endl;
                }
                else cout<<"Error file"<<endl<<endl;
                outputFile.close();
            }

        }

        //INPUT FROM FILE--------------------------------------------------------------------

        if(inputConsoleFile==2)
        {
            system("CLS");
            cout<<"Code to console: 1"<<endl<<"Code to file: 2"<<endl;
            cin>>outputConsoleFile;
            system("CLS");
            cout<<"Enter the path to read file:"<<endl;
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
                    cout<<"Text decoded:"<<endl;
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
                        cout<<"Text coded:"<<endl;
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
                    else cout<<"Error file"<<endl<<endl;
                    inputFile.close();
                }


                //OUTPUT TO FILE------------------------------------------------------------------

                if(outputConsoleFile==2)
                {
                    system("CLS");
                    cout<<"Enter the path to save file:"<<endl;
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
                        cout<<endl<<"File has been save"<<endl<<endl;
                    }
                    else cout<<"Error file"<<endl<<endl;
                    outputFile.close();

                }
            }
            else cout<<"Error file"<<endl<<endl;
            inputFile.close();
        }
    }

//-------------------------------------------------------------------------------------------
//DECODING

    if(codeDecode==2)
    {
        system("CLS");
        cout<<"Code from console: 1"<<endl<<"Code from file: 2"<<endl;
        cin>>inputConsoleFile;

        //INPUT FROM CONSOLE-----------------------------------------------------------------

        if(inputConsoleFile==1)
        {
            system("CLS");
            cout<<"Text to console: 1"<<endl<<"Text to file: 2"<<endl;
            cin>>outputConsoleFile;

            system("CLS");
            cout<<"Enter the code:"<<endl;
            cin.ignore();
            getline(cin,text);

            //OUTPUT TO CONSOLE---------------------------------------------------------------

            if(outputConsoleFile==1)
            {
                system("CLS");
                cout<<"Text coded:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<text<<endl<<endl;
                cout<<"Text decoded:"<<endl;
                cout<<"-------------------------------------------------------"<<endl<<endl;
                cout<<decode(text)<<endl<<endl<<endl;
            }

            //OUTPUT TO FILE--------------------------------------------------------------------

            if(outputConsoleFile==2)
            {
                system("CLS");
                cout<<"Enter the path to save file:"<<endl;
                cin.getline(pathToSaveFile,256);
                ofstream outputFile;
                outputFile.open(pathToSaveFile);
                if(outputFile.good())
                {
                    outputFile<<decode(text);
                    cout<<endl<<"File has been save"<<endl<<endl;
                }
                else cout<<"Error file"<<endl<<endl;
                outputFile.close();
            }

        }

        //INPUT FROM FILE------------------------------------------------------------------------

        if(inputConsoleFile==2)
        {
            system("CLS");
            cout<<"Text to console: 1"<<endl<<"Text to file: 2"<<endl;
            cin>>outputConsoleFile;
            system("CLS");
            cout<<"Enter the path to read file:"<<endl;
            cin.ignore();
            cin.getline(pathToFile,256);
            ifstream inputFile;
            inputFile.open(pathToFile);


            //OUTPUT TO CONSOLE-------------------------------------------------------------------

            if(inputFile.good())
            {

                if(outputConsoleFile==1)
                {
                    cout<<"Text coded:"<<endl;
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
                        cout<<"Text decoded:"<<endl;
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
                else cout<<"Error file"<<endl<<endl;

                //OUTPUT TO FILE---------------------------------------------------------------------

                if(outputConsoleFile==2)
                {
                    system("CLS");
                    cout<<"Enter the path to save file:"<<endl;
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
                        cout<<endl<<"File has been save"<<endl<<endl<<endl;
                    }
                    else cout<<"Error file"<<endl<<endl;
                    outputFile.close();
                }
            }
            else cout<<"Error file"<<endl<<endl;
            inputFile.close();
        }
    }
    return 0;
}

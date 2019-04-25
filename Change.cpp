//
//  Change.cpp
//  BDGONDON
//
//  Created by Никита on 08/01/2019.
//  Copyright © 2019 Никита. All rights reserved.
//

#include "Header.h"

int Change(){
    string s;
    int i = 1;
    ifstream ifs;
    ifs.open("/home/nikita/Документы/2Nelidov/BD/data.txt");
    
    for(ifs >> s; !ifs.eof(); ifs >> s) {
        cout << i << ". "<< s << endl;
        i++;
    }
    ifs.clear();
    ifs.seekg(0, ios_base::beg);
    string New_Str;
    cout <<"Выберите номер изменяемой записи: "<< endl;
    cin >> i;
    cout <<"Выберите новую строку: "<< endl;
    cin >> New_Str;
    int Str_nowfff = 0;
    string str;
    string text;
    while(getline(ifs, str))
    {
        Str_nowfff++;
        if(!(Str_nowfff == i))
        {
            text.insert(text.size(), str);
            text.insert(text.size(), "\n");
        }
        else {
            text.insert(text.size(), New_Str);
            text.insert(text.size(), "\n");
        }
    }
    ifs.close();
    ofstream ofs;
    cout << text;
    ofs.open(("/home/nikita/Документы/2Nelidov/BD/data.txt"));
    ofs << text;
    ofs.close();
    ifs.open("/home/nikita/Документы/2Nelidov/BD/data.txt");
    Str_nowfff = 0;
    ifs.seekg(0, ios_base::beg);
    while(getline(ifs, str))
    {
        
        Str_nowfff++;
        if(!(Str_nowfff == i))
        {
        }
        else {
            cout <<"Строка "<< str << " Вставлена правильно"<<endl;

        }
    }
    return 0;
}

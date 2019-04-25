//
//  Delete.cpp
//  BDGONDON
//
//  Created by Никита on 08/01/2019.
//  Copyright © 2019 Никита. All rights reserved.
//

#include "Header.h"

int Delete(){
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
    cout <<"Выберите номер удаляемой записи: "<< endl;
    cin >> i;
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
        
    }
    
    ifs.close();
    ofstream ofs;
    ofs.open(("/home/nikita/Документы/2Nelidov/BD/data.txt"));
    ofs << text;
    ofs.close();
    main();
    return 0;
}

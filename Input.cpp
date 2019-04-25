//
//  Input.cpp
//  BDGONDON
//
//  Created by Никита on 08/01/2019.
//  Copyright © 2019 Никита. All rights reserved.
//

#include "Header.h"
#include "tc.h"

int Input() {
    club club1;
    ofstream ofs;
    ofs.open("/home/nikita/Документы/2Nelidov/BD/data.txt", std::ios::app);
    if (!ofs)
    {
        cout << "Файл не открыт\n\n";
        return -1;
    }
    else
    {
        cout << "Введите имя: "<< endl;
        cin >> club1.name;
        cout << "Введите модель: " << endl;
        cin >> club1.model;
        cout << "Введите стаж: " << endl;
        cin >> club1.stage;
        ofs << club1.name <<"\n"<< club1.model<<"\n" << club1.stage<<"\n";
        ofs.close();
        main();
    }
    return 0;
}

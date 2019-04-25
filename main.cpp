//
//  main.cpp
//  bd
//
//  Created by Никита on 07/01/2019.
//  Copyright © 2019 Никита. All rights reserved.
//

#include "Header.h"
#include "DeleteH.h"
#include "ChangeH.h"
//#define CATCH_CONFIG_MAIN

int main() {
    int perehod;
    cout << "1.Запись\n" << "2.Изменение\n" << "3.Удаление\n"<< endl;
    cin >> perehod;
    switch (perehod) { 
        case 1:
            Input();
            break;
        case 2:
            Change();
            main();
            break;
        case 3:
            Delete();
            break;
        default:
            break;
    }
    return 0;
}



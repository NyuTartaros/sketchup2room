//
//  FileFunctionsWin.cpp
//  sketchup2room
//
//  Created by Lisa Croxford on 22/04/2014.
//  Copyright (c) 2014 Lisa Croxford. All rights reserved.
//

#include "stdafx.h"


string currentDir() {
	char buffer[500];
	GetCurrentDirectoryA(500,buffer);
	return buffer;
}

void makeDir(string dir) {
	CreateDirectoryA(dir.c_str(),NULL);
}


bool fileExists(const string& file)
{
    WIN32_FIND_DATAA FindFileData;
    HANDLE handle = FindFirstFileA(file.c_str(), &FindFileData) ;
    int found = handle != INVALID_HANDLE_VALUE;
    if(found)
    {
        FindClose(handle);
        return true;
    }
    return false;
}
#ifndef _VARIO_TOOL_H
#define _VARIO_TOOL_H

#include <SD.h>
#include <ArduinoJson.h>

#define RL_MAX_CHARS 128

class VarioTool
{
public:
    static void appendChar(char *s, char c);
    static boolean readLines(File *file, char *line);
    static void deleteRecursive(const char *path);
    static StaticJsonDocument<4096> jsonDoc;
};

#endif //_VARIO_TOOL_H
#ifndef VARIOWEBSERVER_H
#define VARIOWEBSERVER_H

//#include <HardwareConfig.h>

#include <WebServer.h>

#define FILE_MAX_NAME 50

class VarioWebServer : public WebServer
{
#define STREAMFILE_BUFSIZE 1024

public:
    VarioWebServer(IPAddress addr, int port = 80);
    VarioWebServer(int port = 80);

    //virtual ~VarioWebServer();

    template <typename T>
    size_t streamFile(T &file, const String &contentType)
    {
        _streamFileCore(file.size(), file.name(), contentType);

        uint8_t *buf = (uint8_t *)malloc(STREAMFILE_BUFSIZE);
        if (buf == NULL)
        {
            return 0;
        }
        size_t fsize = 0;
        while (file.available())
        {
            int got = file.read(buf, STREAMFILE_BUFSIZE);
            _currentClient.write(buf, got);
            fsize += got;
            yield();
        }

        return fsize;
    }
};

#endif //VARIOWEBSERVER
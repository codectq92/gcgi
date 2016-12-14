/*
*gcgi for google OSC
*caotaiqiang@gmail.com
*2016.12.14
*/

//enviroment variables associated with the request
char* cgiRequestMethod;
char* cgiQuaryString;
char* cgiContentLength;
char* cgiContentType;
char* cgiContentFile;
char* cgiPathInfo;
char* cgiPathTranslated;
char* cgiScriptName;

//enviroment variables associated with the server
char* cgiGatewayInterface;
char* cgiServerName;
char* cgiServerPort;
char* cgiServerSoftware;
char* cgiServerProtocal;

//enviroment variables associated with the client
char* cgiRemoteAddr;
char* cgiRemoteHost;
char* cgiAccept;
char* cgiAcceptEncoding;
char* cgiAcceptLanguage;
char* cgiAuthorization;
char* cgiForm;
char* cgiIfModifiedSingce;
char* cgiUserAgent;
char* cgiRefferer;

static void cgiGetenv(char **s, char *var);

int main(int argc, char *argv[])
{
//get enviroment variables associated with the server
    cgiGetenv(&cgiRequestMethod, "REQUEST_NAME");
    cgiGetenv(&cgiQuaryString, "QUARY_STRING");
    cgiGetenv(&cgiContentLength, "CONTENT_LENGTH");
    cgiGetenv(&cgiContentType, "CONTENT_TYPE");
    cgiGetenv(&cgiContentFile, "CONTENT_FILE");
    cgiGetenv(&cgiPathInfo, "PATH_INFO");
    cgiGetenv(&cgiPathTranslated, "PATH_TRANSLATED");
    cgiGetenv(&cgiScriptName, "SCRIPT_NAME");
//get enviroment variables associated with the client
    cgiGetenv(&cgiGatewayInterface, "GATEWAY_INTERFACE");
    cgiGetenv(&cgiServerPort, "SERVER_PORT");
    cgiGetenv(&cgiServerSoftware, "SERVER_SOFTWARE");
    cgiGetenv(&cgiServerName, "SERVER_NAME");
    cgiGetenv(&cgiServerProtocal, "SERVER_PROTOCAL");
//get enviroment variables associated with the client
    cgiGetenv(&cgiRemoteAddr, "REMOTE_ADDR");
    cgiGetenv(&cgiRemoteHost, "REMOTE_HOST");
    cgiGetenv(&cgiAccept, "ACCEPT");
    cgiGetenv(&cgiAcceptEncoding, "ACCEPT_ENCODING");
    cgiGetenv(&cgiAcceptLanguage, "ACCEPT_LANGUAGE");
    cgiGetenv(&cgiAuthorization, "AUTHORIZATION");
    cgiGetenv(&cgiForm,"FORM");
    cgiGetenv(&cgiIfModifiedSingce, "IF_MODIFIEDD_SINGCE");
    cgiGetenv(&cgiUserAgent, "USER_AGENT");
    cgiGetenv(&cgiReferrer, "REFFERER");


}

static void cgiGetenv(char **s, char *var)
{
    *s = getenv(var);
    if (!(*s))
    {
        *s = "";
    }
}

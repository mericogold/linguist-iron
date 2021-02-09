class CAddrInfo : public CAddress
{

public:
    READWRITE(*(CAddress*)this);
    READWRITE(source);
    
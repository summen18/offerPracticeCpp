#include <cstring>
#include <cstdio>

class CMystring
{
public:
    CMystring(char *pData = NULL);
    CMystring(const CMystring& str);
    ~CMystring(void);

    CMystring& operator = (const CMystring& str);
    void Print();
private:
    char * m_pData;
};

CMystring::CMystring(char* pData)
{
    if (pData == NULL)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int length = strlen(pData);
        m_pData = new char[length+1];
        strcpy(m_pData,pData);
    }
}

CMystring::CMystring(const CMystring &str)
{
    int length = strlen(str.m_pData);
    m_pData = new char[length+1];
    strcpy(m_pData, str.m_pData);
}

/*
 * Copyright (C) wenjie.zhao
 */


#ifndef MHTTPHEADER_HPP
#define MHTTPHEADER_HPP

#include <MString>
#include <list>
#include <set>
#include <map>

/*!
    HTTP MIME type

    ���ı���������ı�          .html,.html text/html
    ��ͨ�ı�                   .txt text/plain
    RTF�ı�                   .rtf application/rtf
    GIFͼ��                   .gif image/gif
    JPEGͼ��                  .ipeg,.jpg image/jpeg
    au�����ļ�                 .au audio/basic
    MIDI�����ļ�               .mid,.midi audio/midi,audio/x-midi
    RealAudio�����ļ�          .ra, .ram audio/x-pn-realaudio
    MPEG�ļ�                  .mpg,.mpeg video/mpeg
    AVI�ļ�                   .avi video/x-msvideo
    GZIP�ļ�                  .gz application/x-gzip
    TAR�ļ�                   .tar application/x-tar
*/

class MHttpHeader
{
public:
    MHttpHeader();

    void addValue(const MString &key, const MString &value);
    void removeValue(const MString &key);

    virtual int majorVersion() const = 0;
    virtual int minorVersion() const = 0;

    virtual MString toString() const;
    MString value(const MString &key) const;

    void setContentLength(int len);
    void setContentType(const MString &type);
    void setHost(const MString &host, int port);
    void setServer(const MString &server);
    void setConnectionClose();
    void setConnectionKeepAlive();
    void setDate();
    void setContent(const MString &content);
    void appendContent(const MString &append);

    static MString contentType(const MString &fileType);

protected:
    int m_majorVersion;
    int m_minorVersion;
    static map<MString, MString> m_mime;
    MString m_content;

private:
    list<pair<MString, MString> > m_header;
    map<MString, int> m_headerIndex;
};

#endif // MHTTPHEADER_HPP

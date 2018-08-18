/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.1.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGDaemonApi_H_
#define _SWG_SWGDaemonApi_H_

#include "SWGHttpRequest.h"

#include "SWGDaemonSummaryResponse.h"
#include "SWGDeviceReport.h"
#include "SWGDeviceSettings.h"
#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"

#include <QObject>

namespace SWGSDRangel {

class SWGDaemonApi: public QObject {
    Q_OBJECT

public:
    SWGDaemonApi();
    SWGDaemonApi(QString host, QString basePath);
    ~SWGDaemonApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void daemonInstanceSummary();
    void daemonReportGet();
    void daemonRunDelete();
    void daemonRunGet();
    void daemonRunPost();
    void daemonSettingsGet();
    void daemonSettingsPatch(SWGDeviceSettings& body);
    void daemonSettingsPut(SWGDeviceSettings& body);
    
private:
    void daemonInstanceSummaryCallback (SWGHttpRequestWorker * worker);
    void daemonReportGetCallback (SWGHttpRequestWorker * worker);
    void daemonRunDeleteCallback (SWGHttpRequestWorker * worker);
    void daemonRunGetCallback (SWGHttpRequestWorker * worker);
    void daemonRunPostCallback (SWGHttpRequestWorker * worker);
    void daemonSettingsGetCallback (SWGHttpRequestWorker * worker);
    void daemonSettingsPatchCallback (SWGHttpRequestWorker * worker);
    void daemonSettingsPutCallback (SWGHttpRequestWorker * worker);
    
signals:
    void daemonInstanceSummarySignal(SWGDaemonSummaryResponse* summary);
    void daemonReportGetSignal(SWGDeviceReport* summary);
    void daemonRunDeleteSignal(SWGDeviceState* summary);
    void daemonRunGetSignal(SWGDeviceState* summary);
    void daemonRunPostSignal(SWGDeviceState* summary);
    void daemonSettingsGetSignal(SWGDeviceSettings* summary);
    void daemonSettingsPatchSignal(SWGDeviceSettings* summary);
    void daemonSettingsPutSignal(SWGDeviceSettings* summary);
    
    void daemonInstanceSummarySignalE(SWGDaemonSummaryResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonReportGetSignalE(SWGDeviceReport* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunDeleteSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunGetSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunPostSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsGetSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsPatchSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsPutSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void daemonInstanceSummarySignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonReportGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonRunPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void daemonSettingsPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif

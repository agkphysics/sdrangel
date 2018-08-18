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

#ifndef _SWG_SWGInstanceApi_H_
#define _SWG_SWGInstanceApi_H_

#include "SWGHttpRequest.h"

#include "SWGAudioDevices.h"
#include "SWGAudioInputDevice.h"
#include "SWGAudioOutputDevice.h"
#include "SWGDVSeralDevices.h"
#include "SWGDeviceSetList.h"
#include "SWGErrorResponse.h"
#include "SWGInstanceChannelsResponse.h"
#include "SWGInstanceDevicesResponse.h"
#include "SWGInstanceSummaryResponse.h"
#include "SWGLocationInformation.h"
#include "SWGLoggingInfo.h"
#include "SWGPresetExport.h"
#include "SWGPresetIdentifier.h"
#include "SWGPresetImport.h"
#include "SWGPresetTransfer.h"
#include "SWGPresets.h"
#include "SWGSuccessResponse.h"

#include <QObject>

namespace SWGSDRangel {

class SWGInstanceApi: public QObject {
    Q_OBJECT

public:
    SWGInstanceApi();
    SWGInstanceApi(QString host, QString basePath);
    ~SWGInstanceApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void instanceAudioGet();
    void instanceAudioInputCleanupPatch();
    void instanceAudioInputDelete(SWGAudioInputDevice& body);
    void instanceAudioInputPatch(SWGAudioInputDevice& body);
    void instanceAudioOutputCleanupPatch();
    void instanceAudioOutputDelete(SWGAudioOutputDevice& body);
    void instanceAudioOutputPatch(SWGAudioOutputDevice& body);
    void instanceChannels(qint32 tx);
    void instanceDVSerialGet();
    void instanceDVSerialPatch(qint32 dvserial);
    void instanceDelete();
    void instanceDeviceSetsGet();
    void instanceDevices(qint32 tx);
    void instanceLocationGet();
    void instanceLocationPut(SWGLocationInformation& body);
    void instanceLoggingGet();
    void instanceLoggingPut(SWGLoggingInfo& body);
    void instancePresetDelete(SWGPresetIdentifier& body);
    void instancePresetFilePost(SWGPresetExport& body);
    void instancePresetFilePut(SWGPresetImport& body);
    void instancePresetGet();
    void instancePresetPatch(SWGPresetTransfer& body);
    void instancePresetPost(SWGPresetTransfer& body);
    void instancePresetPut(SWGPresetTransfer& body);
    void instanceSummary();
    
private:
    void instanceAudioGetCallback (SWGHttpRequestWorker * worker);
    void instanceAudioInputCleanupPatchCallback (SWGHttpRequestWorker * worker);
    void instanceAudioInputDeleteCallback (SWGHttpRequestWorker * worker);
    void instanceAudioInputPatchCallback (SWGHttpRequestWorker * worker);
    void instanceAudioOutputCleanupPatchCallback (SWGHttpRequestWorker * worker);
    void instanceAudioOutputDeleteCallback (SWGHttpRequestWorker * worker);
    void instanceAudioOutputPatchCallback (SWGHttpRequestWorker * worker);
    void instanceChannelsCallback (SWGHttpRequestWorker * worker);
    void instanceDVSerialGetCallback (SWGHttpRequestWorker * worker);
    void instanceDVSerialPatchCallback (SWGHttpRequestWorker * worker);
    void instanceDeleteCallback (SWGHttpRequestWorker * worker);
    void instanceDeviceSetsGetCallback (SWGHttpRequestWorker * worker);
    void instanceDevicesCallback (SWGHttpRequestWorker * worker);
    void instanceLocationGetCallback (SWGHttpRequestWorker * worker);
    void instanceLocationPutCallback (SWGHttpRequestWorker * worker);
    void instanceLoggingGetCallback (SWGHttpRequestWorker * worker);
    void instanceLoggingPutCallback (SWGHttpRequestWorker * worker);
    void instancePresetDeleteCallback (SWGHttpRequestWorker * worker);
    void instancePresetFilePostCallback (SWGHttpRequestWorker * worker);
    void instancePresetFilePutCallback (SWGHttpRequestWorker * worker);
    void instancePresetGetCallback (SWGHttpRequestWorker * worker);
    void instancePresetPatchCallback (SWGHttpRequestWorker * worker);
    void instancePresetPostCallback (SWGHttpRequestWorker * worker);
    void instancePresetPutCallback (SWGHttpRequestWorker * worker);
    void instanceSummaryCallback (SWGHttpRequestWorker * worker);
    
signals:
    void instanceAudioGetSignal(SWGAudioDevices* summary);
    void instanceAudioInputCleanupPatchSignal(SWGSuccessResponse* summary);
    void instanceAudioInputDeleteSignal(SWGAudioInputDevice* summary);
    void instanceAudioInputPatchSignal(SWGAudioInputDevice* summary);
    void instanceAudioOutputCleanupPatchSignal(SWGSuccessResponse* summary);
    void instanceAudioOutputDeleteSignal(SWGAudioOutputDevice* summary);
    void instanceAudioOutputPatchSignal(SWGAudioOutputDevice* summary);
    void instanceChannelsSignal(SWGInstanceChannelsResponse* summary);
    void instanceDVSerialGetSignal(SWGDVSeralDevices* summary);
    void instanceDVSerialPatchSignal(SWGDVSeralDevices* summary);
    void instanceDeleteSignal(SWGInstanceSummaryResponse* summary);
    void instanceDeviceSetsGetSignal(SWGDeviceSetList* summary);
    void instanceDevicesSignal(SWGInstanceDevicesResponse* summary);
    void instanceLocationGetSignal(SWGLocationInformation* summary);
    void instanceLocationPutSignal(SWGLocationInformation* summary);
    void instanceLoggingGetSignal(SWGLoggingInfo* summary);
    void instanceLoggingPutSignal(SWGLoggingInfo* summary);
    void instancePresetDeleteSignal(SWGPresetIdentifier* summary);
    void instancePresetFilePostSignal(SWGPresetIdentifier* summary);
    void instancePresetFilePutSignal(SWGPresetIdentifier* summary);
    void instancePresetGetSignal(SWGPresets* summary);
    void instancePresetPatchSignal(SWGPresetIdentifier* summary);
    void instancePresetPostSignal(SWGPresetIdentifier* summary);
    void instancePresetPutSignal(SWGPresetIdentifier* summary);
    void instanceSummarySignal(SWGInstanceSummaryResponse* summary);
    
    void instanceAudioGetSignalE(SWGAudioDevices* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputCleanupPatchSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputDeleteSignalE(SWGAudioInputDevice* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputPatchSignalE(SWGAudioInputDevice* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputCleanupPatchSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputDeleteSignalE(SWGAudioOutputDevice* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputPatchSignalE(SWGAudioOutputDevice* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceChannelsSignalE(SWGInstanceChannelsResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDVSerialGetSignalE(SWGDVSeralDevices* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDVSerialPatchSignalE(SWGDVSeralDevices* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeleteSignalE(SWGInstanceSummaryResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetsGetSignalE(SWGDeviceSetList* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDevicesSignalE(SWGInstanceDevicesResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLocationGetSignalE(SWGLocationInformation* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLocationPutSignalE(SWGLocationInformation* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLoggingGetSignalE(SWGLoggingInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLoggingPutSignalE(SWGLoggingInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetDeleteSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetFilePostSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetFilePutSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetGetSignalE(SWGPresets* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPatchSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPostSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPutSignalE(SWGPresetIdentifier* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceSummarySignalE(SWGInstanceSummaryResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void instanceAudioGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputCleanupPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioInputPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputCleanupPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceAudioOutputPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceChannelsSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDVSerialGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDVSerialPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetsGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDevicesSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLocationGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLocationPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLoggingGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceLoggingPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetFilePostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetFilePutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instancePresetPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceSummarySignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif

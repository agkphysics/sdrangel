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


#include "SWGSDRdaemonSourceReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSDRdaemonSourceReport::SWGSDRdaemonSourceReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSDRdaemonSourceReport::SWGSDRdaemonSourceReport() {
    center_frequency = 0;
    m_center_frequency_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    buffer_rw_balance = 0;
    m_buffer_rw_balance_isSet = false;
    daemon_timestamp = nullptr;
    m_daemon_timestamp_isSet = false;
    min_nb_blocks = 0;
    m_min_nb_blocks_isSet = false;
    max_nb_recovery = 0;
    m_max_nb_recovery_isSet = false;
}

SWGSDRdaemonSourceReport::~SWGSDRdaemonSourceReport() {
    this->cleanup();
}

void
SWGSDRdaemonSourceReport::init() {
    center_frequency = 0;
    m_center_frequency_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    buffer_rw_balance = 0;
    m_buffer_rw_balance_isSet = false;
    daemon_timestamp = new QString("");
    m_daemon_timestamp_isSet = false;
    min_nb_blocks = 0;
    m_min_nb_blocks_isSet = false;
    max_nb_recovery = 0;
    m_max_nb_recovery_isSet = false;
}

void
SWGSDRdaemonSourceReport::cleanup() {



    if(daemon_timestamp != nullptr) { 
        delete daemon_timestamp;
    }


}

SWGSDRdaemonSourceReport*
SWGSDRdaemonSourceReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSDRdaemonSourceReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&buffer_rw_balance, pJson["bufferRWBalance"], "qint32", "");
    
    ::SWGSDRangel::setValue(&daemon_timestamp, pJson["daemonTimestamp"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&min_nb_blocks, pJson["minNbBlocks"], "qint32", "");
    
    ::SWGSDRangel::setValue(&max_nb_recovery, pJson["maxNbRecovery"], "qint32", "");
    
}

QString
SWGSDRdaemonSourceReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSDRdaemonSourceReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }
    if(m_buffer_rw_balance_isSet){
        obj->insert("bufferRWBalance", QJsonValue(buffer_rw_balance));
    }
    if(daemon_timestamp != nullptr && *daemon_timestamp != QString("")){
        toJsonValue(QString("daemonTimestamp"), daemon_timestamp, obj, QString("QString"));
    }
    if(m_min_nb_blocks_isSet){
        obj->insert("minNbBlocks", QJsonValue(min_nb_blocks));
    }
    if(m_max_nb_recovery_isSet){
        obj->insert("maxNbRecovery", QJsonValue(max_nb_recovery));
    }

    return obj;
}

qint32
SWGSDRdaemonSourceReport::getCenterFrequency() {
    return center_frequency;
}
void
SWGSDRdaemonSourceReport::setCenterFrequency(qint32 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGSDRdaemonSourceReport::getSampleRate() {
    return sample_rate;
}
void
SWGSDRdaemonSourceReport::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}

qint32
SWGSDRdaemonSourceReport::getBufferRwBalance() {
    return buffer_rw_balance;
}
void
SWGSDRdaemonSourceReport::setBufferRwBalance(qint32 buffer_rw_balance) {
    this->buffer_rw_balance = buffer_rw_balance;
    this->m_buffer_rw_balance_isSet = true;
}

QString*
SWGSDRdaemonSourceReport::getDaemonTimestamp() {
    return daemon_timestamp;
}
void
SWGSDRdaemonSourceReport::setDaemonTimestamp(QString* daemon_timestamp) {
    this->daemon_timestamp = daemon_timestamp;
    this->m_daemon_timestamp_isSet = true;
}

qint32
SWGSDRdaemonSourceReport::getMinNbBlocks() {
    return min_nb_blocks;
}
void
SWGSDRdaemonSourceReport::setMinNbBlocks(qint32 min_nb_blocks) {
    this->min_nb_blocks = min_nb_blocks;
    this->m_min_nb_blocks_isSet = true;
}

qint32
SWGSDRdaemonSourceReport::getMaxNbRecovery() {
    return max_nb_recovery;
}
void
SWGSDRdaemonSourceReport::setMaxNbRecovery(qint32 max_nb_recovery) {
    this->max_nb_recovery = max_nb_recovery;
    this->m_max_nb_recovery_isSet = true;
}


bool
SWGSDRdaemonSourceReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_buffer_rw_balance_isSet){ isObjectUpdated = true; break;}
        if(daemon_timestamp != nullptr && *daemon_timestamp != QString("")){ isObjectUpdated = true; break;}
        if(m_min_nb_blocks_isSet){ isObjectUpdated = true; break;}
        if(m_max_nb_recovery_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}


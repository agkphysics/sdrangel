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


#include "SWGWFMDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGWFMDemodSettings::SWGWFMDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGWFMDemodSettings::SWGWFMDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    af_bandwidth = 0.0f;
    m_af_bandwidth_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
}

SWGWFMDemodSettings::~SWGWFMDemodSettings() {
    this->cleanup();
}

void
SWGWFMDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    af_bandwidth = 0.0f;
    m_af_bandwidth_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
}

void
SWGWFMDemodSettings::cleanup() {







    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }
}

SWGWFMDemodSettings*
SWGWFMDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWFMDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&af_bandwidth, pJson["afBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
}

QString
SWGWFMDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGWFMDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_af_bandwidth_isSet){
        obj->insert("afBandwidth", QJsonValue(af_bandwidth));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }

    return obj;
}

qint64
SWGWFMDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGWFMDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGWFMDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGWFMDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGWFMDemodSettings::getAfBandwidth() {
    return af_bandwidth;
}
void
SWGWFMDemodSettings::setAfBandwidth(float af_bandwidth) {
    this->af_bandwidth = af_bandwidth;
    this->m_af_bandwidth_isSet = true;
}

float
SWGWFMDemodSettings::getVolume() {
    return volume;
}
void
SWGWFMDemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

float
SWGWFMDemodSettings::getSquelch() {
    return squelch;
}
void
SWGWFMDemodSettings::setSquelch(float squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGWFMDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGWFMDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGWFMDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGWFMDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGWFMDemodSettings::getTitle() {
    return title;
}
void
SWGWFMDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGWFMDemodSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGWFMDemodSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}


bool
SWGWFMDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_rf_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_af_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_isSet){ isObjectUpdated = true; break;}
        if(m_audio_mute_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(audio_device_name != nullptr && *audio_device_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}


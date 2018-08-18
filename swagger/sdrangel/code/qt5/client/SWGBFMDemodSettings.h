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

/*
 * SWGBFMDemodSettings.h
 *
 * BFMDemod
 */

#ifndef SWGBFMDemodSettings_H_
#define SWGBFMDemodSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGBFMDemodSettings: public SWGObject {
public:
    SWGBFMDemodSettings();
    SWGBFMDemodSettings(QString* json);
    virtual ~SWGBFMDemodSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGBFMDemodSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getRfBandwidth();
    void setRfBandwidth(float rf_bandwidth);

    float getAfBandwidth();
    void setAfBandwidth(float af_bandwidth);

    float getVolume();
    void setVolume(float volume);

    float getSquelch();
    void setSquelch(float squelch);

    qint32 getAudioStereo();
    void setAudioStereo(qint32 audio_stereo);

    qint32 getLsbStereo();
    void setLsbStereo(qint32 lsb_stereo);

    qint32 getShowPilot();
    void setShowPilot(qint32 show_pilot);

    qint32 getRdsActive();
    void setRdsActive(qint32 rds_active);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getAudioDeviceName();
    void setAudioDeviceName(QString* audio_device_name);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    float af_bandwidth;
    bool m_af_bandwidth_isSet;

    float volume;
    bool m_volume_isSet;

    float squelch;
    bool m_squelch_isSet;

    qint32 audio_stereo;
    bool m_audio_stereo_isSet;

    qint32 lsb_stereo;
    bool m_lsb_stereo_isSet;

    qint32 show_pilot;
    bool m_show_pilot_isSet;

    qint32 rds_active;
    bool m_rds_active_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    QString* audio_device_name;
    bool m_audio_device_name_isSet;

};

}

#endif /* SWGBFMDemodSettings_H_ */

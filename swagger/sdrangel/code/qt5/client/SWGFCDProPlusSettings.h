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
 * SWGFCDProPlusSettings.h
 *
 * FCDProPlus
 */

#ifndef SWGFCDProPlusSettings_H_
#define SWGFCDProPlusSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFCDProPlusSettings: public SWGObject {
public:
    SWGFCDProPlusSettings();
    SWGFCDProPlusSettings(QString* json);
    virtual ~SWGFCDProPlusSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFCDProPlusSettings* fromJson(QString &jsonString) override;

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getRangeLow();
    void setRangeLow(qint32 range_low);

    qint32 getLnaGain();
    void setLnaGain(qint32 lna_gain);

    qint32 getMixGain();
    void setMixGain(qint32 mix_gain);

    qint32 getBiasT();
    void setBiasT(qint32 bias_t);

    qint32 getIfGain();
    void setIfGain(qint32 if_gain);

    qint32 getIfFilterIndex();
    void setIfFilterIndex(qint32 if_filter_index);

    qint32 getRfFilterIndex();
    void setRfFilterIndex(qint32 rf_filter_index);

    qint32 getLOppmTenths();
    void setLOppmTenths(qint32 l_oppm_tenths);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqImbalance();
    void setIqImbalance(qint32 iq_imbalance);

    qint32 getTransverterMode();
    void setTransverterMode(qint32 transverter_mode);

    qint64 getTransverterDeltaFrequency();
    void setTransverterDeltaFrequency(qint64 transverter_delta_frequency);

    QString* getFileRecordName();
    void setFileRecordName(QString* file_record_name);


    virtual bool isSet() override;

private:
    qint64 center_frequency;
    bool m_center_frequency_isSet;

    qint32 range_low;
    bool m_range_low_isSet;

    qint32 lna_gain;
    bool m_lna_gain_isSet;

    qint32 mix_gain;
    bool m_mix_gain_isSet;

    qint32 bias_t;
    bool m_bias_t_isSet;

    qint32 if_gain;
    bool m_if_gain_isSet;

    qint32 if_filter_index;
    bool m_if_filter_index_isSet;

    qint32 rf_filter_index;
    bool m_rf_filter_index_isSet;

    qint32 l_oppm_tenths;
    bool m_l_oppm_tenths_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_imbalance;
    bool m_iq_imbalance_isSet;

    qint32 transverter_mode;
    bool m_transverter_mode_isSet;

    qint64 transverter_delta_frequency;
    bool m_transverter_delta_frequency_isSet;

    QString* file_record_name;
    bool m_file_record_name_isSet;

};

}

#endif /* SWGFCDProPlusSettings_H_ */

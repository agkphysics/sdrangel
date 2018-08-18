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
 * SWGATVModSettings.h
 *
 * ATVMod
 */

#ifndef SWGATVModSettings_H_
#define SWGATVModSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGATVModSettings: public SWGObject {
public:
    SWGATVModSettings();
    SWGATVModSettings(QString* json);
    virtual ~SWGATVModSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGATVModSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getRfBandwidth();
    void setRfBandwidth(float rf_bandwidth);

    float getRfOppBandwidth();
    void setRfOppBandwidth(float rf_opp_bandwidth);

    qint32 getAtvStd();
    void setAtvStd(qint32 atv_std);

    qint32 getNbLines();
    void setNbLines(qint32 nb_lines);

    qint32 getFps();
    void setFps(qint32 fps);

    qint32 getAtvModInput();
    void setAtvModInput(qint32 atv_mod_input);

    float getUniformLevel();
    void setUniformLevel(float uniform_level);

    qint32 getAtvModulation();
    void setAtvModulation(qint32 atv_modulation);

    qint32 getVideoPlayLoop();
    void setVideoPlayLoop(qint32 video_play_loop);

    qint32 getVideoPlay();
    void setVideoPlay(qint32 video_play);

    qint32 getCameraPlay();
    void setCameraPlay(qint32 camera_play);

    qint32 getChannelMute();
    void setChannelMute(qint32 channel_mute);

    qint32 getInvertedVideo();
    void setInvertedVideo(qint32 inverted_video);

    float getRfScalingFactor();
    void setRfScalingFactor(float rf_scaling_factor);

    float getFmExcursion();
    void setFmExcursion(float fm_excursion);

    qint32 getForceDecimator();
    void setForceDecimator(qint32 force_decimator);

    qint32 getShowOverlayText();
    void setShowOverlayText(qint32 show_overlay_text);

    QString* getOverlayText();
    void setOverlayText(QString* overlay_text);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getImageFileName();
    void setImageFileName(QString* image_file_name);

    QString* getVideoFileName();
    void setVideoFileName(QString* video_file_name);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    float rf_opp_bandwidth;
    bool m_rf_opp_bandwidth_isSet;

    qint32 atv_std;
    bool m_atv_std_isSet;

    qint32 nb_lines;
    bool m_nb_lines_isSet;

    qint32 fps;
    bool m_fps_isSet;

    qint32 atv_mod_input;
    bool m_atv_mod_input_isSet;

    float uniform_level;
    bool m_uniform_level_isSet;

    qint32 atv_modulation;
    bool m_atv_modulation_isSet;

    qint32 video_play_loop;
    bool m_video_play_loop_isSet;

    qint32 video_play;
    bool m_video_play_isSet;

    qint32 camera_play;
    bool m_camera_play_isSet;

    qint32 channel_mute;
    bool m_channel_mute_isSet;

    qint32 inverted_video;
    bool m_inverted_video_isSet;

    float rf_scaling_factor;
    bool m_rf_scaling_factor_isSet;

    float fm_excursion;
    bool m_fm_excursion_isSet;

    qint32 force_decimator;
    bool m_force_decimator_isSet;

    qint32 show_overlay_text;
    bool m_show_overlay_text_isSet;

    QString* overlay_text;
    bool m_overlay_text_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    QString* image_file_name;
    bool m_image_file_name_isSet;

    QString* video_file_name;
    bool m_video_file_name_isSet;

};

}

#endif /* SWGATVModSettings_H_ */

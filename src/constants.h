#define ON                         1
#define OFF                        0
#define REVERSE                    false

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(X, Y) ({\
    typeof (X) x_ = (X);\
    typeof (Y) y_ = (Y);\
    (x_ < y_) ? x_ : y_; })

#define TIMER_OFFSET_TIMER         (TIMER_500_TICK)
#define TIMER_BW_TIMER             (TIMER_500_TICK)
#define TIMER_SNR_TIMER            (TIMER_500_TICK)
#define TIMER_BAT_TIMER            (TIMER_500_TICK)
#define TIMER_SCREENSAVER_BASE     1000000
#define TIMER_500_TICK             500

#define BAT_LEVEL_EMPTY            1600
#define BAT_LEVEL_WARN             1700
#define BAT_LEVEL_FULL             2270
#define BAT_LEVEL_STAGE            4
#define BATTERY_WARN_VALUE         3.68
#define BATTERY_LOW_VALUE          3.0
#define BATTERY_FULL_VALUE         4.2


#define LANGUAGE_CHS               14

#define FREQ_MW_STEP_9K            9
#define FREQ_MW_STEP_10K           10
#define FREQ_SW_STEP_5K            5
#define FREQ_OIRT_STEP_30K         3
#define FREQ_FM_STEP_50K           5
#define FREQ_FM_STEP_100K          10
#define FREQ_FM_STEP_200K          20

#define FREQ_LW_LOW_EDGE_MIN       144
#define FREQ_LW_HIGH_EDGE_MAX      519
#define FREQ_MW_LOW_EDGE_MIN_9K    522
#define FREQ_MW_LOW_EDGE_MIN_10K   520
#define FREQ_MW_HIGH_EDGE_MAX_9K   1791
#define FREQ_MW_HIGH_EDGE_MAX_10K  1700
#define FREQ_SW_LOW_EDGE_MIN       1700
#define FREQ_SW_LOW_EDGE_MAX       (FREQ_SW_160M_START)
#define FREQ_SW_HIGH_EDGE_MIN      (FREQ_SW_11M_END)
#define FREQ_SW_HIGH_EDGE_MAX      (FREQ_SW_END)
#define FREQ_FM_START              65000
#define FREQ_FM_END                108000
#define FREQ_FM_OIRT_START         6500   // use values of 1/10 * kHz
#define FREQ_FM_OIRT_END           7400   // use values of 1/10 * kHz

#define FM_DEEMPHASIS_50           50
#define FM_DEEMPHASIS_75           75
#define REGION_EU                  0
#define REGION_US                  1

// according to https://www.short-wave.info/index.php?feature=frequencies
#define FREQ_SW_START       1800
#define FREQ_SW_END         27000
#define FREQ_SW_160M_START  1800
#define FREQ_SW_160M_END    2000
#define FREQ_SW_120M_START  2300
#define FREQ_SW_120M_END    2495
#define FREQ_SW_90M_START   3200
#define FREQ_SW_90M_END     3400
#define FREQ_SW_75M_START   3900
#define FREQ_SW_75M_END     4000
#define FREQ_SW_60M_START   4750
#define FREQ_SW_60M_END     4995
#define FREQ_SW_49M_START   5900
#define FREQ_SW_49M_END     6200
#define FREQ_SW_41M_START   7200
#define FREQ_SW_41M_END     7450
#define FREQ_SW_31M_START   9400
#define FREQ_SW_31M_END     9900
#define FREQ_SW_25M_START   11600
#define FREQ_SW_25M_END     12100
#define FREQ_SW_22M_START   13570
#define FREQ_SW_22M_END     13870
#define FREQ_SW_19M_START   15100
#define FREQ_SW_19M_END     15800
#define FREQ_SW_16M_START   17480
#define FREQ_SW_16M_END     17900
#define FREQ_SW_15M_START   18900
#define FREQ_SW_15M_END     19020
#define FREQ_SW_13M_START   21450
#define FREQ_SW_13M_END     21850
#define FREQ_SW_11M_START   25670
#define FREQ_SW_11M_END     26100

#define SW_MI_BAND_GAP      0
#define SW_MI_BAND_11M      11
#define SW_MI_BAND_13M      13
#define SW_MI_BAND_15M      15
#define SW_MI_BAND_16M      16
#define SW_MI_BAND_19M      19
#define SW_MI_BAND_22M      22
#define SW_MI_BAND_25M      25
#define SW_MI_BAND_31M      31
#define SW_MI_BAND_41M      41
#define SW_MI_BAND_49M      49
#define SW_MI_BAND_60M      60
#define SW_MI_BAND_75M      75
#define SW_MI_BAND_90M      90
#define SW_MI_BAND_120M     120
#define SW_MI_BAND_160M     160

// EEPROM index defines
#define EE_PRESETS_CNT              99
#define EE_CHECKBYTE_VALUE          37 // 0 ~ 255,add new entry, change for new value 

#define EE_TOTAL_CNT                818
#define EE_UINT16_FREQUENCY_FM      0
#define EE_BYTE_VOLSET              4
#define EE_BYTE_STEREO              5
#define EE_BYTE_BANDFM              6
#define EE_BYTE_BANDAM              7
#define EE_UINT16_CONVERTERSET      8
#define EE_UINT16_FMLOWEDGESET      12
#define EE_UINT16_FMHIGHEDGESET     16
#define EE_BYTE_CONTRASTSET         20
#define EE_BYTE_STEREOLEVEL         21
#define EE_BYTE_HIGHCUTLEVEL        22
#define EE_BYTE_HIGHCUTOFFSET       23
#define EE_BYTE_LEVELOFFSET         24
#define EE_BYTE_RTBUFFER            25
#define EE_BYTE_SORTAF              26
#define EE_BYTE_STATIONLISTID       27
#define EE_BYTE_EDGEBEEP            28
#define EE_BYTE_SOFTMUTEAM          29
#define EE_BYTE_SOFTMUTEFM          30
#define EE_UINT16_FREQUENCY_AM      31
#define EE_BYTE_LANGUAGE            35
#define EE_BYTE_SHOWRDSERRORS       36
#define EE_BYTE_TEF                 37
#define EE_BYTE_DISPLAYFLIP         38
#define EE_BYTE_ROTARYMODE          39
#define EE_BYTE_STEPSIZE            40
#define EE_BYTE_TUNEMODE            41
#define EE_BYTE_OPTENC              42
#define EE_BYTE_CHECKBYTE           43
#define EE_BYTE_IMSSET              44
#define EE_BYTE_EQSET               45
#define EE_BYTE_BAND                46
#define EE_BYTE_LOWLEVELSET         47
#define EE_BYTE_BWSET_FM            48
#define EE_BYTE_BWSET_AM            49
#define EE_BYTE_BANDAUTOSW          50
#define EE_BYTE_MEMORYPOS           51
#define EE_BYTE_REGION              52
#define EE_BYTE_RDS_UNDERSCORE      53
#define EE_BYTE_USBMODE             54
#define EE_BYTE_WIFI                55
#define EE_BYTE_SUBNETCLIENT        56
#define EE_BYTE_SHOWSWMIBAND        57
#define EE_BYTE_RDS_FILTER          58
#define EE_BYTE_RDS_PIERRORS        59
#define EE_BYTE_SHOWSQUELCH         60
#define EE_BYTE_SHOWMODULATION      61
#define EE_BYTE_AM_NB               62
#define EE_BYTE_FM_NB               63
#define EE_BYTE_AUDIOMODE           64
#define EE_BYTE_TOUCH_ROTATING      65
#define EE_BYTE_HARDWARE_MODEL      66
#define EE_BYTE_POWEROPTIONS        67
#define EE_BYTE_CURRENTTHEME        68
#define EE_BYTE_FMDEFAULTSTEPSIZE   69
#define EE_BYTE_SCREENSAVERSET      70
#define EE_BYTE_UNIT                71
#define EE_BYTE_AF                  72
#define EE_BYTE_BATTERY_OPTIONS     73
#define EE_BYTE_AM_CO_DECT          74
#define EE_BYTE_AM_CO_DECT_COUNT    75
#define EE_BYTE_AM_RF_AGC           76
#define EE_BYTE_FM_DEEMPHASIS       77
#define EE_UINT16_FREQUENCY_LW      78
#define EE_UINT16_FREQUENCY_MW      82
#define EE_UINT16_FREQUENCY_SW      86
#define EE_UINT16_LOWEDGEOIRTSET    90
#define EE_UINT16_HIGHEDGEOIRTSET   94
#define EE_INT16_AMLEVELOFFSET      98
#define EE_UINT16_FREQUENCY_OIRT    102
#define EE_STRING_XDRGTK_KEY        106  // 11 byte
#define EE_BYTE_FASTPS              118
#define EE_BYTE_TOT                 119
#define EE_PRESETS_BAND_START       120
#define EE_PRESET_BW_START			220
#define EE_PRESET_MS_START			320
#define EE_PRESETS_START            420
#define EE_PRESETS_FREQUENCY        8750

// End of EEPROM index defines

static const char* const unitString[] = {"dBμV", "dBf", "dBm"};

// FM band: before BAND_GAP; AM band: after BAND_GAP
enum RADIO_BAND {
  BAND_OIRT = 0, BAND_FM, BAND_GAP, BAND_LW, BAND_MW, BAND_SW
};

// Toggle: LW -> MW -> SW
enum RADIO_AM_BAND_SELECTION {
  AM_BAND_ALL = 0, AM_BAND_LW_MW, AM_BAND_LW_SW, AM_BAND_MW_SW,
  AM_BAND_LW, AM_BAND_MW, AM_BAND_SW,
  AM_BAND_CNT
};

// Toggle: OIRT -> FM
enum RADIO_FM_BAND_SELECTION {
  FM_BAND_ALL = 0, FM_BAND_OIRT, FM_BAND_FM,
  FM_BAND_CNT
};

enum RADIO_TUNE_MODE {
  TUNE_MAN, TUNE_AUTO, TUNE_MEM, TUNE_MI_BAND
};

enum RADIO_POWER_MODE {
  LCD_OFF, LCD_BRIGHTNESS_1_PERCENT, LCD_BRIGHTNESS_A_QUARTER, LCD_BRIGHTNESS_HALF, RADIO_POWER_MODE_CNT
};

enum RADIO_HARDWARE_MODEL {
  BASE_ILI9341 = 0, PORTABLE_ILI9341, PORTABLE_TOUCH_ILI9341,
  RADIO_HARDWARE_CNT
};

enum RADIO_BATTERY_SELECTION {
  BATTERY_NONE = 0, BATTERY_VALUE, BATTERY_PERCENT,
  RADIO_BATTERY_CNT
};

enum RADIO_FM_DEEMPHASIS {
  DEEMPHASIS_NONE = 0, DEEMPHASIS_50, DEEMPHASIS_75,
  DEEMPHASIS_COUNT
};

enum SPI_SPEED_ENUM {
  SPI_SPEED_DEFAULT = 0, SPI_SPEED_10M, SPI_SPEED_20M, SPI_SPEED_30M, SPI_SPEED_40M, SPI_SPEED_50M, SPI_SPEED_60M, SPI_SPEED_70M, SPI_SPEED_80M,
  SPI_SPEED_COUNT
};

static const uint8_t TEFLogo[] PROGMEM = {
  0xff, 0xff, 0xf8, 0x7f, 0xfe, 0x07, 0xff, 0xe0, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 0xe0,
  0xff, 0xff, 0xf9, 0xff, 0xff, 0x1f, 0xff, 0xe0, 0xff, 0xff, 0xfb, 0xff, 0xfe, 0x3f, 0xff, 0xe0,
  0xff, 0xff, 0xfb, 0xff, 0xfe, 0x3f, 0xff, 0xe0, 0x7f, 0xff, 0xf3, 0xff, 0xfe, 0x3f, 0xff, 0xe0,
  0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0xc0, 0x00, 0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0x80, 0x00,
  0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0x80, 0x00, 0x01, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0x80,
  0x01, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0xc0, 0x01, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0xc0,
  0x01, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0xc0, 0x01, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0xc0,
  0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0xc0, 0x00, 0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0x80, 0x00,
  0x01, 0xfc, 0x03, 0xfc, 0x00, 0x3f, 0x80, 0x00, 0x01, 0xfc, 0x03, 0xfe, 0x00, 0x3f, 0x80, 0x00,
  0x01, 0xfc, 0x03, 0xff, 0xfe, 0x3f, 0x80, 0x00, 0x01, 0xfc, 0x03, 0xff, 0xfe, 0x3f, 0x80, 0x00,
  0x01, 0xfc, 0x01, 0xff, 0xff, 0x3f, 0x80, 0x00, 0x01, 0xfc, 0x01, 0xff, 0xff, 0x3f, 0x80, 0x00,
  0x01, 0xfc, 0x00, 0x7f, 0xff, 0x3f, 0x80, 0x00
};

static const uint8_t RDSLogo[] PROGMEM = {
  0x01, 0xf8, 0x0f, 0xe0, 0x00,
  0x02, 0x00, 0x30, 0x18, 0x00,
  0x0c, 0x30, 0x43, 0xc6, 0x00,
  0x11, 0xc0, 0x8c, 0x31, 0x00,
  0x26, 0x01, 0x31, 0x8c, 0x80,
  0x28, 0x7e, 0x47, 0xe2, 0x80,
  0x49, 0xfe, 0x4f, 0xf2, 0x40,
  0x51, 0xfc, 0x9f, 0xf9, 0x40,
  0x93, 0xfd, 0x1f, 0xf9, 0x20,
  0xa7, 0xcd, 0x3e, 0x7c, 0xa0,
  0xe7, 0x85, 0x3c, 0x3e, 0xe0,
  0xff, 0x85, 0x7c, 0x3f, 0xe0,
  0xfa, 0x49, 0x7e, 0x4b, 0xe0,
  0x79, 0x32, 0x7d, 0x93, 0xc0,
  0x7c, 0x84, 0xf8, 0x27, 0xc0,
  0x7e, 0x78, 0xf8, 0xc7, 0xc0,
  0x3f, 0x03, 0xf1, 0x1f, 0x80,
  0x3f, 0xcf, 0xf2, 0x7f, 0x80,
  0x1f, 0xff, 0xe0, 0xff, 0x00,
  0x0f, 0xff, 0xc1, 0xfe, 0x00,
  0x03, 0xff, 0x03, 0xf8, 0x00,
  0x00, 0xfc, 0x07, 0xc0, 0x00
};

static const uint8_t Speaker[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x18, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x00,
  0x00, 0xf8, 0x00, 0x00,
  0x01, 0xf8, 0x00, 0x00,
  0xff, 0xf8, 0x00, 0x00,
  0xff, 0xf8, 0x40, 0x80,
  0xff, 0xf8, 0xe1, 0xc0,
  0xff, 0xf8, 0x73, 0x80,
  0xff, 0xf8, 0x3f, 0x00,
  0xff, 0xf8, 0x1e, 0x00,
  0xff, 0xf8, 0x1e, 0x00,
  0xff, 0xf8, 0x3f, 0x00,
  0xff, 0xf8, 0x73, 0x80,
  0xff, 0xf8, 0xe1, 0xc0,
  0xff, 0xf8, 0x40, 0x80,
  0xff, 0xf8, 0x00, 0x00,
  0x01, 0xf8, 0x00, 0x00,
  0x00, 0xf8, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x00,
  0x00, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

static const uint8_t WiFi1[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00
};

static const uint8_t WiFi2[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x7f, 0x00, 0x00,
  0x00, 0xff, 0x80, 0x00,
  0x00, 0x41, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00
};

static const uint8_t WiFi3[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x7f, 0x00, 0x00,
  0x01, 0xff, 0xc0, 0x00,
  0x03, 0xff, 0xe0, 0x00,
  0x07, 0x80, 0xf0, 0x00,
  0x0e, 0x00, 0x38, 0x00,
  0x04, 0x00, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x7f, 0x00, 0x00,
  0x00, 0xff, 0x80, 0x00,
  0x00, 0x41, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00
};

static const uint8_t WiFi4[] PROGMEM = {
  0x01, 0xff, 0xc0, 0x00,
  0x07, 0xff, 0xf0, 0x00,
  0x1f, 0xc1, 0xfc, 0x00,
  0x3e, 0x00, 0x3e, 0x00,
  0x78, 0x00, 0x0f, 0x00,
  0x70, 0x00, 0x07, 0x00,
  0x60, 0x00, 0x03, 0x00,
  0x00, 0x7f, 0x00, 0x00,
  0x01, 0xff, 0xc0, 0x00,
  0x03, 0xff, 0xe0, 0x00,
  0x07, 0x80, 0xf0, 0x00,
  0x0e, 0x00, 0x38, 0x00,
  0x04, 0x00, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x7f, 0x00, 0x00,
  0x00, 0xff, 0x80, 0x00,
  0x00, 0x41, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x1c, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00
};
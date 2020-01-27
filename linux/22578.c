cocci_test_suite() {
	enum{REAR_MIC, REAR_LINE_IN, FRONT_MIC,} cocci_id/* sound/pci/hda/patch_ca0132.c 98 */;
	const char *const cocci_id/* sound/pci/hda/patch_ca0132.c 96 */[3];
	struct ca0132_spec {
		const struct snd_kcontrol_new *mixers[5];
		unsigned int num_mixers;
		const struct hda_verb *base_init_verbs;
		const struct hda_verb *base_exit_verbs;
		const struct hda_verb *chip_init_verbs;
		const struct hda_verb *desktop_init_verbs;
		struct hda_verb *spec_init_verbs;
		struct auto_pin_cfg autocfg;
		struct hda_multi_out multiout;
		hda_nid_t out_pins[AUTO_CFG_MAX_OUTS];
		hda_nid_t dacs[AUTO_CFG_MAX_OUTS];
		unsigned int num_outputs;
		hda_nid_t input_pins[AUTO_PIN_LAST];
		hda_nid_t adcs[AUTO_PIN_LAST];
		hda_nid_t dig_out;
		hda_nid_t dig_in;
		unsigned int num_inputs;
		hda_nid_t shared_mic_nid;
		hda_nid_t shared_out_nid;
		hda_nid_t unsol_tag_hp;
		hda_nid_t unsol_tag_front_hp;
		hda_nid_t unsol_tag_amic1;
		struct mutex chipio_mutex;
		u32 curr_chip_addx;
		enum dsp_download_state dsp_state;
		unsigned int dsp_stream_id;
		unsigned int wait_scp;
		unsigned int wait_scp_header;
		unsigned int wait_num_data;
		unsigned int scp_resp_header;
		unsigned int scp_resp_data[4];
		unsigned int scp_resp_count;
		bool startup_check_entered;
		bool dsp_reload;
		unsigned char dmic_ctl;
		int cur_out_type;
		int cur_mic_type;
		long vnode_lvol[VNODES_COUNT];
		long vnode_rvol[VNODES_COUNT];
		long vnode_lswitch[VNODES_COUNT];
		long vnode_rswitch[VNODES_COUNT];
		long effects_switch[EFFECTS_COUNT];
		long voicefx_val;
		long cur_mic_boost;
		unsigned char in_enum_val;
		unsigned char out_enum_val;
		unsigned char mic_boost_enum_val;
		unsigned char smart_volume_setting;
		long fx_ctl_val[EFFECT_LEVEL_SLIDERS];
		long xbass_xover_freq;
		long eq_preset_val;
		unsigned int tlv[4];
		struct hda_vmaster_mute_hook vmaster_mute;
		unsigned char ae5_headphone_gain_val;
		unsigned char ae5_filter_val;
		unsigned char zxr_gain_set;
		struct hda_codec *codec;
		struct delayed_work unsol_hp_work;
		int quirk;
#ifdef ENABLE_TUNING_CONTROLS
		long cur_ctl_vals[TUNING_CTLS_COUNT];
#endif
		bool use_pci_mmio;
		void __iomem *mem_base;
		bool use_alt_functions;
		bool use_alt_controls;
	} cocci_id/* sound/pci/hda/patch_ca0132.c 956 */;
	enum dsp_download_state{DSP_DOWNLOAD_FAILED=-1, DSP_DOWNLOAD_INIT=0, DSP_DOWNLOADING=1, DSP_DOWNLOADED=2,} cocci_id/* sound/pci/hda/patch_ca0132.c 939 */;
	enum ca0132_sample_rate{SR_6_000=0x00, SR_8_000=0x01, SR_9_600=0x02, SR_11_025=0x03, SR_16_000=0x04, SR_22_050=0x05, SR_24_000=0x06, SR_32_000=0x07, SR_44_100=0x08, SR_48_000=0x09, SR_88_200=0x0A, SR_96_000=0x0B, SR_144_000=0x0C, SR_176_400=0x0D, SR_192_000=0x0E, SR_384_000=0x0F, SR_COUNT=0x10, SR_RATE_UNKNOWN=0x1F,} cocci_id/* sound/pci/hda/patch_ca0132.c 916 */;
	enum hda_vendor_status_chipio{VENDOR_STATUS_CHIPIO_OK=0x00, VENDOR_STATUS_CHIPIO_BUSY=0x01,} cocci_id/* sound/pci/hda/patch_ca0132.c 906 */;
	enum{DIGITAL_MIC, LINE_MIC_IN,} cocci_id/* sound/pci/hda/patch_ca0132.c 90 */;
	enum hda_vendor_status_dspio{VENDOR_STATUS_DSPIO_OK=0x00, VENDOR_STATUS_DSPIO_BUSY=0x01, VENDOR_STATUS_DSPIO_SCP_COMMAND_QUEUE_FULL=0x02, VENDOR_STATUS_DSPIO_SCP_RESPONSE_QUEUE_EMPTY=0x03,} cocci_id/* sound/pci/hda/patch_ca0132.c 892 */;
	struct hda_codec_driver cocci_id/* sound/pci/hda/patch_ca0132.c 8881 */;
	struct hda_device_id cocci_id/* sound/pci/hda/patch_ca0132.c 8872 */[];
	const struct snd_pci_quirk *cocci_id/* sound/pci/hda/patch_ca0132.c 8753 */;
	struct hda_verb cocci_id/* sound/pci/hda/patch_ca0132.c 8697 */;
	const struct hda_codec_ops cocci_id/* sound/pci/hda/patch_ca0132.c 8469 */;
	enum control_param_id{CONTROL_PARAM_VIP_SOURCE=1, CONTROL_PARAM_SPDIF1_SOURCE=2, CONTROL_PARAM_PORTA_160OHM_GAIN=8, CONTROL_PARAM_PORTD_160OHM_GAIN=10, CONTROL_PARAM_ASI=23, CONTROL_PARAM_STREAM_ID=24, CONTROL_PARAM_STREAM_SOURCE_CONN_POINT=25, CONTROL_PARAM_STREAM_DEST_CONN_POINT=26, CONTROL_PARAM_STREAMS_CHANNELS=27, CONTROL_PARAM_STREAM_CONTROL=28, CONTROL_PARAM_CONN_POINT_ID=29, CONTROL_PARAM_CONN_POINT_SAMPLE_RATE=30, CONTROL_PARAM_NODE_ID=31,} cocci_id/* sound/pci/hda/patch_ca0132.c 845 */;
	enum{SPEAKER_OUT, HEADPHONE_OUT, SURROUND_OUT,} cocci_id/* sound/pci/hda/patch_ca0132.c 84 */;
	struct auto_pin_cfg *cocci_id/* sound/pci/hda/patch_ca0132.c 8275 */;
	const char *const cocci_id/* sound/pci/hda/patch_ca0132.c 81 */[2];
	unsigned int cocci_id/* sound/pci/hda/patch_ca0132.c 7969 */[4];
	void cocci_id/* sound/pci/hda/patch_ca0132.c 7895 */;
	enum control_flag_id{CONTROL_FLAG_C_MGR=0, CONTROL_FLAG_DMA=1, CONTROL_FLAG_IDLE_ENABLE=2, CONTROL_FLAG_TRACKER=3, CONTROL_FLAG_SPDIF2OUT=4, CONTROL_FLAG_DMIC=5, CONTROL_FLAG_ADC_B_96KHZ=6, CONTROL_FLAG_ADC_C_96KHZ=7, CONTROL_FLAG_DAC_96KHZ=8, CONTROL_FLAG_DSP_96KHZ=9, CONTROL_FLAG_SRC_CLOCK_196MHZ=10, CONTROL_FLAG_SRC_RATE_96KHZ=11, CONTROL_FLAG_DECODE_LOOP=12, CONTROL_FLAG_DAC1_DEEMPHASIS=13, CONTROL_FLAG_DAC2_DEEMPHASIS=14, CONTROL_FLAG_DAC3_DEEMPHASIS=15, CONTROL_FLAG_ADC_B_HIGH_PASS=16, CONTROL_FLAG_ADC_C_HIGH_PASS=17, CONTROL_FLAG_PORT_A_COMMON_MODE=18, CONTROL_FLAG_PORT_D_COMMON_MODE=19, CONTROL_FLAG_PORT_A_10KOHM_LOAD=20, CONTROL_FLAG_PORT_D_10KOHM_LOAD=21, CONTROL_FLAG_ASI_96KHZ=22, CONTROL_FLAG_DACS_CONTROL_PORTS=23, CONTROL_FLAG_CONTROL_STOP_OK_ENABLE=24, CONTROL_FLAGS_MAX=(CONTROL_FLAG_CONTROL_STOP_OK_ENABLE + 1),} cocci_id/* sound/pci/hda/patch_ca0132.c 787 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_ca0132.c 7818 */[7];
	hda_nid_t cocci_id/* sound/pci/hda/patch_ca0132.c 7805 */[5];
	struct hda_verb cocci_id/* sound/pci/hda/patch_ca0132.c 7652 */[];
	struct hda_jack_callback *cocci_id/* sound/pci/hda/patch_ca0132.c 7616 */;
	struct dsp_image_seg *cocci_id/* sound/pci/hda/patch_ca0132.c 7546 */;
	const struct firmware *cocci_id/* sound/pci/hda/patch_ca0132.c 7509 */;
	const struct dsp_image_seg *cocci_id/* sound/pci/hda/patch_ca0132.c 7508 */;
	enum hda_cmd_vendor_io{VENDOR_DSPIO_SCP_WRITE_DATA_LOW=0x000, VENDOR_DSPIO_SCP_WRITE_DATA_HIGH=0x100, VENDOR_DSPIO_STATUS=0xF01, VENDOR_DSPIO_SCP_POST_READ_DATA=0x702, VENDOR_DSPIO_SCP_READ_DATA=0xF02, VENDOR_DSPIO_DSP_INIT=0x703, VENDOR_DSPIO_SCP_POST_COUNT_QUERY=0x704, VENDOR_DSPIO_SCP_READ_COUNT=0xF04, VENDOR_CHIPIO_ADDRESS_LOW=0x000, VENDOR_CHIPIO_ADDRESS_HIGH=0x100, VENDOR_CHIPIO_STREAM_FORMAT=0x200, VENDOR_CHIPIO_DATA_LOW=0x300, VENDOR_CHIPIO_DATA_HIGH=0x400, VENDOR_CHIPIO_8051_WRITE_DIRECT=0x500, VENDOR_CHIPIO_8051_READ_DIRECT=0xD00, VENDOR_CHIPIO_GET_PARAMETER=0xF00, VENDOR_CHIPIO_STATUS=0xF01, VENDOR_CHIPIO_HIC_POST_READ=0x702, VENDOR_CHIPIO_HIC_READ_DATA=0xF03, VENDOR_CHIPIO_8051_DATA_WRITE=0x707, VENDOR_CHIPIO_8051_DATA_READ=0xF07, VENDOR_CHIPIO_8051_PMEM_READ=0xF08, VENDOR_CHIPIO_8051_IRAM_WRITE=0x709, VENDOR_CHIPIO_8051_IRAM_READ=0xF09, VENDOR_CHIPIO_CT_EXTENSIONS_ENABLE=0x70A, VENDOR_CHIPIO_CT_EXTENSIONS_GET=0xF0A, VENDOR_CHIPIO_PLL_PMU_WRITE=0x70C, VENDOR_CHIPIO_PLL_PMU_READ=0xF0C, VENDOR_CHIPIO_8051_ADDRESS_LOW=0x70D, VENDOR_CHIPIO_8051_ADDRESS_HIGH=0x70E, VENDOR_CHIPIO_FLAG_SET=0x70F, VENDOR_CHIPIO_FLAGS_GET=0xF0F, VENDOR_CHIPIO_PARAM_SET=0x710, VENDOR_CHIPIO_PARAM_GET=0xF10, VENDOR_CHIPIO_PORT_ALLOC_CONFIG_SET=0x711, VENDOR_CHIPIO_PORT_ALLOC_SET=0x712, VENDOR_CHIPIO_PORT_ALLOC_GET=0xF12, VENDOR_CHIPIO_PORT_FREE_SET=0x713, VENDOR_CHIPIO_PARAM_EX_ID_GET=0xF17, VENDOR_CHIPIO_PARAM_EX_ID_SET=0x717, VENDOR_CHIPIO_PARAM_EX_VALUE_GET=0xF18, VENDOR_CHIPIO_PARAM_EX_VALUE_SET=0x718, VENDOR_CHIPIO_DMIC_CTL_SET=0x788, VENDOR_CHIPIO_DMIC_CTL_GET=0xF88, VENDOR_CHIPIO_DMIC_PIN_SET=0x789, VENDOR_CHIPIO_DMIC_PIN_GET=0xF89, VENDOR_CHIPIO_DMIC_MCLK_SET=0x78A, VENDOR_CHIPIO_DMIC_MCLK_GET=0xF8A, VENDOR_CHIPIO_EAPD_SEL_SET=0x78D,} cocci_id/* sound/pci/hda/patch_ca0132.c 719 */;
	const struct ae5_filter_set cocci_id/* sound/pci/hda/patch_ca0132.c 707 */[];
	struct ae5_filter_set {
		char *name;
		unsigned int val;
	} cocci_id/* sound/pci/hda/patch_ca0132.c 702 */;
	const struct ae5_headphone_gain_set cocci_id/* sound/pci/hda/patch_ca0132.c 690 */[];
	struct ae5_headphone_gain_set {
		char *name;
		unsigned int vals[AE5_HEADPHONE_GAIN_PRESET_MAX_COMMANDS];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 685 */;
	u8 cocci_id/* sound/pci/hda/patch_ca0132.c 6784 */;
	const struct ae5_ca0113_output_set cocci_id/* sound/pci/hda/patch_ca0132.c 668 */[];
	struct ae5_ca0113_output_set {
		unsigned int group[AE5_CA0113_OUT_SET_COMMANDS];
		unsigned int target[AE5_CA0113_OUT_SET_COMMANDS];
		unsigned int vals[AE5_CA0113_OUT_SET_COMMANDS];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 662 */;
	const struct hda_pcm_stream cocci_id/* sound/pci/hda/patch_ca0132.c 6567 */;
	const struct ct_dsp_volume_ctl cocci_id/* sound/pci/hda/patch_ca0132.c 649 */[];
	struct ct_dsp_volume_ctl {
		hda_nid_t vnid;
		int mid;
		unsigned int reqs[3];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 643 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_ca0132.c 6298 */[];
	const struct snd_pcm_chmap_elem *cocci_id/* sound/pci/hda/patch_ca0132.c 6281 */;
	struct snd_pcm_chmap *cocci_id/* sound/pci/hda/patch_ca0132.c 6280 */;
	struct hda_pcm_stream *cocci_id/* sound/pci/hda/patch_ca0132.c 6278 */;
	struct hda_pcm *cocci_id/* sound/pci/hda/patch_ca0132.c 6275 */;
	const struct snd_pcm_chmap_elem cocci_id/* sound/pci/hda/patch_ca0132.c 6258 */[];
	const char *const cocci_id/* sound/pci/hda/patch_ca0132.c 6249 */[];
	struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_ca0132.c 6123 */;
	struct hda_codec *cocci_id/* sound/pci/hda/patch_ca0132.c 6121 */;
	int cocci_id/* sound/pci/hda/patch_ca0132.c 6121 */;
	char cocci_id/* sound/pci/hda/patch_ca0132.c 6094 */[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
	struct ca0132_spec *cocci_id/* sound/pci/hda/patch_ca0132.c 6093 */;
	const char *cocci_id/* sound/pci/hda/patch_ca0132.c 6091 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_ca0132.c 6090 */;
	const struct ca0132_alt_out_set cocci_id/* sound/pci/hda/patch_ca0132.c 602 */[];
	unsigned int __user *cocci_id/* sound/pci/hda/patch_ca0132.c 6017 */;
	struct ca0132_alt_out_set {
		char *name;
		unsigned char commands;
		unsigned int mids[ALT_OUT_SET_MAX_COMMANDS];
		unsigned int reqs[ALT_OUT_SET_MAX_COMMANDS];
		unsigned int vals[ALT_OUT_SET_MAX_COMMANDS];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 594 */;
	unsigned int cocci_id/* sound/pci/hda/patch_ca0132.c 5361 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/hda/patch_ca0132.c 5346 */;
	struct snd_kcontrol *cocci_id/* sound/pci/hda/patch_ca0132.c 5345 */;
	char *cocci_id/* sound/pci/hda/patch_ca0132.c 5330 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/hda/patch_ca0132.c 5328 */;
	const struct ct_eq_preset cocci_id/* sound/pci/hda/patch_ca0132.c 529 */[];
	long *cocci_id/* sound/pci/hda/patch_ca0132.c 5250 */;
	const struct ct_eq cocci_id/* sound/pci/hda/patch_ca0132.c 521 */;
	struct ct_eq_preset {
		char *name;
		unsigned int vals[EQ_PRESET_MAX_PARAM_COUNT];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 516 */;
	const unsigned int *cocci_id/* sound/pci/hda/patch_ca0132.c 5131 */;
	unsigned long cocci_id/* sound/pci/hda/patch_ca0132.c 5108 */;
	struct ct_eq {
		char *name;
		hda_nid_t nid;
		int mid;
		int reqs[EQ_PRESET_MAX_PARAM_COUNT];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 509 */;
	long cocci_id/* sound/pci/hda/patch_ca0132.c 5038 */;
	hda_nid_t *cocci_id/* sound/pci/hda/patch_ca0132.c 4801 */;
	int cocci_id/* sound/pci/hda/patch_ca0132.c 4475 */(struct hda_codec *codec);
	void cocci_id/* sound/pci/hda/patch_ca0132.c 4473 */(struct hda_codec *codec,
							     unsigned int oldval);
	void cocci_id/* sound/pci/hda/patch_ca0132.c 4471 */(struct hda_codec *codec,
							     int enable);
	struct hda_jack_tbl *cocci_id/* sound/pci/hda/patch_ca0132.c 4457 */;
	struct ca0132_spec cocci_id/* sound/pci/hda/patch_ca0132.c 4456 */;
	struct work_struct *cocci_id/* sound/pci/hda/patch_ca0132.c 4453 */;
	const struct ct_voicefx_preset cocci_id/* sound/pci/hda/patch_ca0132.c 432 */[];
	const struct ct_voicefx cocci_id/* sound/pci/hda/patch_ca0132.c 425 */;
	struct ct_voicefx_preset {
		char *name;
		unsigned int vals[VOICEFX_MAX_PARAM_COUNT];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 420 */;
	int cocci_id/* sound/pci/hda/patch_ca0132.c 4154 */(struct hda_codec *codec,
							    hda_nid_t nid,
							    long val);
	int cocci_id/* sound/pci/hda/patch_ca0132.c 4152 */(struct hda_codec *codec,
							    long val);
	struct ct_voicefx {
		char *name;
		hda_nid_t nid;
		int mid;
		int reqs[VOICEFX_MAX_PARAM_COUNT];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 413 */;
	unsigned int cocci_id/* sound/pci/hda/patch_ca0132.c 3821 */[];
	struct snd_pcm_runtime *cocci_id/* sound/pci/hda/patch_ca0132.c 3625 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/hda/patch_ca0132.c 3608 */;
	enum r3di_dsp_status cocci_id/* sound/pci/hda/patch_ca0132.c 3465 */;
	enum r3di_out_select cocci_id/* sound/pci/hda/patch_ca0132.c 3445 */;
	enum r3di_mic_select cocci_id/* sound/pci/hda/patch_ca0132.c 3425 */;
	enum r3di_dsp_status{R3DI_DSP_DOWNLOADING=0, R3DI_DSP_DOWNLOADED=1,} cocci_id/* sound/pci/hda/patch_ca0132.c 3416 */;
	enum r3di_out_select{R3DI_HEADPHONE_OUT=0, R3DI_LINE_OUT=1,} cocci_id/* sound/pci/hda/patch_ca0132.c 3410 */;
	enum r3di_mic_select{R3DI_REAR_MIC=0, R3DI_FRONT_MIC=1,} cocci_id/* sound/pci/hda/patch_ca0132.c 3403 */;
	enum r3di_gpio_bit{R3DI_MIC_SELECT_BIT=1, R3DI_OUT_SELECT_BIT=2, R3DI_GPIO_DSP_DOWNLOADING=3, R3DI_GPIO_DSP_DOWNLOADED=4,} cocci_id/* sound/pci/hda/patch_ca0132.c 3386 */;
	unsigned short cocci_id/* sound/pci/hda/patch_ca0132.c 3237 */;
	bool cocci_id/* sound/pci/hda/patch_ca0132.c 3234 */;
	const struct ct_tuning_ctl cocci_id/* sound/pci/hda/patch_ca0132.c 310 */[];
	struct ct_tuning_ctl {
		char name[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
		hda_nid_t parent_nid;
		hda_nid_t nid;
		int mid;
		int req;
		int direct;
		unsigned int def_val;
	} cocci_id/* sound/pci/hda/patch_ca0132.c 300 */;
	enum{

#define

TUNING_CTL_START_NID

0xC0


WEDGE_ANGLE=TUNING_CTL_START_NID, SVM_LEVEL, EQUALIZER_BAND_0, EQUALIZER_BAND_1, EQUALIZER_BAND_2, EQUALIZER_BAND_3, EQUALIZER_BAND_4, EQUALIZER_BAND_5, EQUALIZER_BAND_6, EQUALIZER_BAND_7, EQUALIZER_BAND_8, EQUALIZER_BAND_9, TUNING_CTL_END_NID

#define

TUNING_CTLS_COUNT

(

TUNING_CTL_END_NID

-

TUNING_CTL_START_NID

)


,} cocci_id/* sound/pci/hda/patch_ca0132.c 282 */;
	u32 *cocci_id/* sound/pci/hda/patch_ca0132.c 2755 */;
	size_t cocci_id/* sound/pci/hda/patch_ca0132.c 2721 */;
	const u32 cocci_id/* sound/pci/hda/patch_ca0132.c 2704 */;
	struct dsp_image_seg {
		u32 magic;
		u32 chip_addr;
		u32 count;
		u32 data[0];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 2696 */;
	struct dma_engine *cocci_id/* sound/pci/hda/patch_ca0132.c 2668 */;
	unsigned char *cocci_id/* sound/pci/hda/patch_ca0132.c 2668 */;
	enum dma_state cocci_id/* sound/pci/hda/patch_ca0132.c 2644 */;
	unsigned short *cocci_id/* sound/pci/hda/patch_ca0132.c 2609 */;
	enum dma_state{DMA_STATE_STOP=0, DMA_STATE_RUN=1,} cocci_id/* sound/pci/hda/patch_ca0132.c 2601 */;
	struct dma_engine {
		struct hda_codec *codec;
		unsigned short m_converter_format;
		struct snd_dma_buffer *dmab;
		unsigned int buf_size;
	} cocci_id/* sound/pci/hda/patch_ca0132.c 2593 */;
	const unsigned short cocci_id/* sound/pci/hda/patch_ca0132.c 2549 */;
	bool *cocci_id/* sound/pci/hda/patch_ca0132.c 2153 */;
	struct scp_msg cocci_id/* sound/pci/hda/patch_ca0132.c 1940 */;
	void *cocci_id/* sound/pci/hda/patch_ca0132.c 1937 */;
	const void *cocci_id/* sound/pci/hda/patch_ca0132.c 1936 */;
	struct scp_msg *cocci_id/* sound/pci/hda/patch_ca0132.c 1859 */;
	const struct ct_effect cocci_id/* sound/pci/hda/patch_ca0132.c 183 */[EFFECTS_COUNT];
	struct scp_msg {
		unsigned int hdr;
		unsigned int data[SCP_MAX_DATA_WORDS];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 1805 */;
	struct ct_effect {
		char name[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
		hda_nid_t nid;
		int mid;
		int reqs[EFFECT_VALS_MAX_COUNT];
		int direct;
		int params;
		unsigned int def_vals[EFFECT_VALS_MAX_COUNT];
	} cocci_id/* sound/pci/hda/patch_ca0132.c 169 */;
	const unsigned int cocci_id/* sound/pci/hda/patch_ca0132.c 158 */[];
	enum ca0132_sample_rate cocci_id/* sound/pci/hda/patch_ca0132.c 1562 */;
	enum control_param_id cocci_id/* sound/pci/hda/patch_ca0132.c 1460 */;
	enum control_flag_id cocci_id/* sound/pci/hda/patch_ca0132.c 1444 */;
	unsigned int *cocci_id/* sound/pci/hda/patch_ca0132.c 1419 */;
	u32 cocci_id/* sound/pci/hda/patch_ca0132.c 1395 */;
	const unsigned int cocci_id/* sound/pci/hda/patch_ca0132.c 1346 */;
	const u32 *cocci_id/* sound/pci/hda/patch_ca0132.c 1294 */;
	unsigned char cocci_id/* sound/pci/hda/patch_ca0132.c 1209 */;
	const struct snd_pci_quirk cocci_id/* sound/pci/hda/patch_ca0132.c 1171 */[];
	const struct hda_pintbl cocci_id/* sound/pci/hda/patch_ca0132.c 1142 */[];
	enum{QUIRK_NONE, QUIRK_ALIENWARE, QUIRK_ALIENWARE_M17XR4, QUIRK_SBZ, QUIRK_ZXR, QUIRK_ZXR_DBPRO, QUIRK_R3DI, QUIRK_R3D, QUIRK_AE5,} cocci_id/* sound/pci/hda/patch_ca0132.c 1058 */;
	enum{

#define

VNODE_START_NID

0x80


VNID_SPK=VNODE_START_NID, VNID_MIC, VNID_HP_SEL, VNID_AMIC1_SEL, VNID_HP_ASEL, VNID_AMIC1_ASEL, VNODE_END_NID,

#define

VNODES_COUNT

(

VNODE_END_NID

-

VNODE_START_NID

)





#define

EFFECT_START_NID

0x90




#define

OUT_EFFECT_START_NID

EFFECT_START_NID


 SURROUND=OUT_EFFECT_START_NID, CRYSTALIZER, DIALOG_PLUS, SMART_VOLUME, X_BASS, EQUALIZER, OUT_EFFECT_END_NID,

#define

OUT_EFFECTS_COUNT

(

OUT_EFFECT_END_NID

-

OUT_EFFECT_START_NID

)





#define

IN_EFFECT_START_NID

OUT_EFFECT_END_NID


 ECHO_CANCELLATION=IN_EFFECT_START_NID, VOICE_FOCUS, MIC_SVM, NOISE_REDUCTION, IN_EFFECT_END_NID,

#define

IN_EFFECTS_COUNT

(

IN_EFFECT_END_NID

-

IN_EFFECT_START_NID

)


 VOICEFX=IN_EFFECT_END_NID, PLAY_ENHANCEMENT, CRYSTAL_VOICE, EFFECT_END_NID, OUTPUT_SOURCE_ENUM, INPUT_SOURCE_ENUM, XBASS_XOVER, EQ_PRESET_ENUM, SMART_VOLUME_ENUM, MIC_BOOST_ENUM, AE5_HEADPHONE_GAIN_ENUM, AE5_SOUND_FILTER_ENUM, ZXR_HEADPHONE_GAIN

#define

EFFECTS_COUNT

(

EFFECT_END_NID

-

EFFECT_START_NID

)


,} cocci_id/* sound/pci/hda/patch_ca0132.c 104 */;
}

cocci_test_suite() {
	enum{PGA_MUX_NONE=0, PGA_MUX_AIN0, PGA_MUX_AIN1, PGA_MUX_AIN2, PGA_MUX_MASK=0x3,} cocci_id/* sound/soc/codecs/mt6358.c 814 */;
	struct mt6358_priv {
		struct device *dev;
		struct regmap *regmap;
		unsigned int dl_rate;
		unsigned int ul_rate;
		int ana_gain[AUDIO_ANALOG_VOLUME_TYPE_MAX];
		unsigned int mux_select[MUX_NUM];
		int dev_counter[DEVICE_NUM];
		int mtkaif_protocol;
		struct regulator *avdd_reg;
		int wov_enabled;
	} cocci_id/* sound/soc/codecs/mt6358.c 81 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/mt6358.c 795 */;
	int cocci_id/* sound/soc/codecs/mt6358.c 781 */[];
	const char *const cocci_id/* sound/soc/codecs/mt6358.c 777 */[];
	enum{ADC_MUX_IDLE=0, ADC_MUX_AIN0, ADC_MUX_PREAMPLIFIER, ADC_MUX_IDLE1, ADC_MUX_MASK=0x3,} cocci_id/* sound/soc/codecs/mt6358.c 769 */;
	enum{CH_L=0, CH_R, NUM_CH,} cocci_id/* sound/soc/codecs/mt6358.c 73 */;
	enum{MIC_TYPE_MUX_IDLE=0, MIC_TYPE_MUX_ACC, MIC_TYPE_MUX_DMIC, MIC_TYPE_MUX_DCC, MIC_TYPE_MUX_DCC_ECM_DIFF, MIC_TYPE_MUX_DCC_ECM_SINGLE, MIC_TYPE_MUX_MASK=0x7,} cocci_id/* sound/soc/codecs/mt6358.c 726 */;
	enum{RCV_MUX_OPEN=0, RCV_MUX_MUTE, RCV_MUX_VOICE_PLAYBACK, RCV_MUX_TEST_MODE, RCV_MUX_MASK=0x3,} cocci_id/* sound/soc/codecs/mt6358.c 666 */;
	enum{HP_MUX_OPEN=0, HP_MUX_HPSPK, HP_MUX_HP, HP_MUX_TEST_MODE, HP_MUX_HP_IMPEDANCE, HP_MUX_MASK=0x7,} cocci_id/* sound/soc/codecs/mt6358.c 614 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/mt6358.c 572 */[];
	enum{SUPPLY_SEQ_CLK_BUF, SUPPLY_SEQ_AUD_GLB, SUPPLY_SEQ_CLKSQ, SUPPLY_SEQ_VOW_AUD_LPW, SUPPLY_SEQ_AUD_VOW, SUPPLY_SEQ_VOW_CLK, SUPPLY_SEQ_VOW_LDO, SUPPLY_SEQ_TOP_CK, SUPPLY_SEQ_TOP_CK_LAST, SUPPLY_SEQ_AUD_TOP, SUPPLY_SEQ_AUD_TOP_LAST, SUPPLY_SEQ_AFE, SUPPLY_SEQ_ADC_SUPPLY,} cocci_id/* sound/soc/codecs/mt6358.c 55 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/mt6358.c 541 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/mt6358.c 540 */;
	void cocci_id/* sound/soc/codecs/mt6358.c 469 */(struct mt6358_priv *priv);
	enum{DEVICE_HP, DEVICE_LO, DEVICE_RCV, DEVICE_MIC1, DEVICE_MIC2, DEVICE_NUM,} cocci_id/* sound/soc/codecs/mt6358.c 45 */;
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/mt6358.c 424 */;
	int cocci_id/* sound/soc/codecs/mt6358.c 384 */;
	bool cocci_id/* sound/soc/codecs/mt6358.c 346 */;
	enum{MUX_ADC_L, MUX_ADC_R, MUX_PGA_L, MUX_PGA_R, MUX_MIC_TYPE, MUX_HP_L, MUX_HP_R, MUX_NUM,} cocci_id/* sound/soc/codecs/mt6358.c 34 */;
	enum{DL_GAIN_8DB=0, DL_GAIN_0DB=8, DL_GAIN_N_1DB=9, DL_GAIN_N_10DB=18, DL_GAIN_N_40DB=0x1f,} cocci_id/* sound/soc/codecs/mt6358.c 313 */;
	struct platform_driver cocci_id/* sound/soc/codecs/mt6358.c 2463 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/mt6358.c 2457 */[];
	struct mt6358_priv cocci_id/* sound/soc/codecs/mt6358.c 2435 */;
	struct mt6397_chip *cocci_id/* sound/soc/codecs/mt6358.c 2432 */;
	struct platform_device *cocci_id/* sound/soc/codecs/mt6358.c 2429 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/mt6358.c 2419 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/mt6358.c 2341 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/mt6358.c 2330 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/mt6358.c 2312 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/mt6358.c 2310 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/mt6358.c 2309 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/mt6358.c 2308 */;
	enum{AUDIO_ANALOG_VOLUME_HSOUTL, AUDIO_ANALOG_VOLUME_HSOUTR, AUDIO_ANALOG_VOLUME_HPOUTL, AUDIO_ANALOG_VOLUME_HPOUTR, AUDIO_ANALOG_VOLUME_LINEOUTL, AUDIO_ANALOG_VOLUME_LINEOUTR, AUDIO_ANALOG_VOLUME_MICAMP1, AUDIO_ANALOG_VOLUME_MICAMP2, AUDIO_ANALOG_VOLUME_TYPE_MAX,} cocci_id/* sound/soc/codecs/mt6358.c 22 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/mt6358.c 2195 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/mt6358.c 2015 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/mt6358.c 1932 */;
	unsigned int cocci_id/* sound/soc/codecs/mt6358.c 1753 */;
	struct mt6358_priv *cocci_id/* sound/soc/codecs/mt6358.c 146 */;
	void cocci_id/* sound/soc/codecs/mt6358.c 146 */;
}

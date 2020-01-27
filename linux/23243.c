cocci_test_suite() {
	unsigned short cocci_id/* sound/soc/codecs/twl4030.c 923 */;
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/twl4030.c 887 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/twl4030.c 885 */;
	struct twl4030_codec_data *cocci_id/* sound/soc/codecs/twl4030.c 809 */;
	struct twl4030_priv *cocci_id/* sound/soc/codecs/twl4030.c 808 */;
	unsigned int cocci_id/* sound/soc/codecs/twl4030.c 699 */;
	unsigned int cocci_id/* sound/soc/codecs/twl4030.c 697 */[];
	u8 cocci_id/* sound/soc/codecs/twl4030.c 669 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/twl4030.c 668 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/twl4030.c 666 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/twl4030.c 665 */;
	int cocci_id/* sound/soc/codecs/twl4030.c 665 */;
	unsigned char cocci_id/* sound/soc/codecs/twl4030.c 580 */;
	void cocci_id/* sound/soc/codecs/twl4030.c 578 */;
	const  cocci_id/* sound/soc/codecs/twl4030.c 514 */(twl4030_dapm_dbypass_tlv,
							    0,1,
							    TLV_DB_SCALE_ITEM(-3000,600,1),
							    2,3,
							    TLV_DB_SCALE_ITEM(-2400,0,0),
							    4,7,
							    TLV_DB_SCALE_ITEM(-1800,600,0));
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/twl4030.c 498 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/twl4030.c 454 */[];
	struct twl4030_priv {
		unsigned int codec_powered;
		unsigned int apll_enabled;
		struct snd_pcm_substream *master_substream;
		struct snd_pcm_substream *slave_substream;
		unsigned int configured;
		unsigned int rate;
		unsigned int sample_bits;
		unsigned int channels;
		unsigned int sysclk;
		u8 hsl_enabled,hsr_enabled;
		u8 earpiece_enabled;
		u8 predrivel_enabled,predriver_enabled;
		u8 carkitl_enabled,carkitr_enabled;
		u8 ctl_cache[TWL4030_REG_PRECKR_CTL - TWL4030_REG_EAR_CTL + 1];
		struct twl4030_codec_data *pdata;
	} cocci_id/* sound/soc/codecs/twl4030.c 38 */;
	struct twl4030_codec_data cocci_id/* sound/soc/codecs/twl4030.c 226 */;
	struct platform_driver cocci_id/* sound/soc/codecs/twl4030.c 2205 */;
	struct platform_device *cocci_id/* sound/soc/codecs/twl4030.c 2196 */;
	struct device_node *cocci_id/* sound/soc/codecs/twl4030.c 219 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/twl4030.c 2179 */;
	struct twl4030_priv cocci_id/* sound/soc/codecs/twl4030.c 2157 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/twl4030.c 2116 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/twl4030.c 2098 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/twl4030.c 1691 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/twl4030.c 1690 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/twl4030.c 1589 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/twl4030.c 1569 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/twl4030.c 1369 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/twl4030.c 1148 */[];
	const char *cocci_id/* sound/soc/codecs/twl4030.c 1019 */[];
	bool cocci_id/* sound/soc/codecs/twl4030.c 100 */;
}

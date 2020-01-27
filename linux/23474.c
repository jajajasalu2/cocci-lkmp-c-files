cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cpcap.c 810 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cpcap.c 653 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cpcap.c 637 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cpcap.c 629 */;
	struct soc_enum *cocci_id/* sound/soc/codecs/cpcap.c 567 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cpcap.c 565 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/cpcap.c 530 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cpcap.c 529 */;
	const char *const cocci_id/* sound/soc/codecs/cpcap.c 329 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/cpcap.c 256 */;
	struct cpcap_audio {
		struct snd_soc_component *component;
		struct regmap *regmap;
		u16 vendor;
		int codec_clk_id;
		int codec_freq;
		int codec_format;
	} cocci_id/* sound/soc/codecs/cpcap.c 245 */;
	enum cpcap_dai{CPCAP_DAI_HIFI, CPCAP_DAI_VOICE,} cocci_id/* sound/soc/codecs/cpcap.c 240 */;
	const struct cpcap_reg_info cocci_id/* sound/soc/codecs/cpcap.c 223 */[];
	struct cpcap_reg_info {
		u16 reg;
		u16 mask;
		u16 val;
	} cocci_id/* sound/soc/codecs/cpcap.c 217 */;
	struct platform_driver cocci_id/* sound/soc/codecs/cpcap.c 1551 */;
	struct device_node *cocci_id/* sound/soc/codecs/cpcap.c 1542 */;
	struct platform_device *cocci_id/* sound/soc/codecs/cpcap.c 1540 */;
	struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cpcap.c 1526 */;
	struct cpcap_audio *cocci_id/* sound/soc/codecs/cpcap.c 1466 */;
	bool cocci_id/* sound/soc/codecs/cpcap.c 1464 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cpcap.c 1463 */;
	int cocci_id/* sound/soc/codecs/cpcap.c 1463 */;
	u16 cocci_id/* sound/soc/codecs/cpcap.c 1433 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cpcap.c 1397 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cpcap.c 1236 */;
	const u16 cocci_id/* sound/soc/codecs/cpcap.c 1143 */;
	struct device *cocci_id/* sound/soc/codecs/cpcap.c 1142 */;
	unsigned int cocci_id/* sound/soc/codecs/cpcap.c 1138 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cpcap.c 1116 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cpcap.c 1115 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cpcap.c 1114 */;
	enum cpcap_dai cocci_id/* sound/soc/codecs/cpcap.c 1035 */;
}

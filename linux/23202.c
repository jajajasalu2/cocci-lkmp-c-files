cocci_test_suite() {
	const struct _coeff_div cocci_id/* sound/soc/codecs/wm8753.c 798 */[];
	struct _coeff_div {
		u32 mclk;
		u32 rate;
		u8 sr:5;
		u8 usb:1;
	} cocci_id/* sound/soc/codecs/wm8753.c 790 */;
	struct _pll_div cocci_id/* sound/soc/codecs/wm8753.c 765 */;
	long long cocci_id/* sound/soc/codecs/wm8753.c 722 */;
	u64 cocci_id/* sound/soc/codecs/wm8753.c 705 */;
	struct _pll_div *cocci_id/* sound/soc/codecs/wm8753.c 702 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8753.c 702 */;
	void cocci_id/* sound/soc/codecs/wm8753.c 702 */;
	struct _pll_div {
		u32 div2:1;
		u32 n:4;
		u32 k:24;
	} cocci_id/* sound/soc/codecs/wm8753.c 692 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm8753.c 63 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8753.c 537 */[];
	int cocci_id/* sound/soc/codecs/wm8753.c 53 */(struct snd_soc_component *component,
						       unsigned int fmt);
	int cocci_id/* sound/soc/codecs/wm8753.c 49 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8753.c 460 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8753.c 429 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8753.c 417 */;
	const  cocci_id/* sound/soc/codecs/wm8753.c 268 */(out_tlv,
							   
							   0,48,
							   TLV_DB_SCALE_ITEM(-25500,0,0),
							   48,127,
							   TLV_DB_SCALE_ITEM(-7300,100,0));
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8753.c 227 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8753.c 225 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8753.c 224 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/wm8753.c 191 */[];
	void __exit cocci_id/* sound/soc/codecs/wm8753.c 1617 */;
	const char *cocci_id/* sound/soc/codecs/wm8753.c 160 */[];
	int __init cocci_id/* sound/soc/codecs/wm8753.c 1596 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8753.c 1586 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8753.c 1580 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8753.c 1552 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8753.c 1551 */;
	struct spi_driver cocci_id/* sound/soc/codecs/wm8753.c 1541 */;
	struct spi_device *cocci_id/* sound/soc/codecs/wm8753.c 1513 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8753.c 1500 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8753.c 1494 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8753.c 1477 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8753.c 1399 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8753.c 1381 */;
	struct wm8753_priv {
		struct regmap *regmap;
		unsigned int sysclk;
		unsigned int pcmclk;
		unsigned int voice_fmt;
		unsigned int hifi_fmt;
		int dai_func;
		struct delayed_work charge_work;
	} cocci_id/* sound/soc/codecs/wm8753.c 136 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8753.c 1329 */;
	struct wm8753_priv cocci_id/* sound/soc/codecs/wm8753.c 1322 */;
	struct wm8753_priv *cocci_id/* sound/soc/codecs/wm8753.c 1321 */;
	struct work_struct *cocci_id/* sound/soc/codecs/wm8753.c 1319 */;
	bool cocci_id/* sound/soc/codecs/wm8753.c 130 */;
	struct device *cocci_id/* sound/soc/codecs/wm8753.c 130 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8753.c 1257 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8753.c 1150 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8753.c 1149 */;
	u16 cocci_id/* sound/soc/codecs/wm8753.c 1052 */;
}

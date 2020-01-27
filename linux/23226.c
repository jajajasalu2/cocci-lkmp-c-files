cocci_test_suite() {
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8985.c 948 */;
	struct pll_div cocci_id/* sound/soc/codecs/wm8985.c 888 */;
	unsigned long int cocci_id/* sound/soc/codecs/wm8985.c 851 */;
	u64 cocci_id/* sound/soc/codecs/wm8985.c 850 */;
	struct pll_div *cocci_id/* sound/soc/codecs/wm8985.c 847 */;
	struct pll_div {
		u32 div2:1;
		u32 n:4;
		u32 k:24;
	} cocci_id/* sound/soc/codecs/wm8985.c 840 */;
	u16 cocci_id/* sound/soc/codecs/wm8985.c 753 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8985.c 747 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8985.c 746 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8985.c 652 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8985.c 593 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8985.c 592 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8985.c 590 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8985.c 589 */;
	int cocci_id/* sound/soc/codecs/wm8985.c 589 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8985.c 567 */;
	struct wm8985_priv *cocci_id/* sound/soc/codecs/wm8985.c 566 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8985.c 556 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8985.c 500 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm8985.c 48 */[];
	enum wm8985_type{WM8985, WM8758,} cocci_id/* sound/soc/codecs/wm8985.c 43 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8985.c 422 */[];
	const char *cocci_id/* sound/soc/codecs/wm8985.c 36 */[WM8985_NUM_SUPPLIES];
	const char *cocci_id/* sound/soc/codecs/wm8985.c 237 */[];
	int cocci_id/* sound/soc/codecs/wm8985.c 214 */(struct snd_kcontrol *kcontrol,
							struct snd_ctl_elem_value *ucontrol);
	const int cocci_id/* sound/soc/codecs/wm8985.c 210 */[];
	const struct {
		int div;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8985.c 194 */[];
	struct wm8985_priv {
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8985_NUM_SUPPLIES];
		enum wm8985_type dev_type;
		unsigned int sysclk;
		unsigned int bclk;
	} cocci_id/* sound/soc/codecs/wm8985.c 186 */;
	void __exit cocci_id/* sound/soc/codecs/wm8985.c 1234 */;
	void cocci_id/* sound/soc/codecs/wm8985.c 1234 */;
	int __init cocci_id/* sound/soc/codecs/wm8985.c 1212 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8985.c 1203 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8985.c 1196 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8985.c 1170 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8985.c 1169 */;
	struct spi_driver cocci_id/* sound/soc/codecs/wm8985.c 1160 */;
	struct spi_device *cocci_id/* sound/soc/codecs/wm8985.c 1134 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8985.c 1121 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8985.c 1105 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8985.c 1085 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8985.c 1074 */;
	bool cocci_id/* sound/soc/codecs/wm8985.c 105 */;
	struct device *cocci_id/* sound/soc/codecs/wm8985.c 105 */;
	size_t cocci_id/* sound/soc/codecs/wm8985.c 1028 */;
}

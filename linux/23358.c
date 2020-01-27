cocci_test_suite() {
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8955.c 997 */[];
	struct wm8955_priv cocci_id/* sound/soc/codecs/wm8955.c 976 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8955.c 971 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8955.c 970 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8955.c 957 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8955.c 941 */;
	struct wm8955_pdata *cocci_id/* sound/soc/codecs/wm8955.c 869 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8955.c 854 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8955.c 847 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8955.c 764 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8955.c 748 */;
	u16 cocci_id/* sound/soc/codecs/wm8955.c 671 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8955.c 589 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8955.c 588 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8955.c 543 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8955.c 505 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm8955.c 49 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8955.c 484 */[];
	const char *cocci_id/* sound/soc/codecs/wm8955.c 418 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8955.c 388 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8955.c 387 */;
	struct wm8955_priv {
		struct regmap *regmap;
		unsigned int mclk_rate;
		int deemph;
		int fs;
		struct regulator_bulk_data supplies[WM8955_NUM_SUPPLIES];
	} cocci_id/* sound/soc/codecs/wm8955.c 38 */;
	int cocci_id/* sound/soc/codecs/wm8955.c 358 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8955.c 330 */;
	const char *cocci_id/* sound/soc/codecs/wm8955.c 30 */[WM8955_NUM_SUPPLIES];
	struct pll_factors cocci_id/* sound/soc/codecs/wm8955.c 249 */;
	struct wm8955_priv *cocci_id/* sound/soc/codecs/wm8955.c 244 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8955.c 242 */;
	int cocci_id/* sound/soc/codecs/wm8955.c 242 */;
	struct {
		int mclk;
		int fs;
		int usb;
		int sr;
	} cocci_id/* sound/soc/codecs/wm8955.c 195 */[];
	long long cocci_id/* sound/soc/codecs/wm8955.c 175 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8955.c 147 */;
	u64 cocci_id/* sound/soc/codecs/wm8955.c 146 */;
	struct pll_factors *cocci_id/* sound/soc/codecs/wm8955.c 144 */;
	struct device *cocci_id/* sound/soc/codecs/wm8955.c 143 */;
	struct pll_factors {
		int n;
		int k;
		int outdiv;
	} cocci_id/* sound/soc/codecs/wm8955.c 133 */;
	bool cocci_id/* sound/soc/codecs/wm8955.c 118 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8955.c 1003 */;
}

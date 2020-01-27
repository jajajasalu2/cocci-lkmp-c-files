cocci_test_suite() {
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8580.c 999 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8580.c 998 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8580.c 991 */[];
	const struct wm8580_driver_data cocci_id/* sound/soc/codecs/wm8580.c 983 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8580.c 971 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8580.c 955 */;
	void cocci_id/* sound/soc/codecs/wm8580.c 948 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8580.c 909 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8580.c 880 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8580.c 872 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8580.c 821 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8580.c 805 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8580.c 803 */;
	u16 cocci_id/* sound/soc/codecs/wm8580.c 540 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8580.c 535 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8580.c 534 */;
	const int cocci_id/* sound/soc/codecs/wm8580.c 527 */[];
	struct _pll_div cocci_id/* sound/soc/codecs/wm8580.c 467 */;
	struct pll_state *cocci_id/* sound/soc/codecs/wm8580.c 466 */;
	long long cocci_id/* sound/soc/codecs/wm8580.c 445 */;
	u64 cocci_id/* sound/soc/codecs/wm8580.c 403 */;
	struct _pll_div *cocci_id/* sound/soc/codecs/wm8580.c 400 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8580.c 400 */;
	int cocci_id/* sound/soc/codecs/wm8580.c 400 */;
	struct {
		unsigned int div;
		unsigned int freqmode;
		unsigned int postscale;
	} cocci_id/* sound/soc/codecs/wm8580.c 385 */[];
	struct _pll_div {
		u32 prescale:1;
		u32 postscale:1;
		u32 freqmode:2;
		u32 n:4;
		u32 k:24;
	} cocci_id/* sound/soc/codecs/wm8580.c 373 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8580.c 353 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8580.c 328 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8580.c 284 */[];
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/wm8580.c 259 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8580.c 257 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8580.c 256 */;
	struct wm8580_priv {
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8580_NUM_SUPPLIES];
		struct pll_state a;
		struct pll_state b;
		const struct wm8580_driver_data *drvdata;
		int sysclk[2];
	} cocci_id/* sound/soc/codecs/wm8580.c 245 */;
	struct wm8580_driver_data {
		int num_dacs;
	} cocci_id/* sound/soc/codecs/wm8580.c 240 */;
	const char *cocci_id/* sound/soc/codecs/wm8580.c 234 */[WM8580_NUM_SUPPLIES];
	struct pll_state {
		unsigned int in;
		unsigned int out;
	} cocci_id/* sound/soc/codecs/wm8580.c 228 */;
	bool cocci_id/* sound/soc/codecs/wm8580.c 218 */;
	struct device *cocci_id/* sound/soc/codecs/wm8580.c 218 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm8580.c 162 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8580.c 1048 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8580.c 1041 */[];
	struct wm8580_priv cocci_id/* sound/soc/codecs/wm8580.c 1005 */;
	struct wm8580_priv *cocci_id/* sound/soc/codecs/wm8580.c 1002 */;
	const struct of_device_id *cocci_id/* sound/soc/codecs/wm8580.c 1001 */;
}

cocci_test_suite() {
	const struct {
		int value;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8523.c 99 */[WM8523_NUM_RATES];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8523.c 94 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8523.c 88 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8523.c 77 */[];
	const char *cocci_id/* sound/soc/codecs/wm8523.c 69 */[];
	bool cocci_id/* sound/soc/codecs/wm8523.c 56 */;
	struct device *cocci_id/* sound/soc/codecs/wm8523.c 56 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8523.c 527 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8523.c 521 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm8523.c 46 */[];
	struct wm8523_priv cocci_id/* sound/soc/codecs/wm8523.c 453 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8523.c 450 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8523.c 447 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8523.c 446 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8523.c 434 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8523.c 428 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8523.c 412 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8523.c 384 */;
	struct wm8523_priv {
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8523_NUM_SUPPLIES];
		unsigned int sysclk;
		unsigned int rate_constraint_list[WM8523_NUM_RATES];
		struct snd_pcm_hw_constraint_list rate_constraint;
	} cocci_id/* sound/soc/codecs/wm8523.c 38 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8523.c 377 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8523.c 317 */;
	const char *cocci_id/* sound/soc/codecs/wm8523.c 30 */[WM8523_NUM_SUPPLIES];
	u16 cocci_id/* sound/soc/codecs/wm8523.c 150 */;
	struct wm8523_priv *cocci_id/* sound/soc/codecs/wm8523.c 148 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8523.c 147 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8523.c 145 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8523.c 144 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8523.c 143 */;
	int cocci_id/* sound/soc/codecs/wm8523.c 143 */;
	const struct {
		int value;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8523.c 112 */[];
}

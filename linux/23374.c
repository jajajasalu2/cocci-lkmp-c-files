cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/tas2562.c 577 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tas2562.c 571 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tas2562.c 565 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tas2562.c 535 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tas2562.c 534 */;
	struct device *cocci_id/* sound/soc/codecs/tas2562.c 513 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tas2562.c 499 */;
	const struct reg_default cocci_id/* sound/soc/codecs/tas2562.c 490 */[];
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/tas2562.c 478 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tas2562.c 463 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tas2562.c 456 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tas2562.c 439 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tas2562.c 428 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tas2562.c 415 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas2562.c 410 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas2562.c 402 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/tas2562.c 40 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tas2562.c 380 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tas2562.c 379 */;
	const char *const cocci_id/* sound/soc/codecs/tas2562.c 369 */[];
	struct tas2562_data *cocci_id/* sound/soc/codecs/tas2562.c 323 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tas2562.c 321 */;
	int cocci_id/* sound/soc/codecs/tas2562.c 321 */;
	struct tas2562_data {
		struct snd_soc_component *component;
		struct gpio_desc *sdz_gpio;
		struct regmap *regmap;
		struct device *dev;
		struct i2c_client *client;
		int v_sense_slot;
		int i_sense_slot;
	} cocci_id/* sound/soc/codecs/tas2562.c 29 */;
	u8 cocci_id/* sound/soc/codecs/tas2562.c 263 */;
	unsigned int cocci_id/* sound/soc/codecs/tas2562.c 259 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tas2562.c 240 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tas2562.c 239 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tas2562.c 238 */;
}

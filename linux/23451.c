cocci_test_suite() {
	const char *const cocci_id/* sound/soc/codecs/cs4265.c 97 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/cs4265.c 636 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs4265.c 630 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs4265.c 624 */[];
	struct cs4265_private cocci_id/* sound/soc/codecs/cs4265.c 579 */;
	unsigned int cocci_id/* sound/soc/codecs/cs4265.c 576 */;
	struct cs4265_private *cocci_id/* sound/soc/codecs/cs4265.c 574 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs4265.c 572 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs4265.c 571 */;
	bool cocci_id/* sound/soc/codecs/cs4265.c 56 */;
	struct device *cocci_id/* sound/soc/codecs/cs4265.c 56 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs4265.c 559 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs4265.c 545 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs4265.c 506 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs4265.c 499 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cs4265.c 467 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs4265.c 404 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs4265.c 403 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs4265.c 383 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs4265.c 381 */;
	int cocci_id/* sound/soc/codecs/cs4265.c 381 */;
	const struct reg_default cocci_id/* sound/soc/codecs/cs4265.c 37 */[];
	u8 cocci_id/* sound/soc/codecs/cs4265.c 345 */;
	struct cs4265_private {
		struct regmap *regmap;
		struct gpio_desc *reset_gpio;
		u8 format;
		u32 sysclk;
	} cocci_id/* sound/soc/codecs/cs4265.c 30 */;
	const struct cs4265_clk_para cocci_id/* sound/soc/codecs/cs4265.c 242 */[];
	struct cs4265_clk_para {
		u32 mclk;
		u32 rate;
		u8 fm_mode;
		u8 mclkdiv;
	} cocci_id/* sound/soc/codecs/cs4265.c 235 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs4265.c 206 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs4265.c 162 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs4265.c 130 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs4265.c 127 */;
}

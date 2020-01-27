cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/cs4270.c 732 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs4270.c 720 */[];
	struct cs4270_private cocci_id/* sound/soc/codecs/cs4270.c 667 */;
	struct gpio_desc *cocci_id/* sound/soc/codecs/cs4270.c 663 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs4270.c 660 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs4270.c 659 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs4270.c 638 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/cs4270.c 632 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs4270.c 612 */;
	void cocci_id/* sound/soc/codecs/cs4270.c 544 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs4270.c 474 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs4270.c 467 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs4270.c 453 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/cs4270.c 439 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cs4270.c 438 */;
	struct cs4270_private *cocci_id/* sound/soc/codecs/cs4270.c 409 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs4270.c 408 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs4270.c 406 */;
	int cocci_id/* sound/soc/codecs/cs4270.c 406 */;
	unsigned int cocci_id/* sound/soc/codecs/cs4270.c 332 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs4270.c 326 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs4270.c 325 */;
	bool cocci_id/* sound/soc/codecs/cs4270.c 213 */;
	struct device *cocci_id/* sound/soc/codecs/cs4270.c 213 */;
	struct cs4270_mode_ratios cocci_id/* sound/soc/codecs/cs4270.c 196 */[];
	struct cs4270_mode_ratios {
		unsigned int ratio;
		u8 speed_mode;
		u8 mclk;
	} cocci_id/* sound/soc/codecs/cs4270.c 190 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs4270.c 150 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs4270.c 142 */[];
	struct cs4270_private {
		struct regmap *regmap;
		unsigned int mclk;
		unsigned int mode;
		unsigned int slave_mode;
		unsigned int manual_mute;
		struct regulator_bulk_data supplies[ARRAY_SIZE(supply_names)];
	} cocci_id/* sound/soc/codecs/cs4270.c 131 */;
	const char *cocci_id/* sound/soc/codecs/cs4270.c 126 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/cs4270.c 116 */[];
}

cocci_test_suite() {
	bool cocci_id/* sound/soc/codecs/cs35l32.c 92 */;
	struct device *cocci_id/* sound/soc/codecs/cs35l32.c 92 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/cs35l32.c 567 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs35l32.c 560 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs35l32.c 553 */[];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/cs35l32.c 548 */;
	const struct reg_default cocci_id/* sound/soc/codecs/cs35l32.c 48 */[];
	struct cs35l32_private {
		struct regmap *regmap;
		struct snd_soc_component *component;
		struct regulator_bulk_data supplies[CS35L32_NUM_SUPPLIES];
		struct cs35l32_platform_data pdata;
		struct gpio_desc *reset_gpio;
	} cocci_id/* sound/soc/codecs/cs35l32.c 40 */;
	const char *const cocci_id/* sound/soc/codecs/cs35l32.c 35 */[CS35L32_NUM_SUPPLIES];
	struct cs35l32_private *cocci_id/* sound/soc/codecs/cs35l32.c 348 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs35l32.c 346 */;
	struct device_node *cocci_id/* sound/soc/codecs/cs35l32.c 269 */;
	struct cs35l32_platform_data *cocci_id/* sound/soc/codecs/cs35l32.c 267 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs35l32.c 266 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs35l32.c 253 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/cs35l32.c 242 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs35l32.c 227 */;
	unsigned int cocci_id/* sound/soc/codecs/cs35l32.c 202 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs35l32.c 201 */;
	int cocci_id/* sound/soc/codecs/cs35l32.c 201 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs35l32.c 185 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs35l32.c 180 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs35l32.c 151 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs35l32.c 136 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs35l32.c 120 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs35l32.c 113 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs35l32.c 104 */;
}

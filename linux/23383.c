cocci_test_suite() {
	unsigned char cocci_id/* sound/soc/codecs/cs42l51.c 92 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/cs42l51.c 794 */[];
	int __maybe_unused cocci_id/* sound/soc/codecs/cs42l51.c 784 */;
	struct cs42l51_private cocci_id/* sound/soc/codecs/cs42l51.c 689 */;
	struct regmap *cocci_id/* sound/soc/codecs/cs42l51.c 680 */;
	struct device *cocci_id/* sound/soc/codecs/cs42l51.c 680 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs42l51.c 667 */;
	unsigned long cocci_id/* sound/soc/codecs/cs42l51.c 64 */;
	bool cocci_id/* sound/soc/codecs/cs42l51.c 625 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/cs42l51.c 61 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cs42l51.c 60 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs42l51.c 560 */;
	struct cs42l51_private *cocci_id/* sound/soc/codecs/cs42l51.c 536 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cs42l51.c 535 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs42l51.c 532 */;
	int cocci_id/* sound/soc/codecs/cs42l51.c 532 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs42l51.c 513 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs42l51.c 506 */;
	struct device_node *cocci_id/* sound/soc/codecs/cs42l51.c 500 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs42l51.c 483 */;
	struct cs42l51_private {
		unsigned int mclk;
		struct clk *mclk_handle;
		unsigned int audio_mode;
		enum master_slave_mode func;
		struct regulator_bulk_data supplies[ARRAY_SIZE(cs42l51_supply_names)];
		struct gpio_desc *reset_gpio;
		struct regmap *regmap;
	} cocci_id/* sound/soc/codecs/cs42l51.c 44 */;
	struct cs42l51_ratios *cocci_id/* sound/soc/codecs/cs42l51.c 373 */;
	unsigned int cocci_id/* sound/soc/codecs/cs42l51.c 370 */;
	const char *const cocci_id/* sound/soc/codecs/cs42l51.c 37 */[];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs42l51.c 364 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs42l51.c 363 */;
	struct cs42l51_ratios cocci_id/* sound/soc/codecs/cs42l51.c 349 */[];
	enum master_slave_mode{MODE_SLAVE, MODE_SLAVE_AUTO, MODE_MASTER,} cocci_id/* sound/soc/codecs/cs42l51.c 31 */;
	struct cs42l51_ratios {
		unsigned int ratio;
		unsigned char speed_mode;
		unsigned char mclk;
	} cocci_id/* sound/soc/codecs/cs42l51.c 309 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs42l51.c 254 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs42l51.c 250 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l51.c 194 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/cs42l51.c 162 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l51.c 127 */[];
	const char *cocci_id/* sound/soc/codecs/cs42l51.c 119 */[];
}

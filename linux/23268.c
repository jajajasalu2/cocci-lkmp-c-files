cocci_test_suite() {
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tas2552.c 81 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tas2552.c 80 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tas2552.c 757 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tas2552.c 750 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tas2552.c 743 */[];
	struct i2c_client *cocci_id/* sound/soc/codecs/tas2552.c 737 */;
	struct device *cocci_id/* sound/soc/codecs/tas2552.c 685 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tas2552.c 683 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tas2552.c 672 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tas2552.c 656 */;
	struct tas2552_data {
		struct snd_soc_component *component;
		struct regmap *regmap;
		struct i2c_client *tas2552_client;
		struct regulator_bulk_data supplies[TAS2552_NUM_SUPPLIES];
		struct gpio_desc *enable_gpio;
		unsigned char regs[TAS2552_VBAT_DATA];
		unsigned int pll_clkin;
		int pll_clk_id;
		unsigned int pdm_clk;
		int pdm_clk_id;
		unsigned int dai_fmt;
		unsigned int tdm_delay;
	} cocci_id/* sound/soc/codecs/tas2552.c 64 */;
	void cocci_id/* sound/soc/codecs/tas2552.c 612 */;
	const char *cocci_id/* sound/soc/codecs/tas2552.c 58 */[TAS2552_NUM_SUPPLIES];
	struct tas2552_data *cocci_id/* sound/soc/codecs/tas2552.c 567 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tas2552.c 565 */;
	int cocci_id/* sound/soc/codecs/tas2552.c 565 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas2552.c 559 */[];
	const char *const cocci_id/* sound/soc/codecs/tas2552.c 549 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tas2552.c 530 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tas2552.c 516 */;
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/tas2552.c 511 */;
	unsigned int cocci_id/* sound/soc/codecs/tas2552.c 344 */;
	const struct reg_default cocci_id/* sound/soc/codecs/tas2552.c 33 */[];
	u8 cocci_id/* sound/soc/codecs/tas2552.c 242 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tas2552.c 237 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tas2552.c 236 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tas2552.c 235 */;
	bool cocci_id/* sound/soc/codecs/tas2552.c 159 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tas2552.c 130 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tas2552.c 113 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas2552.c 110 */;
}

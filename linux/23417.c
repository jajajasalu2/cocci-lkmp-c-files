cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/adau1701.c 907 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/adau1701.c 898 */[];
	int cocci_id/* sound/soc/codecs/adau1701.c 791 */[2];
	struct device *cocci_id/* sound/soc/codecs/adau1701.c 789 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/adau1701.c 786 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/adau1701.c 785 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/adau1701.c 775 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/adau1701.c 757 */;
	void cocci_id/* sound/soc/codecs/adau1701.c 717 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/adau1701.c 659 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/adau1701.c 638 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/adau1701.c 631 */;
	struct adau1701 *cocci_id/* sound/soc/codecs/adau1701.c 580 */;
	unsigned int cocci_id/* sound/soc/codecs/adau1701.c 579 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/adau1701.c 578 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/adau1701.c 576 */;
	int cocci_id/* sound/soc/codecs/adau1701.c 576 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/adau1701.c 551 */;
	bool cocci_id/* sound/soc/codecs/adau1701.c 483 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/adau1701.c 435 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/adau1701.c 434 */;
	const struct sigmadsp_ops cocci_id/* sound/soc/codecs/adau1701.c 296 */;
	uint8_t cocci_id/* sound/soc/codecs/adau1701.c 263 */[10];
	const uint8_t cocci_id/* sound/soc/codecs/adau1701.c 257 */[];
	size_t cocci_id/* sound/soc/codecs/adau1701.c 257 */;
	struct sigmadsp *cocci_id/* sound/soc/codecs/adau1701.c 256 */;
	struct i2c_msg cocci_id/* sound/soc/codecs/adau1701.c 221 */[2];
	uint8_t cocci_id/* sound/soc/codecs/adau1701.c 219 */[2];
	unsigned int *cocci_id/* sound/soc/codecs/adau1701.c 214 */;
	void *cocci_id/* sound/soc/codecs/adau1701.c 213 */;
	uint8_t cocci_id/* sound/soc/codecs/adau1701.c 189 */[5];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/adau1701.c 141 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/adau1701.c 126 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/adau1701.c 122 */[];
	struct adau1701 {
		int gpio_nreset;
		int gpio_pll_mode[2];
		unsigned int dai_fmt;
		unsigned int pll_clkdiv;
		unsigned int sysclk;
		struct regmap *regmap;
		struct i2c_client *client;
		u8 pin_config[12];
		struct sigmadsp *sigmadsp;
		struct regulator_bulk_data supplies[ARRAY_SIZE(supply_names)];
	} cocci_id/* sound/soc/codecs/adau1701.c 108 */;
	const char *const cocci_id/* sound/soc/codecs/adau1701.c 104 */[];
}

cocci_test_suite() {
	const struct soc_enum cocci_id/* sound/soc/codecs/cs42xx8.c 62 */;
	const char *const cocci_id/* sound/soc/codecs/cs42xx8.c 58 */[];
	const struct of_device_id *cocci_id/* sound/soc/codecs/cs42xx8.c 524 */;
	struct regmap *cocci_id/* sound/soc/codecs/cs42xx8.c 522 */;
	struct device *cocci_id/* sound/soc/codecs/cs42xx8.c 522 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/cs42xx8.c 514 */[];
	const struct cs42xx8_driver_data cocci_id/* sound/soc/codecs/cs42xx8.c 502 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs42xx8.c 489 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cs42xx8.c 468 */;
	struct cs42xx8_priv *cocci_id/* sound/soc/codecs/cs42xx8.c 467 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs42xx8.c 465 */;
	int cocci_id/* sound/soc/codecs/cs42xx8.c 465 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs42xx8.c 452 */;
	const struct reg_default cocci_id/* sound/soc/codecs/cs42xx8.c 403 */[];
	struct cs42xx8_priv {
		struct regulator_bulk_data supplies[CS42XX8_NUM_SUPPLIES];
		const struct cs42xx8_driver_data *drvdata;
		struct regmap *regmap;
		struct clk *clk;
		bool slave_mode;
		unsigned long sysclk;
		u32 tx_channels;
		struct gpio_desc *gpiod_reset;
		u32 rate[2];
	} cocci_id/* sound/soc/codecs/cs42xx8.c 40 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs42xx8.c 386 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs42xx8.c 378 */;
	u8 cocci_id/* sound/soc/codecs/cs42xx8.c 369 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs42xx8.c 365 */;
	bool cocci_id/* sound/soc/codecs/cs42xx8.c 354 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs42xx8.c 349 */;
	u32 cocci_id/* sound/soc/codecs/cs42xx8.c 270 */;
	const char *const cocci_id/* sound/soc/codecs/cs42xx8.c 27 */[CS42XX8_NUM_SUPPLIES];
	u32 cocci_id/* sound/soc/codecs/cs42xx8.c 267 */[2];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs42xx8.c 261 */;
	unsigned int cocci_id/* sound/soc/codecs/cs42xx8.c 215 */;
	const struct cs42xx8_ratios cocci_id/* sound/soc/codecs/cs42xx8.c 195 */[];
	struct cs42xx8_ratios {
		unsigned int mfreq;
		unsigned int min_mclk;
		unsigned int max_mclk;
		unsigned int ratio[3];
	} cocci_id/* sound/soc/codecs/cs42xx8.c 179 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs42xx8.c 172 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs42xx8.c 137 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42xx8.c 104 */[];
}

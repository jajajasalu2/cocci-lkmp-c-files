cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/ak4458.c 719 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/ak4458.c 713 */[];
	const struct ak4458_drvdata *cocci_id/* sound/soc/codecs/ak4458.c 668 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/ak4458.c 665 */;
	const struct ak4458_drvdata cocci_id/* sound/soc/codecs/ak4458.c 649 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/ak4458.c 639 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/ak4458.c 609 */;
	struct device *cocci_id/* sound/soc/codecs/ak4458.c 592 */;
	int __maybe_unused cocci_id/* sound/soc/codecs/ak4458.c 592 */;
	void cocci_id/* sound/soc/codecs/ak4458.c 526 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/ak4458.c 502 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/ak4458.c 494 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/ak4458.c 477 */;
	const unsigned int cocci_id/* sound/soc/codecs/ak4458.c 469 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/ak4458.c 42 */[];
	const int cocci_id/* sound/soc/codecs/ak4458.c 402 */[];
	unsigned int cocci_id/* sound/soc/codecs/ak4458.c 367 */;
	u8 cocci_id/* sound/soc/codecs/ak4458.c 321 */;
	struct ak4458_priv *cocci_id/* sound/soc/codecs/ak4458.c 318 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/ak4458.c 317 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/ak4458.c 315 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/ak4458.c 314 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/ak4458.c 313 */;
	int cocci_id/* sound/soc/codecs/ak4458.c 313 */;
	struct ak4458_priv {
		struct device *dev;
		struct regmap *regmap;
		struct gpio_desc *reset_gpiod;
		struct gpio_desc *mute_gpiod;
		int digfil;
		int fs;
		int fmt;
		int slots;
		int slot_width;
	} cocci_id/* sound/soc/codecs/ak4458.c 30 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/ak4458.c 252 */[];
	struct ak4458_drvdata {
		struct snd_soc_dai_driver *dai_drv;
		const struct snd_soc_component_driver *comp_drv;
	} cocci_id/* sound/soc/codecs/ak4458.c 24 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/ak4458.c 237 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ak4458.c 213 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/ak4458.c 172 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/ak4458.c 171 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/ak4458.c 162 */;
	const char *const cocci_id/* sound/soc/codecs/ak4458.c 124 */[];
}

cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/ak5558.c 92 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/ak5558.c 69 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ak5558.c 64 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/ak5558.c 59 */[];
	const char *const cocci_id/* sound/soc/codecs/ak5558.c 54 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/ak5558.c 393 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/ak5558.c 388 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/ak5558.c 36 */[];
	struct i2c_client *cocci_id/* sound/soc/codecs/ak5558.c 349 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/ak5558.c 339 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/ak5558.c 324 */;
	struct device *cocci_id/* sound/soc/codecs/ak5558.c 305 */;
	int __maybe_unused cocci_id/* sound/soc/codecs/ak5558.c 305 */;
	void cocci_id/* sound/soc/codecs/ak5558.c 262 */;
	struct ak5558_priv {
		struct snd_soc_component component;
		struct regmap *regmap;
		struct i2c_client *i2c;
		struct gpio_desc *reset_gpiod;
		int slots;
		int slot_width;
	} cocci_id/* sound/soc/codecs/ak5558.c 26 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/ak5558.c 250 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/ak5558.c 242 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/ak5558.c 229 */;
	const unsigned int cocci_id/* sound/soc/codecs/ak5558.c 221 */[];
	unsigned int cocci_id/* sound/soc/codecs/ak5558.c 149 */;
	u8 cocci_id/* sound/soc/codecs/ak5558.c 130 */;
	struct ak5558_priv *cocci_id/* sound/soc/codecs/ak5558.c 129 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/ak5558.c 128 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/ak5558.c 126 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/ak5558.c 125 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/ak5558.c 124 */;
	int cocci_id/* sound/soc/codecs/ak5558.c 124 */;
}

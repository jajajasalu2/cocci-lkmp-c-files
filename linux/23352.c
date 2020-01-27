cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/pcm1789.c 74 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/pcm1789.c 73 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/pcm1789.c 65 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/pcm1789.c 63 */;
	bool cocci_id/* sound/soc/codecs/pcm1789.c 42 */;
	struct device *cocci_id/* sound/soc/codecs/pcm1789.c 42 */;
	unsigned int cocci_id/* sound/soc/codecs/pcm1789.c 42 */;
	const struct reg_default cocci_id/* sound/soc/codecs/pcm1789.c 35 */[];
	struct pcm1789_private *cocci_id/* sound/soc/codecs/pcm1789.c 263 */;
	int cocci_id/* sound/soc/codecs/pcm1789.c 261 */;
	struct pcm1789_private {
		struct regmap *regmap;
		unsigned int format;
		unsigned int rate;
		struct gpio_desc *reset;
		struct work_struct work;
		struct device *dev;
	} cocci_id/* sound/soc/codecs/pcm1789.c 26 */;
	struct pcm1789_private cocci_id/* sound/soc/codecs/pcm1789.c 238 */;
	struct regmap *cocci_id/* sound/soc/codecs/pcm1789.c 234 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/pcm1789.c 221 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/pcm1789.c 210 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/pcm1789.c 196 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/pcm1789.c 189 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/pcm1789.c 182 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/pcm1789.c 176 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/pcm1789.c 167 */;
	struct work_struct *cocci_id/* sound/soc/codecs/pcm1789.c 131 */;
	void cocci_id/* sound/soc/codecs/pcm1789.c 131 */;
}

cocci_test_suite() {
	const char *const cocci_id/* sound/soc/codecs/pcm186x.c 68 */[];
	struct pcm186x_priv cocci_id/* sound/soc/codecs/pcm186x.c 651 */;
	struct regmap *cocci_id/* sound/soc/codecs/pcm186x.c 646 */;
	enum pcm186x_type cocci_id/* sound/soc/codecs/pcm186x.c 645 */;
	struct device *cocci_id/* sound/soc/codecs/pcm186x.c 645 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/pcm186x.c 630 */;
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/pcm186x.c 622 */;
	const unsigned int cocci_id/* sound/soc/codecs/pcm186x.c 62 */[];
	bool cocci_id/* sound/soc/codecs/pcm186x.c 605 */;
	struct snd_soc_component_driver cocci_id/* sound/soc/codecs/pcm186x.c 576 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/pcm186x.c 554 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/pcm186x.c 485 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/pcm186x.c 478 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/pcm186x.c 47 */[];
	struct pcm186x_priv {
		struct regmap *regmap;
		struct regulator_bulk_data supplies[PCM186x_NUM_SUPPLIES];
		unsigned int sysclk;
		unsigned int tdm_offset;
		bool is_tdm_mode;
		bool is_master_mode;
	} cocci_id/* sound/soc/codecs/pcm186x.c 36 */;
	u8 cocci_id/* sound/soc/codecs/pcm186x.c 273 */;
	snd_pcm_format_t cocci_id/* sound/soc/codecs/pcm186x.c 268 */;
	unsigned int cocci_id/* sound/soc/codecs/pcm186x.c 267 */;
	struct pcm186x_priv *cocci_id/* sound/soc/codecs/pcm186x.c 266 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/pcm186x.c 265 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/pcm186x.c 263 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/pcm186x.c 262 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/pcm186x.c 261 */;
	int cocci_id/* sound/soc/codecs/pcm186x.c 261 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/pcm186x.c 191 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/pcm186x.c 142 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/pcm186x.c 112 */[];
}

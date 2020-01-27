cocci_test_suite() {
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/pcm3168a.c 893 */;
	const char *const cocci_id/* sound/soc/codecs/pcm3168a.c 88 */[];
	struct device *cocci_id/* sound/soc/codecs/pcm3168a.c 808 */;
	void cocci_id/* sound/soc/codecs/pcm3168a.c 808 */;
	struct regmap *cocci_id/* sound/soc/codecs/pcm3168a.c 698 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/pcm3168a.c 686 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/pcm3168a.c 672 */;
	const struct reg_default cocci_id/* sound/soc/codecs/pcm3168a.c 604 */[];
	struct pcm3168a_priv {
		struct regulator_bulk_data supplies[PCM3168A_NUM_SUPPLIES];
		struct regmap *regmap;
		struct clk *scki;
		struct gpio_desc *gpio_rst;
		unsigned long sysclk;
		struct pcm3168a_io_params io_params[2];
		struct snd_soc_dai_driver dai_drv[2];
	} cocci_id/* sound/soc/codecs/pcm3168a.c 60 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/pcm3168a.c 577 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/pcm3168a.c 569 */;
	struct pcm3168a_io_params {
		bool master_mode;
		unsigned int fmt;
		int tdm_slots;
		u32 tdm_mask;
		int slot_width;
	} cocci_id/* sound/soc/codecs/pcm3168a.c 52 */;
	unsigned int cocci_id/* sound/soc/codecs/pcm3168a.c 460 */;
	u32 cocci_id/* sound/soc/codecs/pcm3168a.c 459 */;
	bool cocci_id/* sound/soc/codecs/pcm3168a.c 458 */;
	struct pcm3168a_io_params *cocci_id/* sound/soc/codecs/pcm3168a.c 457 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/pcm3168a.c 452 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/pcm3168a.c 451 */;
	const char *const cocci_id/* sound/soc/codecs/pcm3168a.c 39 */[PCM3168A_NUM_SUPPLIES];
	u64 cocci_id/* sound/soc/codecs/pcm3168a.c 325 */;
	struct pcm3168a_priv *cocci_id/* sound/soc/codecs/pcm3168a.c 296 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/pcm3168a.c 295 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/pcm3168a.c 293 */;
	int cocci_id/* sound/soc/codecs/pcm3168a.c 293 */;
	unsigned int cocci_id/* sound/soc/codecs/pcm3168a.c 264 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/pcm3168a.c 239 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/pcm3168a.c 205 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/pcm3168a.c 135 */[];
}

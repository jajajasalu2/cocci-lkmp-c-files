cocci_test_suite() {
	u64 cocci_id/* sound/soc/codecs/pcm512x.c 844 */;
	const struct reg_default cocci_id/* sound/soc/codecs/pcm512x.c 75 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/pcm512x.c 667 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/pcm512x.c 650 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/pcm512x.c 648 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/pcm512x.c 647 */;
	int cocci_id/* sound/soc/codecs/pcm512x.c 647 */;
	struct regmap *cocci_id/* sound/soc/codecs/pcm512x.c 627 */;
	void *cocci_id/* sound/soc/codecs/pcm512x.c 60 */;
	struct notifier_block *cocci_id/* sound/soc/codecs/pcm512x.c 59 */;
	struct snd_ratnum *cocci_id/* sound/soc/codecs/pcm512x.c 586 */;
	struct snd_pcm_hw_constraint_ratnums *cocci_id/* sound/soc/codecs/pcm512x.c 585 */;
	struct device *cocci_id/* sound/soc/codecs/pcm512x.c 584 */;
	struct snd_interval cocci_id/* sound/soc/codecs/pcm512x.c 549 */[2];
	struct snd_pcm_hw_rule *cocci_id/* sound/soc/codecs/pcm512x.c 546 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/pcm512x.c 540 */;
	const u32 cocci_id/* sound/soc/codecs/pcm512x.c 535 */[];
	struct pcm512x_priv *cocci_id/* sound/soc/codecs/pcm512x.c 506 */;
	unsigned long cocci_id/* sound/soc/codecs/pcm512x.c 506 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/pcm512x.c 488 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/pcm512x.c 480 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/pcm512x.c 437 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/pcm512x.c 391 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/pcm512x.c 390 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/pcm512x.c 341 */;
	const char *const cocci_id/* sound/soc/codecs/pcm512x.c 337 */[];
	struct pcm512x_priv {
		struct regmap *regmap;
		struct clk *sclk;
		struct regulator_bulk_data supplies[PCM512x_NUM_SUPPLIES];
		struct notifier_block supply_nb[PCM512x_NUM_SUPPLIES];
		int fmt;
		int pll_in;
		int pll_out;
		int pll_r;
		int pll_j;
		int pll_d;
		int pll_p;
		unsigned long real_pll;
		unsigned long overclock_pll;
		unsigned long overclock_dac;
		unsigned long overclock_dsp;
		int mute;
		struct mutex mutex;
		unsigned int bclk_ratio;
	} cocci_id/* sound/soc/codecs/pcm512x.c 32 */;
	const unsigned int cocci_id/* sound/soc/codecs/pcm512x.c 317 */[];
	const char *const cocci_id/* sound/soc/codecs/pcm512x.c 26 */[PCM512x_NUM_SUPPLIES];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/pcm512x.c 1724 */;
	void cocci_id/* sound/soc/codecs/pcm512x.c 1648 */;
	u32 cocci_id/* sound/soc/codecs/pcm512x.c 1593 */;
	const struct device_node *cocci_id/* sound/soc/codecs/pcm512x.c 1592 */;
	struct pcm512x_priv cocci_id/* sound/soc/codecs/pcm512x.c 1511 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/pcm512x.c 1489 */;
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/pcm512x.c 1481 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/pcm512x.c 1468 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/pcm512x.c 1452 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/pcm512x.c 1444 */;
	unsigned int cocci_id/* sound/soc/codecs/pcm512x.c 1402 */;
	bool cocci_id/* sound/soc/codecs/pcm512x.c 121 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/pcm512x.c 1164 */;
}

cocci_test_suite() {
	const char *const cocci_id/* sound/soc/codecs/es8328.c 95 */[];
	struct regmap *cocci_id/* sound/soc/codecs/es8328.c 847 */;
	struct device *cocci_id/* sound/soc/codecs/es8328.c 847 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/es8328.c 828 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/es8328.c 818 */;
	void cocci_id/* sound/soc/codecs/es8328.c 805 */;
	struct es8328_priv {
		struct regmap *regmap;
		struct clk *clk;
		int playback_fs;
		bool deemph;
		int mclkdiv2;
		const struct snd_pcm_hw_constraint_list *sysclk_constraints;
		const int *mclk_ratios;
		bool master;
		struct regulator_bulk_data supplies[ES8328_SUPPLY_NUM];
	} cocci_id/* sound/soc/codecs/es8328.c 79 */;
	struct es8328_priv *cocci_id/* sound/soc/codecs/es8328.c 771 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/es8328.c 769 */;
	int cocci_id/* sound/soc/codecs/es8328.c 769 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/es8328.c 700 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/es8328.c 692 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/es8328.c 642 */;
	const char *const cocci_id/* sound/soc/codecs/es8328.c 62 */[ES8328_SUPPLY_NUM];
	u8 cocci_id/* sound/soc/codecs/es8328.c 590 */;
	enum sgtl5000_regulator_supplies{DVDD, AVDD, PVDD, HPVDD, ES8328_SUPPLY_NUM,} cocci_id/* sound/soc/codecs/es8328.c 53 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/es8328.c 475 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/es8328.c 474 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/es8328.c 473 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/es8328.c 47 */;
	const int cocci_id/* sound/soc/codecs/es8328.c 43 */[];
	const unsigned int cocci_id/* sound/soc/codecs/es8328.c 39 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/es8328.c 364 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/es8328.c 282 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/es8328.c 271 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/es8328.c 233 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/es8328.c 218 */;
	unsigned int cocci_id/* sound/soc/codecs/es8328.c 158 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/es8328.c 144 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/es8328.c 143 */;
	const struct {
		int rate;
		unsigned int val;
	} cocci_id/* sound/soc/codecs/es8328.c 105 */[];
}

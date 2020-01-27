cocci_test_suite() {
	struct rt5616_priv *cocci_id/* sound/soc/codecs/rt5616.c 961 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5616.c 958 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5616.c 957 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5616.c 956 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5616.c 847 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5616.c 697 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/rt5616.c 57 */[];
	const struct reg_sequence cocci_id/* sound/soc/codecs/rt5616.c 47 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5616.c 466 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5616.c 464 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5616.c 370 */[];
	unsigned int cocci_id/* sound/soc/codecs/rt5616.c 349 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5616.c 346 */;
	int cocci_id/* sound/soc/codecs/rt5616.c 346 */;
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/rt5616.c 34 */[];
	const  cocci_id/* sound/soc/codecs/rt5616.c 294 */(bst_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(0,0,0),
							   1,1,
							   TLV_DB_SCALE_ITEM(2000,0,0),
							   2,2,
							   TLV_DB_SCALE_ITEM(2400,0,0),
							   3,5,
							   TLV_DB_SCALE_ITEM(3000,500,0),
							   6,6,
							   TLV_DB_SCALE_ITEM(4400,0,0),
							   7,7,
							   TLV_DB_SCALE_ITEM(5000,0,0),
							   8,8,
							   TLV_DB_SCALE_ITEM(5200,0,0));
	bool cocci_id/* sound/soc/codecs/rt5616.c 186 */;
	struct device *cocci_id/* sound/soc/codecs/rt5616.c 186 */;
	struct rt5616_priv {
		struct snd_soc_component *component;
		struct delayed_work patch_work;
		struct regmap *regmap;
		struct clk *mclk;
		int sysclk;
		int sysclk_src;
		int lrck[RT5616_AIFS];
		int bclk[RT5616_AIFS];
		int master[RT5616_AIFS];
		int pll_src;
		int pll_in;
		int pll_out;
	} cocci_id/* sound/soc/codecs/rt5616.c 141 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5616.c 1406 */;
	void cocci_id/* sound/soc/codecs/rt5616.c 1398 */;
	struct rt5616_priv cocci_id/* sound/soc/codecs/rt5616.c 1347 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5616.c 1341 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5616.c 1340 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5616.c 1333 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5616.c 1326 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5616.c 1310 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5616.c 1294 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5616.c 1272 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5616.c 1265 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5616.c 1159 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5616.c 1099 */;
}

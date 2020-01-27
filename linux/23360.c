cocci_test_suite() {
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt5682.c 996 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5682.c 966 */;
	void *cocci_id/* sound/soc/codecs/rt5682.c 966 */;
	bool cocci_id/* sound/soc/codecs/rt5682.c 872 */;
	struct regmap *cocci_id/* sound/soc/codecs/rt5682.c 808 */;
	const struct reg_default cocci_id/* sound/soc/codecs/rt5682.c 79 */[];
	const  cocci_id/* sound/soc/codecs/rt5682.c 763 */(bst_tlv,
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
	const struct reg_sequence cocci_id/* sound/soc/codecs/rt5682.c 73 */[];
	struct rt5682_priv {
		struct snd_soc_component *component;
		struct rt5682_platform_data pdata;
		struct regmap *regmap;
		struct snd_soc_jack *hs_jack;
		struct regulator_bulk_data supplies[RT5682_NUM_SUPPLIES];
		struct delayed_work jack_detect_work;
		struct delayed_work jd_check_work;
		struct mutex calibrate_mutex;
		int sysclk;
		int sysclk_src;
		int lrck[RT5682_AIFS];
		int bclk[RT5682_AIFS];
		int master[RT5682_AIFS];
		int pll_src;
		int pll_in;
		int pll_out;
		int jack_type;
	} cocci_id/* sound/soc/codecs/rt5682.c 50 */;
	const struct rt5682_platform_data cocci_id/* sound/soc/codecs/rt5682.c 43 */;
	const char *cocci_id/* sound/soc/codecs/rt5682.c 37 */[RT5682_NUM_SUPPLIES];
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5682.c 2698 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt5682.c 2691 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5682.c 2683 */[];
	struct rt5682_priv cocci_id/* sound/soc/codecs/rt5682.c 2531 */;
	struct rt5682_platform_data *cocci_id/* sound/soc/codecs/rt5682.c 2526 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5682.c 2524 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5682.c 2523 */;
	struct rt5682_priv *cocci_id/* sound/soc/codecs/rt5682.c 2471 */;
	void cocci_id/* sound/soc/codecs/rt5682.c 2471 */;
	struct device *cocci_id/* sound/soc/codecs/rt5682.c 2453 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5682.c 2447 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5682.c 2434 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5682.c 2414 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5682.c 2380 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5682.c 2368 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5682.c 2291 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5682.c 2210 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5682.c 1987 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5682.c 1987 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5682.c 1986 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5682.c 1776 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5682.c 1587 */[];
	const char *constcocci_id/* sound/soc/codecs/rt5682.c 1575 */[];
	const unsigned int cocci_id/* sound/soc/codecs/rt5682.c 1570 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5682.c 1520 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5682.c 1461 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5682.c 1327 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5682.c 1270 */;
	unsigned int cocci_id/* sound/soc/codecs/rt5682.c 1269 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5682.c 1266 */;
	int cocci_id/* sound/soc/codecs/rt5682.c 1266 */;
	const int cocci_id/* sound/soc/codecs/rt5682.c 1169 */[];
	struct work_struct *cocci_id/* sound/soc/codecs/rt5682.c 1063 */;
}

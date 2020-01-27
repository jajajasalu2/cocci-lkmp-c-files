cocci_test_suite() {
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt5668.c 973 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5668.c 943 */;
	void *cocci_id/* sound/soc/codecs/rt5668.c 943 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/rt5668.c 899 */;
	bool cocci_id/* sound/soc/codecs/rt5668.c 859 */;
	struct regmap *cocci_id/* sound/soc/codecs/rt5668.c 797 */;
	const  cocci_id/* sound/soc/codecs/rt5668.c 752 */(bst_tlv,
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
	const struct reg_default cocci_id/* sound/soc/codecs/rt5668.c 66 */[];
	struct rt5668_priv {
		struct snd_soc_component *component;
		struct rt5668_platform_data pdata;
		struct regmap *regmap;
		struct snd_soc_jack *hs_jack;
		struct regulator_bulk_data supplies[RT5668_NUM_SUPPLIES];
		struct delayed_work jack_detect_work;
		struct delayed_work jd_check_work;
		struct mutex calibrate_mutex;
		int sysclk;
		int sysclk_src;
		int lrck[RT5668_AIFS];
		int bclk[RT5668_AIFS];
		int master[RT5668_AIFS];
		int pll_src;
		int pll_in;
		int pll_out;
		int jack_type;
	} cocci_id/* sound/soc/codecs/rt5668.c 43 */;
	const char *cocci_id/* sound/soc/codecs/rt5668.c 37 */[RT5668_NUM_SUPPLIES];
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5668.c 2615 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt5668.c 2608 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5668.c 2600 */[];
	struct rt5668_priv cocci_id/* sound/soc/codecs/rt5668.c 2462 */;
	struct rt5668_platform_data *cocci_id/* sound/soc/codecs/rt5668.c 2457 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5668.c 2455 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5668.c 2454 */;
	struct rt5668_priv *cocci_id/* sound/soc/codecs/rt5668.c 2401 */;
	void cocci_id/* sound/soc/codecs/rt5668.c 2401 */;
	struct device *cocci_id/* sound/soc/codecs/rt5668.c 2385 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5668.c 2379 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5668.c 2366 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5668.c 2346 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5668.c 2312 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5668.c 2300 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5668.c 2222 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5668.c 2141 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5668.c 1918 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5668.c 1918 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5668.c 1917 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5668.c 1726 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5668.c 1534 */[];
	const char *constcocci_id/* sound/soc/codecs/rt5668.c 1522 */[];
	const unsigned int cocci_id/* sound/soc/codecs/rt5668.c 1517 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5668.c 1467 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5668.c 1410 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5668.c 1276 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5668.c 1219 */;
	unsigned int cocci_id/* sound/soc/codecs/rt5668.c 1218 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5668.c 1215 */;
	int cocci_id/* sound/soc/codecs/rt5668.c 1215 */;
	const int cocci_id/* sound/soc/codecs/rt5668.c 1129 */[];
	struct work_struct *cocci_id/* sound/soc/codecs/rt5668.c 1019 */;
}

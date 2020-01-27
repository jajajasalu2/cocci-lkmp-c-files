cocci_test_suite() {
	const struct reg_sequence cocci_id/* sound/soc/codecs/rt5663.c 79 */[];
	struct rt5663_priv {
		struct snd_soc_component *component;
		struct rt5663_platform_data pdata;
		struct regmap *regmap;
		struct delayed_work jack_detect_work,jd_unplug_work;
		struct snd_soc_jack *hs_jack;
		struct timer_list btn_check_timer;
		struct impedance_mapping_table *imp_table;
		struct regulator_bulk_data supplies[ARRAY_SIZE(rt5663_supply_names)];
		int codec_ver;
		int sysclk;
		int sysclk_src;
		int lrck;
		int pll_src;
		int pll_in;
		int pll_out;
		int jack_type;
	} cocci_id/* sound/soc/codecs/rt5663.c 57 */;
	const struct reg_default cocci_id/* sound/soc/codecs/rt5663.c 489 */[];
	struct impedance_mapping_table {
		unsigned int imp_min;
		unsigned int imp_max;
		unsigned int vol;
		unsigned int dc_offset_l_manual;
		unsigned int dc_offset_r_manual;
		unsigned int dc_offset_l_manual_mic;
		unsigned int dc_offset_r_manual_mic;
	} cocci_id/* sound/soc/codecs/rt5663.c 42 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5663.c 3726 */;
	enum{CODEC_VER_1, CODEC_VER_0,} cocci_id/* sound/soc/codecs/rt5663.c 37 */;
	struct rt5663_priv cocci_id/* sound/soc/codecs/rt5663.c 3497 */;
	struct regmap *cocci_id/* sound/soc/codecs/rt5663.c 3495 */;
	struct rt5663_platform_data *cocci_id/* sound/soc/codecs/rt5663.c 3491 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5663.c 3489 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5663.c 3488 */;
	u32 *cocci_id/* sound/soc/codecs/rt5663.c 3482 */;
	struct impedance_mapping_table cocci_id/* sound/soc/codecs/rt5663.c 3477 */;
	struct device *cocci_id/* sound/soc/codecs/rt5663.c 3461 */;
	struct rt5663_priv *cocci_id/* sound/soc/codecs/rt5663.c 3341 */;
	void cocci_id/* sound/soc/codecs/rt5663.c 3341 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt5663.c 3315 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5663.c 3307 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5663.c 3300 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5663.c 3277 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5663.c 3246 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5663.c 3224 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5663.c 3215 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/rt5663.c 3142 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5663.c 3075 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5663.c 2897 */;
	unsigned int cocci_id/* sound/soc/codecs/rt5663.c 2767 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5663.c 2763 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5663.c 2763 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5663.c 2762 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5663.c 2636 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5663.c 2453 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5663.c 2409 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5663.c 2407 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5663.c 2406 */;
	int cocci_id/* sound/soc/codecs/rt5663.c 2406 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5663.c 2304 */;
	const char *constcocci_id/* sound/soc/codecs/rt5663.c 2297 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5663.c 2250 */[];
	struct work_struct *cocci_id/* sound/soc/codecs/rt5663.c 1899 */;
	bool cocci_id/* sound/soc/codecs/rt5663.c 1879 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt5663.c 1868 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5663.c 1854 */;
	void *cocci_id/* sound/soc/codecs/rt5663.c 1854 */;
	const  cocci_id/* sound/soc/codecs/rt5663.c 1379 */(in_bst_tlv,
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
}

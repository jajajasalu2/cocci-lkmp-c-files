cocci_test_suite() {
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/rt5665.c 998 */;
	const  cocci_id/* sound/soc/codecs/rt5665.c 898 */(bst_tlv,
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
	const struct reg_default cocci_id/* sound/soc/codecs/rt5665.c 73 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5665.c 4967 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt5665.c 4959 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5665.c 4950 */[];
	struct rt5665_platform_data *cocci_id/* sound/soc/codecs/rt5665.c 4763 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5665.c 4761 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5665.c 4760 */;
	struct rt5665_priv cocci_id/* sound/soc/codecs/rt5665.c 4749 */;
	struct work_struct *cocci_id/* sound/soc/codecs/rt5665.c 4747 */;
	struct rt5665_priv *cocci_id/* sound/soc/codecs/rt5665.c 4667 */;
	void cocci_id/* sound/soc/codecs/rt5665.c 4667 */;
	struct device *cocci_id/* sound/soc/codecs/rt5665.c 4643 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5665.c 4637 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5665.c 4624 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5665.c 4603 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5665.c 4512 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5665.c 4505 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5665.c 4427 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5665.c 4336 */;
	struct rt5665_priv {
		struct snd_soc_component *component;
		struct rt5665_platform_data pdata;
		struct regmap *regmap;
		struct gpio_desc *gpiod_ldo1_en;
		struct gpio_desc *gpiod_reset;
		struct snd_soc_jack *hs_jack;
		struct regulator_bulk_data supplies[RT5665_NUM_SUPPLIES];
		struct delayed_work jack_detect_work;
		struct delayed_work calibrate_work;
		struct delayed_work jd_check_work;
		struct mutex calibrate_mutex;
		int sysclk;
		int sysclk_src;
		int lrck[RT5665_AIFS];
		int bclk[RT5665_AIFS];
		int master[RT5665_AIFS];
		int id;
		int pll_src;
		int pll_in;
		int pll_out;
		int jack_type;
		int irq_work_delay_time;
		unsigned int sar_adc_value;
		bool calibration_done;
	} cocci_id/* sound/soc/codecs/rt5665.c 43 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5665.c 4106 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5665.c 4106 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5665.c 4105 */;
	const char *cocci_id/* sound/soc/codecs/rt5665.c 37 */[RT5665_NUM_SUPPLIES];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5665.c 3244 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5665.c 2681 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5665.c 2453 */;
	const char *constcocci_id/* sound/soc/codecs/rt5665.c 2232 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5665.c 1634 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5665.c 1523 */;
	unsigned int cocci_id/* sound/soc/codecs/rt5665.c 1522 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5665.c 1519 */;
	int cocci_id/* sound/soc/codecs/rt5665.c 1519 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5665.c 1497 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/rt5665.c 1385 */[];
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt5665.c 1262 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5665.c 1233 */;
	void *cocci_id/* sound/soc/codecs/rt5665.c 1233 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/rt5665.c 1170 */;
	bool cocci_id/* sound/soc/codecs/rt5665.c 1137 */;
}

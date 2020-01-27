cocci_test_suite() {
	unsigned int cocci_id/* sound/soc/codecs/rt5645.c 867 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5645.c 863 */;
	const struct reg_default cocci_id/* sound/soc/codecs/rt5645.c 83 */[];
	const struct reg_sequence cocci_id/* sound/soc/codecs/rt5645.c 70 */[];
	unsigned short cocci_id/* sound/soc/codecs/rt5645.c 689 */;
	struct rt5645_eq_param_s_be16 *cocci_id/* sound/soc/codecs/rt5645.c 677 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/rt5645.c 673 */;
	struct rt5645_eq_param_s cocci_id/* sound/soc/codecs/rt5645.c 667 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/rt5645.c 664 */;
	const  cocci_id/* sound/soc/codecs/rt5645.c 656 */(spk_clsd_tlv,
							   0,4,
							   TLV_DB_SCALE_ITEM(-600,150,0),
							   5,5,
							   TLV_DB_SCALE_ITEM(82,0,0),
							   6,6,
							   TLV_DB_SCALE_ITEM(158,0,0),
							   7,7,
							   TLV_DB_SCALE_ITEM(228,0,0));
	const  cocci_id/* sound/soc/codecs/rt5645.c 645 */(bst_tlv,
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
	const struct regmap_range_cfg cocci_id/* sound/soc/codecs/rt5645.c 57 */[];
	struct rt5645_priv {
		struct snd_soc_component *component;
		struct rt5645_platform_data pdata;
		struct regmap *regmap;
		struct i2c_client *i2c;
		struct gpio_desc *gpiod_hp_det;
		struct snd_soc_jack *hp_jack;
		struct snd_soc_jack *mic_jack;
		struct snd_soc_jack *btn_jack;
		struct delayed_work jack_detect_work,rcclock_work;
		struct regulator_bulk_data supplies[ARRAY_SIZE(rt5645_supply_names)];
		struct rt5645_eq_param_s *eq_param;
		struct timer_list btn_check_timer;
		int codec_type;
		int sysclk;
		int sysclk_src;
		int lrck[RT5645_AIFS];
		int bclk[RT5645_AIFS];
		int master[RT5645_AIFS];
		int pll_src;
		int pll_in;
		int pll_out;
		int jack_type;
		bool en_button_func;
		bool hp_on;
		int v_id;
	} cocci_id/* sound/soc/codecs/rt5645.c 411 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5645.c 4099 */;
	struct rt5645_eq_param_s_be16 {
		__be16 reg;
		__be16 val;
	} cocci_id/* sound/soc/codecs/rt5645.c 401 */;
	struct rt5645_eq_param_s {
		unsigned short reg;
		unsigned short val;
	} cocci_id/* sound/soc/codecs/rt5645.c 396 */;
	struct rt5645_priv cocci_id/* sound/soc/codecs/rt5645.c 3799 */;
	struct regmap *cocci_id/* sound/soc/codecs/rt5645.c 3797 */;
	const struct dmi_system_id *cocci_id/* sound/soc/codecs/rt5645.c 3793 */;
	struct rt5645_platform_data *cocci_id/* sound/soc/codecs/rt5645.c 3792 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5645.c 3790 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5645.c 3789 */;
	bool cocci_id/* sound/soc/codecs/rt5645.c 3764 */;
	struct device *cocci_id/* sound/soc/codecs/rt5645.c 3764 */;
	void *cocci_id/* sound/soc/codecs/rt5645.c 3654 */;
	const struct dmi_system_id cocci_id/* sound/soc/codecs/rt5645.c 3648 */[];
	const struct rt5645_platform_data cocci_id/* sound/soc/codecs/rt5645.c 3621 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt5645.c 3589 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5645.c 3580 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5645.c 3572 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5645.c 3528 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5645.c 3511 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5645.c 3470 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5645.c 3462 */;
	struct timer_list *cocci_id/* sound/soc/codecs/rt5645.c 3367 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5645.c 3357 */;
	struct work_struct *cocci_id/* sound/soc/codecs/rt5645.c 3251 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt5645.c 3230 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5645.c 3227 */(int irq,
								 void *data);
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/rt5645.c 3112 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5645.c 3050 */;
	struct rl6231_pll_code cocci_id/* sound/soc/codecs/rt5645.c 2917 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5645.c 2732 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5645.c 2732 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5645.c 2731 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5645.c 2296 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5645.c 1959 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5645.c 1866 */;
	struct rt5645_priv *cocci_id/* sound/soc/codecs/rt5645.c 1647 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5645.c 1644 */;
	int cocci_id/* sound/soc/codecs/rt5645.c 1644 */;
	void cocci_id/* sound/soc/codecs/rt5645.c 1644 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5645.c 1628 */;
	const char *constcocci_id/* sound/soc/codecs/rt5645.c 1268 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5645.c 1051 */[];
}

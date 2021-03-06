cocci_test_suite() {
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/sta32x.c 999 */;
	void cocci_id/* sound/soc/codecs/sta32x.c 988 */;
	struct sta32x_platform_data *cocci_id/* sound/soc/codecs/sta32x.c 878 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/sta32x.c 863 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/sta32x.c 857 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/sta32x.c 802 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/sta32x.c 650 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/sta32x.c 649 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/sta32x.c 648 */;
	u8 cocci_id/* sound/soc/codecs/sta32x.c 605 */;
	const struct reg_default cocci_id/* sound/soc/codecs/sta32x.c 59 */[];
	int cocci_id/* sound/soc/codecs/sta32x.c 555 */[3][7];
	struct {
		int fs;
		int ir;
	} cocci_id/* sound/soc/codecs/sta32x.c 541 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/sta32x.c 534 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/sta32x.c 527 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/sta32x.c 447 */[];
	struct work_struct *cocci_id/* sound/soc/codecs/sta32x.c 392 */;
	unsigned int cocci_id/* sound/soc/codecs/sta32x.c 379 */;
	struct sta32x_priv *cocci_id/* sound/soc/codecs/sta32x.c 378 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/sta32x.c 376 */;
	int cocci_id/* sound/soc/codecs/sta32x.c 376 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/sta32x.c 269 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/sta32x.c 268 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/sta32x.c 260 */;
	const char *cocci_id/* sound/soc/codecs/sta32x.c 163 */[];
	struct sta32x_priv {
		struct regmap *regmap;
		struct clk *xti_clk;
		struct regulator_bulk_data supplies[ARRAY_SIZE(sta32x_supply_names)];
		struct snd_soc_component *component;
		struct sta32x_platform_data *pdata;
		unsigned int mclk;
		unsigned int format;
		u32 coef_shadow[STA32X_COEF_COUNT];
		struct delayed_work watchdog_work;
		int shutdown;
		struct gpio_desc *gpiod_nreset;
		struct mutex coeff_lock;
	} cocci_id/* sound/soc/codecs/sta32x.c 140 */;
	const struct regmap_access_table cocci_id/* sound/soc/codecs/sta32x.c 122 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/sta32x.c 1166 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/sta32x.c 1158 */[];
	struct sta32x_priv cocci_id/* sound/soc/codecs/sta32x.c 1097 */;
	struct device *cocci_id/* sound/soc/codecs/sta32x.c 1093 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/sta32x.c 1091 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/sta32x.c 1090 */;
	const struct regmap_range cocci_id/* sound/soc/codecs/sta32x.c 109 */[];
	u16 cocci_id/* sound/soc/codecs/sta32x.c 1039 */;
	struct device_node *cocci_id/* sound/soc/codecs/sta32x.c 1037 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/sta32x.c 1029 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/sta32x.c 1016 */;
}

cocci_test_suite() {
	struct sta350_platform_data *cocci_id/* sound/soc/codecs/sta350.c 913 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/sta350.c 898 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/sta350.c 892 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/sta350.c 834 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/sta350.c 679 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/sta350.c 678 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/sta350.c 677 */;
	const struct reg_default cocci_id/* sound/soc/codecs/sta350.c 59 */[];
	int cocci_id/* sound/soc/codecs/sta350.c 589 */[3][6];
	struct {
		int fs;
		int ir;
	} cocci_id/* sound/soc/codecs/sta350.c 575 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/sta350.c 567 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/sta350.c 560 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/sta350.c 442 */[];
	unsigned int cocci_id/* sound/soc/codecs/sta350.c 416 */;
	struct sta350_priv *cocci_id/* sound/soc/codecs/sta350.c 415 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/sta350.c 413 */;
	int cocci_id/* sound/soc/codecs/sta350.c 413 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/sta350.c 306 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/sta350.c 305 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/sta350.c 297 */;
	const char *const cocci_id/* sound/soc/codecs/sta350.c 189 */[];
	struct sta350_priv {
		struct regmap *regmap;
		struct regulator_bulk_data supplies[ARRAY_SIZE(sta350_supply_names)];
		struct sta350_platform_data *pdata;
		unsigned int mclk;
		unsigned int format;
		u32 coef_shadow[STA350_COEF_COUNT];
		int shutdown;
		struct gpio_desc *gpiod_nreset;
		struct gpio_desc *gpiod_power_down;
		struct mutex coeff_lock;
	} cocci_id/* sound/soc/codecs/sta350.c 165 */;
	const struct regmap_access_table cocci_id/* sound/soc/codecs/sta350.c 147 */;
	const struct regmap_range cocci_id/* sound/soc/codecs/sta350.c 130 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/sta350.c 1261 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/sta350.c 1255 */[];
	struct sta350_priv cocci_id/* sound/soc/codecs/sta350.c 1197 */;
	struct device *cocci_id/* sound/soc/codecs/sta350.c 1193 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/sta350.c 1191 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/sta350.c 1190 */;
	u8 cocci_id/* sound/soc/codecs/sta350.c 1098 */;
	u16 cocci_id/* sound/soc/codecs/sta350.c 1097 */;
	const char *cocci_id/* sound/soc/codecs/sta350.c 1096 */;
	struct device_node *cocci_id/* sound/soc/codecs/sta350.c 1094 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/sta350.c 1079 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/sta350.c 1066 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/sta350.c 1049 */;
	void cocci_id/* sound/soc/codecs/sta350.c 1042 */;
}

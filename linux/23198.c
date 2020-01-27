cocci_test_suite() {
	u8 cocci_id/* sound/soc/codecs/cs53l30.c 926 */;
	unsigned int cocci_id/* sound/soc/codecs/cs53l30.c 923 */;
	struct device *cocci_id/* sound/soc/codecs/cs53l30.c 921 */;
	const struct device_node *cocci_id/* sound/soc/codecs/cs53l30.c 920 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs53l30.c 918 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs53l30.c 917 */;
	struct regmap_config cocci_id/* sound/soc/codecs/cs53l30.c 904 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs53l30.c 890 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cs53l30.c 878 */;
	struct cs53l30_private *cocci_id/* sound/soc/codecs/cs53l30.c 877 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs53l30.c 875 */;
	int cocci_id/* sound/soc/codecs/cs53l30.c 875 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs53l30.c 862 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs53l30.c 852 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs53l30.c 837 */;
	u64 cocci_id/* sound/soc/codecs/cs53l30.c 772 */;
	unsigned int cocci_id/* sound/soc/codecs/cs53l30.c 770 */[CS53L30_TDM_SLOT_MAX];
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/cs53l30.c 746 */;
	const unsigned int cocci_id/* sound/soc/codecs/cs53l30.c 742 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cs53l30.c 650 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs53l30.c 622 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs53l30.c 621 */;
	u32 cocci_id/* sound/soc/codecs/cs53l30.c 550 */;
	const struct cs53l30_mclkx_div cocci_id/* sound/soc/codecs/cs53l30.c 510 */[];
	struct cs53l30_mclkx_div {
		u32 mclkx;
		u8 ratio;
		u8 mclkdiv;
	} cocci_id/* sound/soc/codecs/cs53l30.c 504 */;
	const struct cs53l30_mclk_div cocci_id/* sound/soc/codecs/cs53l30.c 465 */[];
	struct cs53l30_mclk_div {
		u32 mclk_rate;
		u32 srate;
		u8 asp_rate;
		u8 internal_fs_ratio;
		u8 mclk_int_scale;
	} cocci_id/* sound/soc/codecs/cs53l30.c 457 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs53l30.c 406 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/cs53l30.c 40 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs53l30.c 368 */[];
	struct cs53l30_private {
		struct regulator_bulk_data supplies[CS53L30_NUM_SUPPLIES];
		struct regmap *regmap;
		struct gpio_desc *reset_gpio;
		struct gpio_desc *mute_gpio;
		struct clk *mclk;
		bool use_sdout2;
		u32 mclk_rate;
	} cocci_id/* sound/soc/codecs/cs53l30.c 30 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs53l30.c 291 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/cs53l30.c 283 */;
	const char *const cocci_id/* sound/soc/codecs/cs53l30.c 25 */[CS53L30_NUM_SUPPLIES];
	const char *const cocci_id/* sound/soc/codecs/cs53l30.c 248 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs53l30.c 223 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/cs53l30.c 1118 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs53l30.c 1111 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs53l30.c 1104 */[];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/cs53l30.c 1099 */;
	bool cocci_id/* sound/soc/codecs/cs53l30.c 108 */;
}
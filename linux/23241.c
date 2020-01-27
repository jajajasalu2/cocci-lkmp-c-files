cocci_test_suite() {
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs35l36.c 979 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs35l36.c 972 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/cs35l36.c 958 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs35l36.c 908 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs35l36.c 864 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs35l36.c 863 */;
	const struct cs35l36_global_fs_config cocci_id/* sound/soc/codecs/cs35l36.c 846 */[];
	struct cs35l36_global_fs_config {
		int rate;
		int fs_cfg;
	} cocci_id/* sound/soc/codecs/cs35l36.c 841 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs35l36.c 693 */[];
	const struct cs35l36_pll_config cocci_id/* sound/soc/codecs/cs35l36.c 67 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs35l36.c 654 */[];
	struct cs35l36_pll_config {
		int freq;
		int clk_cfg;
		int fll_igain;
	} cocci_id/* sound/soc/codecs/cs35l36.c 61 */;
	const unsigned int cocci_id/* sound/soc/codecs/cs35l36.c 608 */[];
	const char *const cocci_id/* sound/soc/codecs/cs35l36.c 604 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs35l36.c 597 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs35l36.c 558 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cs35l36.c 556 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/cs35l36.c 555 */;
	int cocci_id/* sound/soc/codecs/cs35l36.c 555 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs35l36.c 487 */[];
	struct cs35l36_private {
		struct device *dev;
		struct cs35l36_platform_data pdata;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[2];
		int num_supplies;
		int clksrc;
		int chip_version;
		int rev_id;
		int ldm_mode_sel;
		struct gpio_desc *reset_gpio;
	} cocci_id/* sound/soc/codecs/cs35l36.c 48 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/cs35l36.c 457 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/cs35l36.c 1944 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs35l36.c 1937 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs35l36.c 1931 */[];
	struct cs35l36_platform_data cocci_id/* sound/soc/codecs/cs35l36.c 1741 */;
	struct cs35l36_private cocci_id/* sound/soc/codecs/cs35l36.c 1713 */;
	u32 cocci_id/* sound/soc/codecs/cs35l36.c 1711 */;
	struct irq_data *cocci_id/* sound/soc/codecs/cs35l36.c 1709 */;
	struct device *cocci_id/* sound/soc/codecs/cs35l36.c 1707 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs35l36.c 1704 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/cs35l36.c 1648 */[];
	struct cs35l36_vpbr_cfg *cocci_id/* sound/soc/codecs/cs35l36.c 1612 */;
	struct cs35l36_platform_data *cocci_id/* sound/soc/codecs/cs35l36.c 1611 */;
	struct cs35l36_private *cocci_id/* sound/soc/codecs/cs35l36.c 1609 */;
	void cocci_id/* sound/soc/codecs/cs35l36.c 1609 */;
	struct device_node *cocci_id/* sound/soc/codecs/cs35l36.c 1434 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs35l36.c 1431 */;
	struct reg_default cocci_id/* sound/soc/codecs/cs35l36.c 134 */[];
	unsigned int cocci_id/* sound/soc/codecs/cs35l36.c 1321 */[4];
	irqreturn_t cocci_id/* sound/soc/codecs/cs35l36.c 1318 */;
	void *cocci_id/* sound/soc/codecs/cs35l36.c 1318 */;
	struct regmap_config cocci_id/* sound/soc/codecs/cs35l36.c 1305 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs35l36.c 1290 */;
	bool cocci_id/* sound/soc/codecs/cs35l36.c 1010 */;
	const struct cs35l36_pll_config *cocci_id/* sound/soc/codecs/cs35l36.c 1008 */;
	unsigned int cocci_id/* sound/soc/codecs/cs35l36.c 1003 */;
}

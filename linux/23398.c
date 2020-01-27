cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/tas571x.c 901 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tas571x.c 891 */[];
	uint8_t cocci_id/* sound/soc/codecs/tas571x.c 82 */[5];
	void *cocci_id/* sound/soc/codecs/tas571x.c 794 */;
	const struct of_device_id *cocci_id/* sound/soc/codecs/tas571x.c 782 */;
	struct device *cocci_id/* sound/soc/codecs/tas571x.c 781 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tas571x.c 778 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tas571x.c 775 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tas571x.c 761 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tas571x.c 750 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tas571x.c 740 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tas571x.c 730 */[];
	const struct tas571x_chip cocci_id/* sound/soc/codecs/tas571x.c 542 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tas571x.c 529 */;
	const struct reg_default cocci_id/* sound/soc/codecs/tas571x.c 505 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas571x.c 473 */[];
	const unsigned int cocci_id/* sound/soc/codecs/tas571x.c 464 */[];
	const char *const cocci_id/* sound/soc/codecs/tas571x.c 460 */[];
	const struct regmap_access_table cocci_id/* sound/soc/codecs/tas571x.c 452 */;
	struct tas571x_private {
		const struct tas571x_chip *chip;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[TAS571X_MAX_SUPPLIES];
		struct clk *mclk;
		unsigned int format;
		struct gpio_desc *reset_gpio;
		struct gpio_desc *pdn_gpio;
		struct snd_soc_component_driver component_driver;
	} cocci_id/* sound/soc/codecs/tas571x.c 45 */;
	const struct regmap_range cocci_id/* sound/soc/codecs/tas571x.c 446 */[];
	struct tas571x_chip {
		const char *const *supply_names;
		int num_supply_names;
		const struct snd_kcontrol_new *controls;
		int num_controls;
		const struct regmap_config *regmap_config;
		int vol_reg_size;
	} cocci_id/* sound/soc/codecs/tas571x.c 36 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tas571x.c 354 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/tas571x.c 322 */;
	u8 cocci_id/* sound/soc/codecs/tas571x.c 307 */;
	u32 cocci_id/* sound/soc/codecs/tas571x.c 279 */;
	struct tas571x_private *cocci_id/* sound/soc/codecs/tas571x.c 278 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tas571x.c 276 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tas571x.c 275 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tas571x.c 274 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tas571x.c 245 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tas571x.c 244 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tas571x.c 242 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tas571x.c 241 */;
	int cocci_id/* sound/soc/codecs/tas571x.c 241 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/tas571x.c 230 */;
	uint8_t *cocci_id/* sound/soc/codecs/tas571x.c 181 */;
	long cocci_id/* sound/soc/codecs/tas571x.c 177 */[];
	size_t cocci_id/* sound/soc/codecs/tas571x.c 177 */;
	const long cocci_id/* sound/soc/codecs/tas571x.c 146 */[];
	struct i2c_msg cocci_id/* sound/soc/codecs/tas571x.c 108 */[2];
	uint8_t cocci_id/* sound/soc/codecs/tas571x.c 107 */;
	unsigned int *cocci_id/* sound/soc/codecs/tas571x.c 103 */;
	unsigned int cocci_id/* sound/soc/codecs/tas571x.c 102 */;
}

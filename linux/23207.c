cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/tas5086.c 991 */;
	struct device_node *cocci_id/* sound/soc/codecs/tas5086.c 946 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tas5086.c 915 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tas5086.c 914 */;
	const struct reg_default cocci_id/* sound/soc/codecs/tas5086.c 91 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/tas5086.c 900 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tas5086.c 894 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tas5086.c 877 */;
	void cocci_id/* sound/soc/codecs/tas5086.c 866 */;
	char cocci_id/* sound/soc/codecs/tas5086.c 838 */[25];
	const struct of_device_id cocci_id/* sound/soc/codecs/tas5086.c 810 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tas5086.c 754 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tas5086.c 747 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tas5086.c 643 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tas5086.c 599 */[];
	const char *cocci_id/* sound/soc/codecs/tas5086.c 577 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/tas5086.c 558 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas5086.c 535 */[];
	const int cocci_id/* sound/soc/codecs/tas5086.c 477 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tas5086.c 353 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tas5086.c 352 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tas5086.c 351 */;
	const int *cocci_id/* sound/soc/codecs/tas5086.c 340 */;
	int cocci_id/* sound/soc/codecs/tas5086.c 340 */;
	struct tas5086_private *cocci_id/* sound/soc/codecs/tas5086.c 277 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tas5086.c 276 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tas5086.c 274 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tas5086.c 273 */;
	int cocci_id/* sound/soc/codecs/tas5086.c 253 */[];
	struct tas5086_private {
		struct regmap *regmap;
		unsigned int mclk,sclk;
		unsigned int format;
		bool deemph;
		unsigned int charge_period;
		unsigned int pwm_start_mid_z;
		int rate;
		int gpio_nreset;
		struct regulator_bulk_data supplies[ARRAY_SIZE(supply_names)];
	} cocci_id/* sound/soc/codecs/tas5086.c 239 */;
	const char *constcocci_id/* sound/soc/codecs/tas5086.c 235 */[];
	struct i2c_msg cocci_id/* sound/soc/codecs/tas5086.c 198 */[2];
	uint8_t cocci_id/* sound/soc/codecs/tas5086.c 197 */;
	unsigned int *cocci_id/* sound/soc/codecs/tas5086.c 194 */;
	void *cocci_id/* sound/soc/codecs/tas5086.c 193 */;
	uint8_t cocci_id/* sound/soc/codecs/tas5086.c 170 */[5];
	bool cocci_id/* sound/soc/codecs/tas5086.c 137 */;
	struct device *cocci_id/* sound/soc/codecs/tas5086.c 137 */;
	unsigned int cocci_id/* sound/soc/codecs/tas5086.c 137 */;
}
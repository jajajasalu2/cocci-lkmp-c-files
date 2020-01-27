cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/ssm2518.c 812 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/ssm2518.c 806 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/ssm2518.c 799 */[];
	struct ssm2518_platform_data *cocci_id/* sound/soc/codecs/ssm2518.c 740 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/ssm2518.c 738 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/ssm2518.c 737 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/ssm2518.c 726 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/ssm2518.c 712 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/ssm2518.c 631 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/ssm2518.c 623 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/ssm2518.c 501 */;
	bool cocci_id/* sound/soc/codecs/ssm2518.c 409 */;
	unsigned int cocci_id/* sound/soc/codecs/ssm2518.c 340 */;
	struct ssm2518 *cocci_id/* sound/soc/codecs/ssm2518.c 339 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/ssm2518.c 338 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/ssm2518.c 336 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/ssm2518.c 336 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/ssm2518.c 335 */;
	int cocci_id/* sound/soc/codecs/ssm2518.c 335 */;
	const unsigned int *cocci_id/* sound/soc/codecs/ssm2518.c 314 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/ssm2518.c 306 */;
	const unsigned int cocci_id/* sound/soc/codecs/ssm2518.c 302 */[];
	const struct ssm2518_mcs_lut cocci_id/* sound/soc/codecs/ssm2518.c 262 */[];
	struct ssm2518_mcs_lut {
		unsigned int rate;
		const unsigned int *sysclks;
	} cocci_id/* sound/soc/codecs/ssm2518.c 242 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/ssm2518.c 237 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/ssm2518.c 229 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ssm2518.c 186 */[];
	const char *constcocci_id/* sound/soc/codecs/ssm2518.c 165 */[];
	const  cocci_id/* sound/soc/codecs/ssm2518.c 148 */(ssm2518_limiter_tlv,
							    0,7,
							    TLV_DB_SCALE_ITEM(-2200,200,0),
							    7,15,
							    TLV_DB_SCALE_ITEM(-800,100,0));
	const struct reg_default cocci_id/* sound/soc/codecs/ssm2518.c 120 */[];
	struct ssm2518 {
		struct regmap *regmap;
		bool right_j;
		unsigned int sysclk;
		const struct snd_pcm_hw_constraint_list *constraints;
		int enable_gpio;
	} cocci_id/* sound/soc/codecs/ssm2518.c 110 */;
}

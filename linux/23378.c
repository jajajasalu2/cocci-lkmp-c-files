cocci_test_suite() {
	struct input_dev *cocci_id/* sound/soc/codecs/cs42l56.c 998 */;
	unsigned int cocci_id/* sound/soc/codecs/cs42l56.c 998 */;
	int cocci_id/* sound/soc/codecs/cs42l56.c 998 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cs42l56.c 966 */;
	struct cs42l56_private cocci_id/* sound/soc/codecs/cs42l56.c 964 */;
	struct work_struct *cocci_id/* sound/soc/codecs/cs42l56.c 961 */;
	void cocci_id/* sound/soc/codecs/cs42l56.c 961 */;
	int cocci_id/* sound/soc/codecs/cs42l56.c 956 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs42l56.c 937 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs42l56.c 930 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cs42l56.c 879 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs42l56.c 859 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs42l56.c 858 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs42l56.c 803 */;
	const struct cs42l56_clk_para cocci_id/* sound/soc/codecs/cs42l56.c 633 */[];
	struct cs42l56_clk_para {
		u32 mclk;
		u32 srate;
		u8 ratio;
	} cocci_id/* sound/soc/codecs/cs42l56.c 627 */;
	const struct reg_default cocci_id/* sound/soc/codecs/cs42l56.c 62 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs42l56.c 553 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs42l56.c 476 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l56.c 367 */[];
	const char *constcocci_id/* sound/soc/codecs/cs42l56.c 36 */[CS42L56_NUM_SUPPLIES];
	const unsigned int cocci_id/* sound/soc/codecs/cs42l56.c 252 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l56.c 232 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/cs42l56.c 227 */;
	const char *constcocci_id/* sound/soc/codecs/cs42l56.c 224 */[];
	const  cocci_id/* sound/soc/codecs/cs42l56.c 145 */(alc_tlv,
							    0,2,
							    TLV_DB_SCALE_ITEM(-3000,600,0),
							    3,7,
							    TLV_DB_SCALE_ITEM(-1200,300,0));
	const  cocci_id/* sound/soc/codecs/cs42l56.c 141 */(ngb_tlv,
							    0,2,
							    TLV_DB_SCALE_ITEM(-6400,600,0),
							    3,7,
							    TLV_DB_SCALE_ITEM(-4600,300,0));
	const  cocci_id/* sound/soc/codecs/cs42l56.c 137 */(ngnb_tlv,
							    0,1,
							    TLV_DB_SCALE_ITEM(-8200,600,0),
							    2,5,
							    TLV_DB_SCALE_ITEM(-7600,300,0));
	struct i2c_driver cocci_id/* sound/soc/codecs/cs42l56.c 1340 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs42l56.c 1334 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs42l56.c 1327 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs42l56.c 1170 */;
	u32 cocci_id/* sound/soc/codecs/cs42l56.c 1135 */;
	struct device_node *cocci_id/* sound/soc/codecs/cs42l56.c 1134 */;
	struct cs42l56_platform_data *cocci_id/* sound/soc/codecs/cs42l56.c 1132 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs42l56.c 1131 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs42l56.c 1119 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs42l56.c 1102 */;
	bool cocci_id/* sound/soc/codecs/cs42l56.c 109 */;
	long int cocci_id/* sound/soc/codecs/cs42l56.c 1027 */;
	const char *cocci_id/* sound/soc/codecs/cs42l56.c 1024 */;
	size_t cocci_id/* sound/soc/codecs/cs42l56.c 1024 */;
	struct device_attribute *cocci_id/* sound/soc/codecs/cs42l56.c 1023 */;
	struct device *cocci_id/* sound/soc/codecs/cs42l56.c 1022 */;
	ssize_t cocci_id/* sound/soc/codecs/cs42l56.c 1022 */;
	struct cs42l56_private *cocci_id/* sound/soc/codecs/cs42l56.c 1002 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs42l56.c 1001 */;
	struct cs42l56_private {
		struct regmap *regmap;
		struct snd_soc_component *component;
		struct device *dev;
		struct cs42l56_platform_data pdata;
		struct regulator_bulk_data supplies[CS42L56_NUM_SUPPLIES];
		u32 mclk;
		u8 mclk_prediv;
		u8 mclk_div2;
		u8 mclk_ratio;
		u8 iface;
		u8 iface_fmt;
		u8 iface_inv;
#if IS_ENABLED(CONFIG_INPUT)
		struct input_dev *beep;
		struct work_struct beep_work;
		int beep_rate;
#endif
	} cocci_id/*  1 */;
}

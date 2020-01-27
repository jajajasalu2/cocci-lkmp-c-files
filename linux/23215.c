cocci_test_suite() {
	long int cocci_id/* sound/soc/codecs/cs42l52.c 963 */;
	const char *cocci_id/* sound/soc/codecs/cs42l52.c 960 */;
	size_t cocci_id/* sound/soc/codecs/cs42l52.c 960 */;
	struct device_attribute *cocci_id/* sound/soc/codecs/cs42l52.c 959 */;
	struct device *cocci_id/* sound/soc/codecs/cs42l52.c 958 */;
	ssize_t cocci_id/* sound/soc/codecs/cs42l52.c 958 */;
	struct input_dev *cocci_id/* sound/soc/codecs/cs42l52.c 934 */;
	unsigned int cocci_id/* sound/soc/codecs/cs42l52.c 934 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cs42l52.c 902 */;
	struct cs42l52_private cocci_id/* sound/soc/codecs/cs42l52.c 900 */;
	struct work_struct *cocci_id/* sound/soc/codecs/cs42l52.c 897 */;
	void cocci_id/* sound/soc/codecs/cs42l52.c 897 */;
	int cocci_id/* sound/soc/codecs/cs42l52.c 892 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs42l52.c 873 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs42l52.c 866 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cs42l52.c 832 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs42l52.c 804 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs42l52.c 803 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs42l52.c 787 */;
	u8 cocci_id/* sound/soc/codecs/cs42l52.c 731 */;
	u_int cocci_id/* sound/soc/codecs/cs42l52.c 698 */;
	const struct cs42l52_clk_para cocci_id/* sound/soc/codecs/cs42l52.c 643 */[];
	struct cs42l52_clk_para {
		u32 mclk;
		u32 rate;
		u8 speed;
		u8 group;
		u8 videoclk;
		u8 ratio;
		u8 mclkdiv2;
	} cocci_id/* sound/soc/codecs/cs42l52.c 633 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs42l52.c 560 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/cs42l52.c 54 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs42l52.c 488 */[];
	struct cs42l52_platform_data *cocci_id/* sound/soc/codecs/cs42l52.c 475 */;
	struct cs42l52_private *cocci_id/* sound/soc/codecs/cs42l52.c 474 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs42l52.c 472 */;
	int cocci_id/* sound/soc/codecs/cs42l52.c 472 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l52.c 464 */[];
	struct cs42l52_private {
		struct regmap *regmap;
		struct snd_soc_component *component;
		struct device *dev;
		struct sp_config config;
		struct cs42l52_platform_data pdata;
		u32 sysclk;
		u8 mclksel;
		u32 mclk;
		u8 flags;
		struct input_dev *beep;
		struct work_struct beep_work;
		int beep_rate;
	} cocci_id/* sound/soc/codecs/cs42l52.c 39 */;
	struct sp_config {
		u8 spc,format,spfs;
		u32 srate;
	} cocci_id/* sound/soc/codecs/cs42l52.c 34 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l52.c 291 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/cs42l52.c 285 */;
	const unsigned int cocci_id/* sound/soc/codecs/cs42l52.c 283 */[];
	const char *constcocci_id/* sound/soc/codecs/cs42l52.c 237 */[];
	const  cocci_id/* sound/soc/codecs/cs42l52.c 144 */(limiter_tlv,
							    0,2,
							    TLV_DB_SCALE_ITEM(-3000,600,0),
							    3,7,
							    TLV_DB_SCALE_ITEM(-1200,300,0));
	struct i2c_driver cocci_id/* sound/soc/codecs/cs42l52.c 1220 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs42l52.c 1214 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs42l52.c 1207 */[];
	u32 cocci_id/* sound/soc/codecs/cs42l52.c 1096 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs42l52.c 1089 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs42l52.c 1088 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs42l52.c 1076 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/cs42l52.c 1065 */[];
	bool cocci_id/* sound/soc/codecs/cs42l52.c 106 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs42l52.c 1047 */;
}

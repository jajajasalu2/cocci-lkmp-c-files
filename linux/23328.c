cocci_test_suite() {
	u8 cocci_id/* sound/soc/codecs/cs42l73.c 937 */;
	const struct cs42l73_mclkx_div cocci_id/* sound/soc/codecs/cs42l73.c 837 */[];
	struct cs42l73_mclkx_div {
		u32 mclkx;
		u8 ratio;
		u8 mclkdiv;
	} cocci_id/* sound/soc/codecs/cs42l73.c 831 */;
	const struct cs42l73_mclk_div cocci_id/* sound/soc/codecs/cs42l73.c 787 */[];
	struct cs42l73_mclk_div {
		u32 mclk;
		u32 srate;
		u8 mmcc;
	} cocci_id/* sound/soc/codecs/cs42l73.c 781 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs42l73.c 640 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs42l73.c 531 */[];
	struct cs42l73_private *cocci_id/* sound/soc/codecs/cs42l73.c 500 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs42l73.c 499 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cs42l73.c 497 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/cs42l73.c 496 */;
	int cocci_id/* sound/soc/codecs/cs42l73.c 496 */;
	const struct reg_default cocci_id/* sound/soc/codecs/cs42l73.c 45 */[];
	struct cs42l73_private {
		struct cs42l73_platform_data pdata;
		struct sp_config config[3];
		struct regmap *regmap;
		u32 sysclk;
		u8 mclksel;
		u32 mclk;
		int shutdwn_delay;
	} cocci_id/* sound/soc/codecs/cs42l73.c 35 */;
	struct sp_config {
		u8 spc,mmcc,spfs;
		u32 srate;
	} cocci_id/* sound/soc/codecs/cs42l73.c 31 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l73.c 291 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs42l73.c 288 */;
	const char *constcocci_id/* sound/soc/codecs/cs42l73.c 259 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/cs42l73.c 241 */;
	const  cocci_id/* sound/soc/codecs/cs42l73.c 173 */(limiter_tlv,
							    0,2,
							    TLV_DB_SCALE_ITEM(-3000,600,0),
							    3,7,
							    TLV_DB_SCALE_ITEM(-1200,300,0));
	const  cocci_id/* sound/soc/codecs/cs42l73.c 160 */(hpaloa_tlv,
							    0,13,
							    TLV_DB_SCALE_ITEM(-7600,200,0),
							    14,75,
							    TLV_DB_SCALE_ITEM(-4900,100,0));
	bool cocci_id/* sound/soc/codecs/cs42l73.c 149 */;
	struct device *cocci_id/* sound/soc/codecs/cs42l73.c 149 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/cs42l73.c 1376 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cs42l73.c 1369 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/cs42l73.c 1363 */[];
	struct cs42l73_platform_data *cocci_id/* sound/soc/codecs/cs42l73.c 1277 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cs42l73.c 1274 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cs42l73.c 1273 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs42l73.c 1261 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs42l73.c 1245 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs42l73.c 1165 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs42l73.c 1157 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/cs42l73.c 1139 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cs42l73.c 1093 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs42l73.c 1046 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs42l73.c 1045 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs42l73.c 1044 */;
	void cocci_id/* sound/soc/codecs/cs42l73.c 1022 */;
	u32 cocci_id/* sound/soc/codecs/cs42l73.c 1012 */;
	unsigned int cocci_id/* sound/soc/codecs/cs42l73.c 1012 */;
	const unsigned int cocci_id/* sound/soc/codecs/cs42l73.c 1007 */[];
}

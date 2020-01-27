cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max9850.c 88 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max9850.c 69 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max9850.c 59 */[];
	const  cocci_id/* sound/soc/codecs/max9850.c 52 */(max9850_tlv,
							   0x18,0x1f,
							   TLV_DB_SCALE_ITEM(-7450,400,0),
							   0x20,0x33,
							   TLV_DB_SCALE_ITEM(-4150,200,0),
							   0x34,0x37,
							   TLV_DB_SCALE_ITEM(-150,100,0),
							   0x38,0x3f,
							   TLV_DB_SCALE_ITEM(250,50,0));
	const struct regmap_config cocci_id/* sound/soc/codecs/max9850.c 43 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/max9850.c 330 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max9850.c 324 */[];
	bool cocci_id/* sound/soc/codecs/max9850.c 32 */;
	struct device *cocci_id/* sound/soc/codecs/max9850.c 32 */;
	struct max9850_priv cocci_id/* sound/soc/codecs/max9850.c 308 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max9850.c 303 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max9850.c 302 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max9850.c 286 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max9850.c 262 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max9850.c 256 */;
	struct max9850_priv {
		struct regmap *regmap;
		unsigned int sysclk;
	} cocci_id/* sound/soc/codecs/max9850.c 25 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max9850.c 225 */;
	unsigned int cocci_id/* sound/soc/codecs/max9850.c 171 */;
	u8 cocci_id/* sound/soc/codecs/max9850.c 118 */;
	u64 cocci_id/* sound/soc/codecs/max9850.c 117 */;
	struct max9850_priv *cocci_id/* sound/soc/codecs/max9850.c 116 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max9850.c 115 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max9850.c 113 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max9850.c 112 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max9850.c 111 */;
	int cocci_id/* sound/soc/codecs/max9850.c 111 */;
}

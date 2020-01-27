cocci_test_suite() {
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max9867.c 92 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max9867.c 87 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max9867.c 70 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/max9867.c 541 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/max9867.c 535 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max9867.c 529 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max9867.c 500 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max9867.c 499 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max9867.c 489 */;
	const struct reg_default cocci_id/* sound/soc/codecs/max9867.c 466 */[];
	bool cocci_id/* sound/soc/codecs/max9867.c 453 */;
	struct device *cocci_id/* sound/soc/codecs/max9867.c 453 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max9867.c 437 */;
	const  cocci_id/* sound/soc/codecs/max9867.c 42 */(max9867_micboost_tlv,
							   0,2,
							   TLV_DB_SCALE_ITEM(-2000,2000,1),
							   3,3,
							   TLV_DB_SCALE_ITEM(3000,0,0));
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max9867.c 404 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max9867.c 362 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max9867.c 354 */;
	u8 cocci_id/* sound/soc/codecs/max9867.c 302 */;
	const  cocci_id/* sound/soc/codecs/max9867.c 30 */(max9867_master_tlv,
							   0,2,
							   TLV_DB_SCALE_ITEM(-8600,200,1),
							   3,17,
							   TLV_DB_SCALE_ITEM(-7800,400,0),
							   18,25,
							   TLV_DB_SCALE_ITEM(-2000,200,0),
							   26,34,
							   TLV_DB_SCALE_ITEM(-500,100,0),
							   35,40,
							   TLV_DB_SCALE_ITEM(350,50,0));
	const char *constcocci_id/* sound/soc/codecs/max9867.c 24 */[];
	unsigned int cocci_id/* sound/soc/codecs/max9867.c 189 */;
	struct max9867_priv *cocci_id/* sound/soc/codecs/max9867.c 188 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max9867.c 187 */;
	unsigned long int cocci_id/* sound/soc/codecs/max9867.c 186 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max9867.c 183 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max9867.c 183 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max9867.c 182 */;
	int cocci_id/* sound/soc/codecs/max9867.c 182 */;
	struct max9867_priv {
		struct regmap *regmap;
		const struct snd_pcm_hw_constraint_list *constraints;
		unsigned int sysclk,pclk;
		bool master,dsp_a;
	} cocci_id/* sound/soc/codecs/max9867.c 162 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/max9867.c 148 */;
	const unsigned int cocci_id/* sound/soc/codecs/max9867.c 144 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max9867.c 120 */[];
}

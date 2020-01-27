cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/adau1373.c 889 */[];
	const char *cocci_id/* sound/soc/codecs/adau1373.c 826 */;
	unsigned int cocci_id/* sound/soc/codecs/adau1373.c 825 */;
	struct adau1373 *cocci_id/* sound/soc/codecs/adau1373.c 824 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/adau1373.c 823 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/adau1373.c 820 */;
	int cocci_id/* sound/soc/codecs/adau1373.c 820 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/adau1373.c 684 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/adau1373.c 578 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/adau1373.c 549 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/adau1373.c 434 */[];
	const  cocci_id/* sound/soc/codecs/adau1373.c 415 */(adau1373_3d_tlv,
							     0,0,
							     TLV_DB_SCALE_ITEM(0,0,0),
							     1,7,
							     TLV_DB_LINEAR_ITEM(-1800,-120));
	const char *cocci_id/* sound/soc/codecs/adau1373.c 405 */[];
	const  cocci_id/* sound/soc/codecs/adau1373.c 383 */(adau1373_bass_tlv,
							     0,2,
							     TLV_DB_SCALE_ITEM(-600,600,1),
							     3,4,
							     TLV_DB_SCALE_ITEM(950,250,0),
							     5,7,
							     TLV_DB_SCALE_ITEM(1400,150,0));
	const unsigned int cocci_id/* sound/soc/codecs/adau1373.c 375 */[];
	struct adau1373 {
		struct regmap *regmap;
		struct adau1373_dai dais[3];
	} cocci_id/* sound/soc/codecs/adau1373.c 34 */;
	const  cocci_id/* sound/soc/codecs/adau1373.c 323 */(adau1373_out_tlv,
							     0,7,
							     TLV_DB_SCALE_ITEM(-7900,400,1),
							     8,15,
							     TLV_DB_SCALE_ITEM(-4700,300,0),
							     16,23,
							     TLV_DB_SCALE_ITEM(-2300,200,0),
							     24,31,
							     TLV_DB_SCALE_ITEM(-700,100,0));
	struct adau1373_dai {
		unsigned int clk_src;
		unsigned int sysclk;
		bool enable_src;
		bool master;
	} cocci_id/* sound/soc/codecs/adau1373.c 27 */;
	const struct reg_default cocci_id/* sound/soc/codecs/adau1373.c 155 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/adau1373.c 1507 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/adau1373.c 1501 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/adau1373.c 1477 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/adau1373.c 1476 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/adau1373.c 1460 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/adau1373.c 1448 */;
	struct device *cocci_id/* sound/soc/codecs/adau1373.c 1437 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/adau1373.c 1407 */;
	bool cocci_id/* sound/soc/codecs/adau1373.c 1354 */;
	struct adau1373_platform_data *cocci_id/* sound/soc/codecs/adau1373.c 1353 */;
	enum adau1373_micbias_voltage cocci_id/* sound/soc/codecs/adau1373.c 1336 */;
	uint8_t *cocci_id/* sound/soc/codecs/adau1373.c 1328 */;
	void cocci_id/* sound/soc/codecs/adau1373.c 1327 */;
	uint8_t cocci_id/* sound/soc/codecs/adau1373.c 1257 */[5];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/adau1373.c 1189 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/adau1373.c 1180 */;
	struct adau1373_dai *cocci_id/* sound/soc/codecs/adau1373.c 1035 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/adau1373.c 1031 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/adau1373.c 1031 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/adau1373.c 1030 */;
}

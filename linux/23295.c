cocci_test_suite() {
	const struct reg_default cocci_id/* sound/soc/codecs/max98371.c 60 */[];
	const  cocci_id/* sound/soc/codecs/max98371.c 51 */(max98371_dht_rot_gain,
							    0,1,
							    TLV_DB_SCALE_ITEM(-50,-50,0),
							    2,6,
							    TLV_DB_SCALE_ITEM(-100,-100,0),
							    7,8,
							    TLV_DB_SCALE_ITEM(-800,-200,0),
							    9,11,
							    TLV_DB_SCALE_ITEM(-1200,-300,0),
							    12,13,
							    TLV_DB_SCALE_ITEM(-2000,-200,0),
							    14,15,
							    TLV_DB_SCALE_ITEM(-2500,-500,0));
	const  cocci_id/* sound/soc/codecs/max98371.c 42 */(max98371_dht_max_gain,
							    0,1,
							    TLV_DB_SCALE_ITEM(537,66,0),
							    2,3,
							    TLV_DB_SCALE_ITEM(677,82,0),
							    4,5,
							    TLV_DB_SCALE_ITEM(852,104,0),
							    6,7,
							    TLV_DB_SCALE_ITEM(1072,131,0),
							    8,9,
							    TLV_DB_SCALE_ITEM(1350,165,0),
							    10,11,
							    TLV_DB_SCALE_ITEM(1699,208,0));
	struct i2c_driver cocci_id/* sound/soc/codecs/max98371.c 417 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/max98371.c 411 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max98371.c 404 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max98371.c 369 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max98371.c 368 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max98371.c 357 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max98371.c 344 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max98371.c 330 */[];
	const  cocci_id/* sound/soc/codecs/max98371.c 33 */(max98371_dht_min_gain,
							    0,1,
							    TLV_DB_SCALE_ITEM(537,66,0),
							    2,3,
							    TLV_DB_SCALE_ITEM(677,82,0),
							    4,5,
							    TLV_DB_SCALE_ITEM(852,104,0),
							    6,7,
							    TLV_DB_SCALE_ITEM(1072,131,0),
							    8,9,
							    TLV_DB_SCALE_ITEM(1350,165,0),
							    10,11,
							    TLV_DB_SCALE_ITEM(1699,101,0));
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max98371.c 325 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max98371.c 315 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max98371.c 308 */[];
	const char *constcocci_id/* sound/soc/codecs/max98371.c 22 */[];
	struct max98371_priv *cocci_id/* sound/soc/codecs/max98371.c 219 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max98371.c 218 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max98371.c 216 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max98371.c 215 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max98371.c 214 */;
	int cocci_id/* sound/soc/codecs/max98371.c 214 */;
	unsigned int cocci_id/* sound/soc/codecs/max98371.c 181 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98371.c 159 */[];
	const  cocci_id/* sound/soc/codecs/max98371.c 152 */(max98371_gain_tlv,
							     0,7,
							     TLV_DB_SCALE_ITEM(0,50,0),
							     8,10,
							     TLV_DB_SCALE_ITEM(400,100,0));
	bool cocci_id/* sound/soc/codecs/max98371.c 142 */;
	struct device *cocci_id/* sound/soc/codecs/max98371.c 142 */;
}

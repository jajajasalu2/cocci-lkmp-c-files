cocci_test_suite() {
	bool cocci_id/* sound/soc/codecs/wm9090.c 83 */;
	struct device *cocci_id/* sound/soc/codecs/wm9090.c 83 */;
	struct wm9090_priv {
		struct wm9090_platform_data pdata;
		struct regmap *regmap;
	} cocci_id/* sound/soc/codecs/wm9090.c 63 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm9090.c 618 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm9090.c 611 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm9090.c 565 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm9090.c 564 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm9090.c 550 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm9090.c 540 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm9090.c 463 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm9090.c 412 */;
	struct wm9090_priv *cocci_id/* sound/soc/codecs/wm9090.c 411 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm9090.c 357 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm9090.c 325 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm9090.c 311 */[];
	unsigned int cocci_id/* sound/soc/codecs/wm9090.c 242 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm9090.c 241 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm9090.c 24 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm9090.c 239 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm9090.c 238 */;
	int cocci_id/* sound/soc/codecs/wm9090.c 238 */;
	const  cocci_id/* sound/soc/codecs/wm9090.c 162 */(spkboost_tlv,
							   0,6,
							   TLV_DB_SCALE_ITEM(0,150,0),
							   7,7,
							   TLV_DB_SCALE_ITEM(1200,0,0));
	const  cocci_id/* sound/soc/codecs/wm9090.c 157 */(mix_tlv,
							   0,2,
							   TLV_DB_SCALE_ITEM(-1200,300,0),
							   3,3,
							   TLV_DB_SCALE_ITEM(0,0,0));
	const  cocci_id/* sound/soc/codecs/wm9090.c 152 */(in_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(-600,0,0),
							   1,3,
							   TLV_DB_SCALE_ITEM(-350,350,0),
							   4,6,
							   TLV_DB_SCALE_ITEM(600,600,0));
	void cocci_id/* sound/soc/codecs/wm9090.c 133 */;
}

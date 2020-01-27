cocci_test_suite() {
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tpa6130a2.c 94 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tpa6130a2.c 93 */;
	bool cocci_id/* sound/soc/codecs/tpa6130a2.c 40 */;
	struct tpa6130a2_data {
		struct device *dev;
		struct regmap *regmap;
		struct regulator *supply;
		int power_gpio;
		enum tpa_model id;
	} cocci_id/* sound/soc/codecs/tpa6130a2.c 32 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tpa6130a2.c 316 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tpa6130a2.c 308 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tpa6130a2.c 300 */[];
	enum tpa_model{TPA6130A2, TPA6140A2,} cocci_id/* sound/soc/codecs/tpa6130a2.c 26 */;
	unsigned int cocci_id/* sound/soc/codecs/tpa6130a2.c 220 */;
	const char *cocci_id/* sound/soc/codecs/tpa6130a2.c 219 */;
	struct device_node *cocci_id/* sound/soc/codecs/tpa6130a2.c 218 */;
	struct tpa6130a2_platform_data *cocci_id/* sound/soc/codecs/tpa6130a2.c 217 */;
	struct device *cocci_id/* sound/soc/codecs/tpa6130a2.c 215 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tpa6130a2.c 213 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tpa6130a2.c 212 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tpa6130a2.c 203 */;
	const struct reg_default cocci_id/* sound/soc/codecs/tpa6130a2.c 198 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tpa6130a2.c 189 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tpa6130a2.c 175 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tpa6130a2.c 155 */[];
	struct tpa6130a2_data *cocci_id/* sound/soc/codecs/tpa6130a2.c 145 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tpa6130a2.c 143 */;
	int cocci_id/* sound/soc/codecs/tpa6130a2.c 143 */;
	const  cocci_id/* sound/soc/codecs/tpa6130a2.c 131 */(tpa6140_tlv,
							      0,8,
							      TLV_DB_SCALE_ITEM(-5900,400,0),
							      9,16,
							      TLV_DB_SCALE_ITEM(-2500,200,0),
							      17,31,
							      TLV_DB_SCALE_ITEM(-1000,100,0));
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tpa6130a2.c 125 */[];
	const  cocci_id/* sound/soc/codecs/tpa6130a2.c 112 */(tpa6130_tlv,
							      0,1,
							      TLV_DB_SCALE_ITEM(-5950,600,0),
							      2,3,
							      TLV_DB_SCALE_ITEM(-5000,250,0),
							      4,5,
							      TLV_DB_SCALE_ITEM(-4550,160,0),
							      6,7,
							      TLV_DB_SCALE_ITEM(-4140,190,0),
							      8,9,
							      TLV_DB_SCALE_ITEM(-3650,120,0),
							      10,11,
							      TLV_DB_SCALE_ITEM(-3330,160,0),
							      12,13,
							      TLV_DB_SCALE_ITEM(-3040,180,0),
							      14,20,
							      TLV_DB_SCALE_ITEM(-2710,110,0),
							      21,37,
							      TLV_DB_SCALE_ITEM(-1960,74,0),
							      38,63,
							      TLV_DB_SCALE_ITEM(-720,45,0));
}

cocci_test_suite() {
	const  cocci_id/* sound/soc/codecs/max9768.c 63 */(volume_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(-16150,0,0),
							   1,1,
							   TLV_DB_SCALE_ITEM(-9280,0,0),
							   2,2,
							   TLV_DB_SCALE_ITEM(-9030,0,0),
							   3,3,
							   TLV_DB_SCALE_ITEM(-8680,0,0),
							   4,4,
							   TLV_DB_SCALE_ITEM(-8430,0,0),
							   5,5,
							   TLV_DB_SCALE_ITEM(-8080,0,0),
							   6,6,
							   TLV_DB_SCALE_ITEM(-7830,0,0),
							   7,7,
							   TLV_DB_SCALE_ITEM(-7470,0,0),
							   8,8,
							   TLV_DB_SCALE_ITEM(-7220,0,0),
							   9,9,
							   TLV_DB_SCALE_ITEM(-6870,0,0),
							   10,10,
							   TLV_DB_SCALE_ITEM(-6620,0,0),
							   11,11,
							   TLV_DB_SCALE_ITEM(-6270,0,0),
							   12,12,
							   TLV_DB_SCALE_ITEM(-6020,0,0),
							   13,13,
							   TLV_DB_SCALE_ITEM(-5670,0,0),
							   14,14,
							   TLV_DB_SCALE_ITEM(-5420,0,0),
							   15,17,
							   TLV_DB_SCALE_ITEM(-5060,250,0),
							   18,18,
							   TLV_DB_SCALE_ITEM(-4370,0,0),
							   19,19,
							   TLV_DB_SCALE_ITEM(-4210,0,0),
							   20,20,
							   TLV_DB_SCALE_ITEM(-3960,0,0),
							   21,21,
							   TLV_DB_SCALE_ITEM(-3760,0,0),
							   22,22,
							   TLV_DB_SCALE_ITEM(-3600,0,0),
							   23,23,
							   TLV_DB_SCALE_ITEM(-3340,0,0),
							   24,24,
							   TLV_DB_SCALE_ITEM(-3150,0,0),
							   25,25,
							   TLV_DB_SCALE_ITEM(-2980,0,0),
							   26,26,
							   TLV_DB_SCALE_ITEM(-2720,0,0),
							   27,27,
							   TLV_DB_SCALE_ITEM(-2520,0,0),
							   28,30,
							   TLV_DB_SCALE_ITEM(-2350,190,0),
							   31,31,
							   TLV_DB_SCALE_ITEM(-1750,0,0),
							   32,34,
							   TLV_DB_SCALE_ITEM(-1640,100,0),
							   35,37,
							   TLV_DB_SCALE_ITEM(-1310,110,0),
							   38,39,
							   TLV_DB_SCALE_ITEM(-990,100,0),
							   40,40,
							   TLV_DB_SCALE_ITEM(-710,0,0),
							   41,41,
							   TLV_DB_SCALE_ITEM(-600,0,0),
							   42,42,
							   TLV_DB_SCALE_ITEM(-500,0,0),
							   43,43,
							   TLV_DB_SCALE_ITEM(-340,0,0),
							   44,44,
							   TLV_DB_SCALE_ITEM(-190,0,0),
							   45,45,
							   TLV_DB_SCALE_ITEM(-50,0,0),
							   46,46,
							   TLV_DB_SCALE_ITEM(50,0,0),
							   47,50,
							   TLV_DB_SCALE_ITEM(120,40,0),
							   51,57,
							   TLV_DB_SCALE_ITEM(290,50,0),
							   58,58,
							   TLV_DB_SCALE_ITEM(650,0,0),
							   59,62,
							   TLV_DB_SCALE_ITEM(700,60,0),
							   63,63,
							   TLV_DB_SCALE_ITEM(950,0,0));
	struct max9768 *cocci_id/* sound/soc/codecs/max9768.c 44 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max9768.c 43 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/max9768.c 41 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/max9768.c 40 */;
	int cocci_id/* sound/soc/codecs/max9768.c 40 */;
	const struct reg_default cocci_id/* sound/soc/codecs/max9768.c 35 */[];
	struct max9768 {
		struct regmap *regmap;
		int mute_gpio;
		int shdn_gpio;
		u32 flags;
	} cocci_id/* sound/soc/codecs/max9768.c 28 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/max9768.c 214 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max9768.c 208 */[];
	struct max9768_pdata *cocci_id/* sound/soc/codecs/max9768.c 174 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max9768.c 171 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max9768.c 170 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max9768.c 161 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max9768.c 151 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max9768.c 124 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max9768.c 117 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max9768.c 113 */[];
}

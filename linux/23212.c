cocci_test_suite() {
	u8 cocci_id/* sound/soc/codecs/tas5720.c 89 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tas5720.c 722 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tas5720.c 714 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tas5720.c 706 */[];
	const struct regmap_config *cocci_id/* sound/soc/codecs/tas5720.c 640 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tas5720.c 636 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tas5720.c 635 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tas5720.c 621 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tas5720.c 603 */;
	bool cocci_id/* sound/soc/codecs/tas5720.c 59 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tas5720.c 561 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tas5720.c 556 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tas5720.c 55 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tas5720.c 549 */[];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tas5720.c 54 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tas5720.c 533 */[];
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tas5720.c 53 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tas5720.c 506 */;
	const  cocci_id/* sound/soc/codecs/tas5720.c 487 */(dac_analog_tlv,
							    0x0,0x0,
							    TLV_DB_SCALE_ITEM(1920,0,0),
							    0x1,0x1,
							    TLV_DB_SCALE_ITEM(2070,0,0),
							    0x2,0x2,
							    TLV_DB_SCALE_ITEM(2350,0,0),
							    0x3,0x3,
							    TLV_DB_SCALE_ITEM(2630,0,0));
	const struct regmap_config cocci_id/* sound/soc/codecs/tas5720.c 465 */;
	struct tas5720_data {
		struct snd_soc_component *component;
		struct regmap *regmap;
		struct i2c_client *tas5720_client;
		enum tas572x_type devtype;
		struct regulator_bulk_data supplies[TAS5720_NUM_SUPPLIES];
		struct delayed_work fault_check_work;
		unsigned int last_fault;
	} cocci_id/* sound/soc/codecs/tas5720.c 43 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tas5720.c 364 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tas5720.c 363 */;
	const char *constcocci_id/* sound/soc/codecs/tas5720.c 36 */[];
	void cocci_id/* sound/soc/codecs/tas5720.c 350 */;
	enum tas572x_type{TAS5720, TAS5722,} cocci_id/* sound/soc/codecs/tas5720.c 31 */;
	unsigned int cocci_id/* sound/soc/codecs/tas5720.c 280 */;
	struct tas5720_data *cocci_id/* sound/soc/codecs/tas5720.c 279 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tas5720.c 277 */;
	int cocci_id/* sound/soc/codecs/tas5720.c 277 */;
	struct device *cocci_id/* sound/soc/codecs/tas5720.c 221 */;
	struct tas5720_data cocci_id/* sound/soc/codecs/tas5720.c 219 */;
	struct work_struct *cocci_id/* sound/soc/codecs/tas5720.c 217 */;
}

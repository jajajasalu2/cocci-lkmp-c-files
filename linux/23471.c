cocci_test_suite() {
	const struct reg_default cocci_id/* sound/soc/codecs/da9055.c 944 */[];
	struct da9055_priv {
		struct regmap *regmap;
		unsigned int mclk_rate;
		int master;
		struct da9055_platform_data *pdata;
	} cocci_id/* sound/soc/codecs/da9055.c 937 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/da9055.c 848 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/da9055.c 763 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da9055.c 716 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da9055.c 701 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/da9055.c 478 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/da9055.c 477 */;
	u8 cocci_id/* sound/soc/codecs/da9055.c 450 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/da9055.c 450 */;
	int cocci_id/* sound/soc/codecs/da9055.c 450 */;
	const char *constcocci_id/* sound/soc/codecs/da9055.c 423 */[];
	const  cocci_id/* sound/soc/codecs/da9055.c 300 */(alc_analog_gain_tlv,
							   0x0,0x0,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							   
							   0x01,0x07,
							   TLV_DB_SCALE_ITEM(0,600,0));
	const  cocci_id/* sound/soc/codecs/da9055.c 294 */(digital_gain_tlv,
							   0x0,0x07,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							   
							   0x08,0x7f,
							   TLV_DB_SCALE_ITEM(-7800,75,0));
	const  cocci_id/* sound/soc/codecs/da9055.c 288 */(aux_vol_tlv,
							   0x0,0x10,
							   TLV_DB_SCALE_ITEM(-5400,0,0),
							   
							   0x11,0x3f,
							   TLV_DB_SCALE_ITEM(-5400,150,0));
	enum clk_src{DA9055_CLKSRC_MCLK,} cocci_id/* sound/soc/codecs/da9055.c 282 */;
	const struct pll_div cocci_id/* sound/soc/codecs/da9055.c 249 */[];
	struct pll_div {
		int fref;
		int fout;
		u8 frac_top;
		u8 frac_bot;
		u8 integer;
		u8 mode;
	} cocci_id/* sound/soc/codecs/da9055.c 239 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/da9055.c 1528 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/da9055.c 1521 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/da9055.c 1515 */[];
	struct da9055_priv cocci_id/* sound/soc/codecs/da9055.c 1482 */;
	struct da9055_platform_data *cocci_id/* sound/soc/codecs/da9055.c 1479 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/da9055.c 1476 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/da9055.c 1475 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/da9055.c 1465 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/da9055.c 1450 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/da9055.c 1353 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/da9055.c 1330 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/da9055.c 1322 */;
	unsigned int cocci_id/* sound/soc/codecs/da9055.c 1157 */;
	u32 cocci_id/* sound/soc/codecs/da9055.c 1054 */;
	struct da9055_priv *cocci_id/* sound/soc/codecs/da9055.c 1052 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/da9055.c 1049 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/da9055.c 1048 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/da9055.c 1047 */;
	bool cocci_id/* sound/soc/codecs/da9055.c 1020 */;
	struct device *cocci_id/* sound/soc/codecs/da9055.c 1020 */;
}

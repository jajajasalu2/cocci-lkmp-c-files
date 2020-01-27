cocci_test_suite() {
	u64 cocci_id/* sound/soc/codecs/sgtl5000.c 987 */;
	enum sgtl5000_regulator_supplies{VDDA, VDDIO, VDDD, SGTL5000_SUPPLY_NUM,} cocci_id/* sound/soc/codecs/sgtl5000.c 95 */;
	const u16 cocci_id/* sound/soc/codecs/sgtl5000.c 81 */[97];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/sgtl5000.c 778 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/sgtl5000.c 706 */[];
	const  cocci_id/* sound/soc/codecs/sgtl5000.c 683 */(mic_gain_tlv,
							     0,0,
							     TLV_DB_SCALE_ITEM(0,0,0),
							     1,3,
							     TLV_DB_SCALE_ITEM(2000,1000,0));
	u16 cocci_id/* sound/soc/codecs/sgtl5000.c 636 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/sgtl5000.c 632 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/sgtl5000.c 508 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/sgtl5000.c 476 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/sgtl5000.c 432 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/sgtl5000.c 42 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/sgtl5000.c 380 */;
	const char *cocci_id/* sound/soc/codecs/sgtl5000.c 372 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/sgtl5000.c 356 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/sgtl5000.c 354 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/sgtl5000.c 353 */;
	int cocci_id/* sound/soc/codecs/sgtl5000.c 353 */;
	const u16 cocci_id/* sound/soc/codecs/sgtl5000.c 291 */[];
	struct sgtl5000_priv *cocci_id/* sound/soc/codecs/sgtl5000.c 270 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/sgtl5000.c 1776 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/sgtl5000.c 1770 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/sgtl5000.c 1763 */[];
	void cocci_id/* sound/soc/codecs/sgtl5000.c 174 */;
	u32 cocci_id/* sound/soc/codecs/sgtl5000.c 1578 */;
	struct device_node *cocci_id/* sound/soc/codecs/sgtl5000.c 1577 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/sgtl5000.c 1573 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/sgtl5000.c 1532 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/sgtl5000.c 1516 */;
	unsigned int cocci_id/* sound/soc/codecs/sgtl5000.c 1461 */;
	struct regulator *cocci_id/* sound/soc/codecs/sgtl5000.c 1422 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/sgtl5000.c 1417 */;
	struct sgtl5000_priv {
		int sysclk;
		int master;
		int fmt;
		struct regulator_bulk_data supplies[SGTL5000_SUPPLY_NUM];
		int num_supplies;
		struct regmap *regmap;
		struct clk *mclk;
		int revision;
		u8 micbias_resistor;
		u8 micbias_voltage;
		u8 lrclk_strength;
		u8 sclk_strength;
		u16 mute_state[LAST_POWER_EVENT + 1];
	} cocci_id/* sound/soc/codecs/sgtl5000.c 141 */;
	enum{HP_POWER_EVENT, DAC_POWER_EVENT, ADC_POWER_EVENT, LAST_POWER_EVENT=ADC_POWER_EVENT,} cocci_id/* sound/soc/codecs/sgtl5000.c 133 */;
	size_t cocci_id/* sound/soc/codecs/sgtl5000.c 1299 */;
	const u8 cocci_id/* sound/soc/codecs/sgtl5000.c 1270 */[];
	enum{I2S_SCLK_STRENGTH_DISABLE, I2S_SCLK_STRENGTH_LOW, I2S_SCLK_STRENGTH_MEDIUM, I2S_SCLK_STRENGTH_HIGH,} cocci_id/* sound/soc/codecs/sgtl5000.c 126 */;
	bool cocci_id/* sound/soc/codecs/sgtl5000.c 1204 */;
	struct device *cocci_id/* sound/soc/codecs/sgtl5000.c 1204 */;
	enum{I2S_LRCLK_STRENGTH_DISABLE, I2S_LRCLK_STRENGTH_LOW, I2S_LRCLK_STRENGTH_MEDIUM, I2S_LRCLK_STRENGTH_HIGH,} cocci_id/* sound/soc/codecs/sgtl5000.c 119 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/sgtl5000.c 1168 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/sgtl5000.c 1161 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/sgtl5000.c 1126 */;
	enum sgtl5000_micbias_resistor{SGTL5000_MICBIAS_OFF=0, SGTL5000_MICBIAS_2K=2, SGTL5000_MICBIAS_4K=4, SGTL5000_MICBIAS_8K=8,} cocci_id/* sound/soc/codecs/sgtl5000.c 112 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/sgtl5000.c 1048 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/sgtl5000.c 1047 */;
	const char *cocci_id/* sound/soc/codecs/sgtl5000.c 103 */[SGTL5000_SUPPLY_NUM];
}

cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/da7213.c 931 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/da7213.c 808 */[];
	bool cocci_id/* sound/soc/codecs/da7213.c 738 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/da7213.c 732 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/da7213.c 731 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da7213.c 645 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da7213.c 630 */;
	const  cocci_id/* sound/soc/codecs/da7213.c 44 */(alc_analog_gain_tlv,
							  0x0,0x0,
							  TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							  
							  0x01,0x07,
							  TLV_DB_SCALE_ITEM(0,600,0));
	const  cocci_id/* sound/soc/codecs/da7213.c 38 */(digital_gain_tlv,
							  0x0,0x07,
							  TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
							  
							  0x08,0x7f,
							  TLV_DB_SCALE_ITEM(-7800,75,0));
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/da7213.c 359 */;
	const  cocci_id/* sound/soc/codecs/da7213.c 31 */(aux_vol_tlv,
							  
							  0x0,0x11,
							  TLV_DB_SCALE_ITEM(-5400,0,0),
							  
							  0x12,0x3f,
							  TLV_DB_SCALE_ITEM(-5250,150,0));
	u8 cocci_id/* sound/soc/codecs/da7213.c 283 */;
	struct da7213_priv *cocci_id/* sound/soc/codecs/da7213.c 282 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/da7213.c 280 */;
	void cocci_id/* sound/soc/codecs/da7213.c 280 */;
	int cocci_id/* sound/soc/codecs/da7213.c 223 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/da7213.c 1885 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/da7213.c 1878 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/da7213.c 1851 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/da7213.c 1850 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/da7213.c 1840 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/da7213.c 1825 */;
	u32 cocci_id/* sound/soc/codecs/da7213.c 1653 */;
	const char *cocci_id/* sound/soc/codecs/da7213.c 1652 */;
	struct device *cocci_id/* sound/soc/codecs/da7213.c 1650 */;
	struct da7213_platform_data *cocci_id/* sound/soc/codecs/da7213.c 1647 */;
	enum da7213_dmic_clk_rate cocci_id/* sound/soc/codecs/da7213.c 1633 */;
	enum da7213_dmic_samplephase cocci_id/* sound/soc/codecs/da7213.c 1620 */;
	enum da7213_dmic_data_sel cocci_id/* sound/soc/codecs/da7213.c 1607 */;
	enum da7213_micbias_voltage cocci_id/* sound/soc/codecs/da7213.c 1589 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/da7213.c 1581 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/da7213.c 1573 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/da7213.c 1529 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/da7213.c 1506 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/da7213.c 1498 */;
	const char *constcocci_id/* sound/soc/codecs/da7213.c 140 */[];
	u64 cocci_id/* sound/soc/codecs/da7213.c 1395 */;
	unsigned int cocci_id/* sound/soc/codecs/da7213.c 1214 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/da7213.c 1147 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/da7213.c 1146 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/da7213.c 1145 */;
	const struct reg_default cocci_id/* sound/soc/codecs/da7213.c 1032 */[];
}

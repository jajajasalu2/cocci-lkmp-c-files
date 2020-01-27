cocci_test_suite() {
	u32 cocci_id/* sound/soc/codecs/da732x.c 950 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/da732x.c 947 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/da732x.c 946 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/da732x.c 945 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/da732x.c 874 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/da732x.c 760 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da732x.c 700 */;
	const char *cocci_id/* sound/soc/codecs/da732x.c 683 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/da732x.c 609 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/da732x.c 607 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/da732x.c 606 */;
	int cocci_id/* sound/soc/codecs/da732x.c 606 */;
	const struct reg_default cocci_id/* sound/soc/codecs/da732x.c 43 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/da732x.c 381 */[];
	unsigned int cocci_id/* sound/soc/codecs/da732x.c 361 */;
	struct soc_enum *cocci_id/* sound/soc/codecs/da732x.c 360 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/da732x.c 357 */;
	struct da732x_priv {
		struct regmap *regmap;
		unsigned int sysclk;
		bool pll_en;
	} cocci_id/* sound/soc/codecs/da732x.c 33 */;
	const  cocci_id/* sound/soc/codecs/da732x.c 251 */(eq_overall_tlv,
							   DA732X_EQ_OVERALL_VOL_DB_MIN,
							   DA732X_EQ_OVERALL_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 248 */(eq_band_pga_tlv,
							   DA732X_EQ_BAND_VOL_DB_MIN,
							   DA732X_EQ_BAND_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 245 */(dac_pga_tlv,
							   DA732X_DAC_VOL_DB_MIN,
							   DA732X_DAC_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 242 */(adc_pga_tlv,
							   DA732X_ADC_VOL_DB_MIN,
							   DA732X_ADC_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 239 */(lin4_pga_tlv,
							   DA732X_LIN4_VOL_DB_MIN,
							   DA732X_LIN4_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 236 */(lin3_pga_tlv,
							   DA732X_LIN3_VOL_DB_MIN,
							   DA732X_LIN3_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 233 */(lin2_pga_tlv,
							   DA732X_LIN2_VOL_DB_MIN,
							   DA732X_LIN2_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 230 */(hp_pga_tlv,
							   DA732X_HP_VOL_DB_MIN,
							   DA732X_AUX_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 227 */(aux_pga_tlv,
							   DA732X_AUX_VOL_DB_MIN,
							   DA732X_AUX_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 224 */(mic_pga_tlv,
							   DA732X_MIC_VOL_DB_MIN,
							   DA732X_MIC_VOL_DB_INC,
							   0);
	const  cocci_id/* sound/soc/codecs/da732x.c 221 */(mic_boost_tlv,
							   DA732X_MIC_PRE_VOL_DB_MIN,
							   DA732X_MIC_PRE_VOL_DB_INC,
							   0);
	struct i2c_driver cocci_id/* sound/soc/codecs/da732x.c 1566 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/da732x.c 1560 */[];
	struct da732x_priv cocci_id/* sound/soc/codecs/da732x.c 1521 */;
	struct da732x_priv *cocci_id/* sound/soc/codecs/da732x.c 1517 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/da732x.c 1515 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/da732x.c 1514 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/da732x.c 1499 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/da732x.c 1413 */;
	u8 cocci_id/* sound/soc/codecs/da732x.c 1334 */[DA732X_HP_AMPS];
	u8 cocci_id/* sound/soc/codecs/da732x.c 1272 */;
	u8 cocci_id/* sound/soc/codecs/da732x.c 1270 */[DA732X_HP_DACS];
	void cocci_id/* sound/soc/codecs/da732x.c 1268 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/da732x.c 1256 */;
	bool cocci_id/* sound/soc/codecs/da732x.c 1245 */;
	struct device *cocci_id/* sound/soc/codecs/da732x.c 1245 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/da732x.c 1202 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/da732x.c 1196 */;
	u64 cocci_id/* sound/soc/codecs/da732x.c 1125 */;
}

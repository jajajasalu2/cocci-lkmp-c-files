cocci_test_suite() {
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt5631.c 859 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5631.c 847 */;
	const char *cocci_id/* sound/soc/codecs/rt5631.c 842 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt5631.c 715 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt5631.c 560 */;
	void cocci_id/* sound/soc/codecs/rt5631.c 514 */;
	const struct reg_default cocci_id/* sound/soc/codecs/rt5631.c 38 */[];
	unsigned int cocci_id/* sound/soc/codecs/rt5631.c 344 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5631.c 343 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt5631.c 340 */;
	int cocci_id/* sound/soc/codecs/rt5631.c 340 */;
	struct rt5631_priv *cocci_id/* sound/soc/codecs/rt5631.c 296 */;
	struct rt5631_priv {
		struct regmap *regmap;
		int codec_version;
		int master;
		int sysclk;
		int rx_rate;
		int bclk_rate;
		int dmic_used_flag;
	} cocci_id/* sound/soc/codecs/rt5631.c 28 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/rt5631.c 184 */;
	const  cocci_id/* sound/soc/codecs/rt5631.c 173 */(mic_bst_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(0,0,0),
							   1,1,
							   TLV_DB_SCALE_ITEM(2000,0,0),
							   2,2,
							   TLV_DB_SCALE_ITEM(2400,0,0),
							   3,5,
							   TLV_DB_SCALE_ITEM(3000,500,0),
							   6,6,
							   TLV_DB_SCALE_ITEM(4400,0,0),
							   7,7,
							   TLV_DB_SCALE_ITEM(5000,0,0),
							   8,8,
							   TLV_DB_SCALE_ITEM(5200,0,0));
	struct i2c_driver cocci_id/* sound/soc/codecs/rt5631.c 1724 */;
	struct rt5631_priv cocci_id/* sound/soc/codecs/rt5631.c 1702 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt5631.c 1697 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt5631.c 1696 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/rt5631.c 1684 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5631.c 1676 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt5631.c 1668 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5631.c 1652 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5631.c 1630 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt5631.c 1623 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt5631.c 1531 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt5631.c 1468 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5631.c 1349 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5631.c 1348 */;
	struct coeff_clk_div cocci_id/* sound/soc/codecs/rt5631.c 1282 */[];
	const struct pll_div cocci_id/* sound/soc/codecs/rt5631.c 1219 */[];
	struct pll_div {
		u32 pll_in;
		u32 pll_out;
		u16 reg_val;
	} cocci_id/* sound/soc/codecs/rt5631.c 1213 */;
	struct coeff_clk_div {
		u32 mclk;
		u32 bclk;
		u32 rate;
		u16 reg_val;
	} cocci_id/* sound/soc/codecs/rt5631.c 1205 */;
	bool cocci_id/* sound/soc/codecs/rt5631.c 110 */;
	struct device *cocci_id/* sound/soc/codecs/rt5631.c 110 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt5631.c 1050 */[];
}

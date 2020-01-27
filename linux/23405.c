cocci_test_suite() {
	unsigned long long int cocci_id/* sound/soc/codecs/max98095.c 980 */;
	u8 cocci_id/* sound/soc/codecs/max98095.c 947 */;
	unsigned long long cocci_id/* sound/soc/codecs/max98095.c 945 */;
	struct max98095_cdata *cocci_id/* sound/soc/codecs/max98095.c 944 */;
	struct max98095_priv *cocci_id/* sound/soc/codecs/max98095.c 943 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max98095.c 940 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max98095.c 939 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max98095.c 938 */;
	int cocci_id/* sound/soc/codecs/max98095.c 938 */;
	const struct {
		u32 rate;
		u8 sr;
	} cocci_id/* sound/soc/codecs/max98095.c 908 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max98095.c 805 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max98095.c 694 */[];
	u8 *cocci_id/* sound/soc/codecs/max98095.c 630 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/max98095.c 625 */;
	const struct reg_default cocci_id/* sound/soc/codecs/max98095.c 61 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98095.c 580 */[];
	const  cocci_id/* sound/soc/codecs/max98095.c 430 */(max98095_lin_tlv,
							     0,2,
							     TLV_DB_SCALE_ITEM(-600,300,0),
							     3,3,
							     TLV_DB_SCALE_ITEM(300,1100,0),
							     4,5,
							     TLV_DB_SCALE_ITEM(1400,600,0));
	const  cocci_id/* sound/soc/codecs/max98095.c 422 */(max98095_rcv_lout_tlv,
							     0,6,
							     TLV_DB_SCALE_ITEM(-6200,400,0),
							     7,14,
							     TLV_DB_SCALE_ITEM(-3500,300,0),
							     15,21,
							     TLV_DB_SCALE_ITEM(-1200,200,0),
							     22,27,
							     TLV_DB_SCALE_ITEM(100,100,0),
							     28,31,
							     TLV_DB_SCALE_ITEM(650,50,0));
	const  cocci_id/* sound/soc/codecs/max98095.c 415 */(max98095_spk_tlv,
							     0,10,
							     TLV_DB_SCALE_ITEM(-5900,400,0),
							     11,18,
							     TLV_DB_SCALE_ITEM(-1700,200,0),
							     19,27,
							     TLV_DB_SCALE_ITEM(-200,100,0),
							     28,39,
							     TLV_DB_SCALE_ITEM(650,50,0));
	const  cocci_id/* sound/soc/codecs/max98095.c 407 */(max98095_hp_tlv,
							     0,6,
							     TLV_DB_SCALE_ITEM(-6700,400,0),
							     7,14,
							     TLV_DB_SCALE_ITEM(-4000,300,0),
							     15,21,
							     TLV_DB_SCALE_ITEM(-1700,200,0),
							     22,27,
							     TLV_DB_SCALE_ITEM(-400,100,0),
							     28,31,
							     TLV_DB_SCALE_ITEM(150,50,0));
	struct max98095_priv {
		struct regmap *regmap;
		enum max98095_type devtype;
		struct max98095_pdata *pdata;
		struct clk *mclk;
		unsigned int sysclk;
		struct max98095_cdata dai[3];
		const char **eq_texts;
		const char **bq_texts;
		struct soc_enum eq_enum;
		struct soc_enum bq_enum;
		int eq_textcnt;
		int bq_textcnt;
		u8 lin_state;
		unsigned int mic1pre;
		unsigned int mic2pre;
		struct snd_soc_jack *headphone_jack;
		struct snd_soc_jack *mic_jack;
		struct mutex lock;
	} cocci_id/* sound/soc/codecs/max98095.c 40 */;
	const  cocci_id/* sound/soc/codecs/max98095.c 398 */(max98095_micboost_tlv,
							     0,1,
							     TLV_DB_SCALE_ITEM(0,2000,0),
							     2,2,
							     TLV_DB_SCALE_ITEM(3000,0,0));
	const char *constcocci_id/* sound/soc/codecs/max98095.c 337 */[];
	struct max98095_cdata {
		unsigned int rate;
		unsigned int fmt;
		int eq_sel;
		int bq_sel;
	} cocci_id/* sound/soc/codecs/max98095.c 33 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98095.c 314 */;
	enum max98095_type{MAX98095,} cocci_id/* sound/soc/codecs/max98095.c 29 */;
	u16 *cocci_id/* sound/soc/codecs/max98095.c 278 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max98095.c 277 */;
	unsigned int cocci_id/* sound/soc/codecs/max98095.c 277 */;
	void cocci_id/* sound/soc/codecs/max98095.c 277 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max98095.c 234 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/max98095.c 2157 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/max98095.c 2151 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max98095.c 2145 */[];
	struct max98095_priv cocci_id/* sound/soc/codecs/max98095.c 2121 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max98095.c 2116 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max98095.c 2115 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max98095.c 2097 */;
	bool cocci_id/* sound/soc/codecs/max98095.c 202 */;
	struct device *cocci_id/* sound/soc/codecs/max98095.c 202 */;
	unsigned cocci_id/* sound/soc/codecs/max98095.c 2003 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/max98095.c 1894 */;
	irqreturn_t cocci_id/* sound/soc/codecs/max98095.c 1810 */;
	void *cocci_id/* sound/soc/codecs/max98095.c 1810 */;
	char *cocci_id/* sound/soc/codecs/max98095.c 1731 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98095.c 1730 */[];
	const char **cocci_id/* sound/soc/codecs/max98095.c 1727 */;
	struct max98095_biquad_cfg *cocci_id/* sound/soc/codecs/max98095.c 1724 */;
	struct max98095_pdata *cocci_id/* sound/soc/codecs/max98095.c 1723 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/max98095.c 1704 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/max98095.c 1703 */;
	const char *cocci_id/* sound/soc/codecs/max98095.c 1632 */;
	const char *cocci_id/* sound/soc/codecs/max98095.c 1629 */[];
	struct max98095_eq_cfg *cocci_id/* sound/soc/codecs/max98095.c 1573 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max98095.c 1438 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max98095.c 1420 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max98095.c 1365 */;
}

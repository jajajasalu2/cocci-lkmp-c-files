cocci_test_suite() {
	u8 cocci_id/* sound/soc/codecs/max98088.c 970 */;
	unsigned long long cocci_id/* sound/soc/codecs/max98088.c 968 */;
	struct max98088_cdata *cocci_id/* sound/soc/codecs/max98088.c 967 */;
	struct max98088_priv *cocci_id/* sound/soc/codecs/max98088.c 966 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max98088.c 962 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max98088.c 961 */;
	const struct {
		u32 rate;
		u8 sr;
	} cocci_id/* sound/soc/codecs/max98088.c 931 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max98088.c 816 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max98088.c 711 */[];
	u8 *cocci_id/* sound/soc/codecs/max98088.c 651 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/max98088.c 646 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98088.c 597 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/max98088.c 58 */[];
	const  cocci_id/* sound/soc/codecs/max98088.c 440 */(max98088_spk_tlv,
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
	const  cocci_id/* sound/soc/codecs/max98088.c 432 */(max98088_hp_tlv,
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
	const  cocci_id/* sound/soc/codecs/max98088.c 427 */(max98088_micboost_tlv,
							     0,1,
							     TLV_DB_SCALE_ITEM(0,2000,0),
							     2,2,
							     TLV_DB_SCALE_ITEM(3000,0,0));
	struct max98088_priv {
		struct regmap *regmap;
		enum max98088_type devtype;
		struct max98088_pdata *pdata;
		struct clk *mclk;
		unsigned int sysclk;
		struct max98088_cdata dai[2];
		int eq_textcnt;
		const char **eq_texts;
		struct soc_enum eq_enum;
		u8 ina_state;
		u8 inb_state;
		unsigned int ex_mode;
		unsigned int digmic;
		unsigned int mic1pre;
		unsigned int mic2pre;
		unsigned int extmic_mode;
	} cocci_id/* sound/soc/codecs/max98088.c 39 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98088.c 366 */;
	const unsigned int cocci_id/* sound/soc/codecs/max98088.c 340 */[];
	struct max98088_cdata {
		unsigned int rate;
		unsigned int fmt;
		int eq_sel;
	} cocci_id/* sound/soc/codecs/max98088.c 33 */;
	u16 *cocci_id/* sound/soc/codecs/max98088.c 310 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max98088.c 309 */;
	unsigned int cocci_id/* sound/soc/codecs/max98088.c 309 */;
	void cocci_id/* sound/soc/codecs/max98088.c 309 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max98088.c 292 */;
	enum max98088_type{MAX98088, MAX98089,} cocci_id/* sound/soc/codecs/max98088.c 28 */;
	bool cocci_id/* sound/soc/codecs/max98088.c 260 */;
	struct device *cocci_id/* sound/soc/codecs/max98088.c 260 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/max98088.c 1777 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/max98088.c 1769 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max98088.c 1761 */[];
	struct max98088_priv cocci_id/* sound/soc/codecs/max98088.c 1737 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max98088.c 1732 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max98088.c 1731 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max98088.c 1714 */;
	unsigned cocci_id/* sound/soc/codecs/max98088.c 1656 */;
	char *cocci_id/* sound/soc/codecs/max98088.c 1564 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98088.c 1563 */[];
	const char **cocci_id/* sound/soc/codecs/max98088.c 1561 */;
	struct max98088_eq_cfg *cocci_id/* sound/soc/codecs/max98088.c 1558 */;
	struct max98088_pdata *cocci_id/* sound/soc/codecs/max98088.c 1557 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/max98088.c 1539 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/max98088.c 1538 */;
	const char *cocci_id/* sound/soc/codecs/max98088.c 1401 */;
	const char *cocci_id/* sound/soc/codecs/max98088.c 1399 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max98088.c 1367 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max98088.c 1353 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max98088.c 1308 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max98088.c 1277 */;
	int cocci_id/* sound/soc/codecs/max98088.c 1277 */;
	unsigned long long int cocci_id/* sound/soc/codecs/max98088.c 1006 */;
}

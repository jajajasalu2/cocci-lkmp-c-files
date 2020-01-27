cocci_test_suite() {
	const struct soc_enum cocci_id/* sound/soc/codecs/es8316.c 86 */;
	const char *constcocci_id/* sound/soc/codecs/es8316.c 85 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/es8316.c 848 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/es8316.c 842 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/es8316.c 836 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/es8316.c 830 */[];
	struct es8316_priv cocci_id/* sound/soc/codecs/es8316.c 800 */;
	struct device *cocci_id/* sound/soc/codecs/es8316.c 796 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/es8316.c 794 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/es8316.c 793 */;
	int cocci_id/* sound/soc/codecs/es8316.c 793 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/es8316.c 785 */;
	const struct regmap_access_table cocci_id/* sound/soc/codecs/es8316.c 780 */;
	const struct regmap_range cocci_id/* sound/soc/codecs/es8316.c 776 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/es8316.c 761 */;
	const  cocci_id/* sound/soc/codecs/es8316.c 75 */(hpout_vol_tlv,
							  0,0,
							  TLV_DB_SCALE_ITEM(-4800,0,0),
							  1,3,
							  TLV_DB_SCALE_ITEM(-2400,1200,0));
	struct es8316_priv *cocci_id/* sound/soc/codecs/es8316.c 681 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/es8316.c 679 */;
	void cocci_id/* sound/soc/codecs/es8316.c 679 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/es8316.c 649 */;
	const  cocci_id/* sound/soc/codecs/es8316.c 61 */(adc_pga_gain_tlv,
							  0,0,
							  TLV_DB_SCALE_ITEM(-350,0,0),
							  1,1,
							  TLV_DB_SCALE_ITEM(0,0,0),
							  2,2,
							  TLV_DB_SCALE_ITEM(250,0,0),
							  3,3,
							  TLV_DB_SCALE_ITEM(450,0,0),
							  4,4,
							  TLV_DB_SCALE_ITEM(700,0,0),
							  5,5,
							  TLV_DB_SCALE_ITEM(1000,0,0),
							  6,6,
							  TLV_DB_SCALE_ITEM(1300,0,0),
							  7,7,
							  TLV_DB_SCALE_ITEM(1600,0,0),
							  8,8,
							  TLV_DB_SCALE_ITEM(1800,0,0),
							  9,9,
							  TLV_DB_SCALE_ITEM(2100,0,0),
							  10,10,
							  TLV_DB_SCALE_ITEM(2400,0,0));
	unsigned int cocci_id/* sound/soc/codecs/es8316.c 580 */;
	irqreturn_t cocci_id/* sound/soc/codecs/es8316.c 576 */;
	void *cocci_id/* sound/soc/codecs/es8316.c 576 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/es8316.c 566 */;
	const  cocci_id/* sound/soc/codecs/es8316.c 56 */(hpmixer_gain_tlv,
							  0,4,
							  TLV_DB_SCALE_ITEM(-1200,150,0),
							  8,11,
							  TLV_DB_SCALE_ITEM(-450,150,0));
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/es8316.c 528 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/es8316.c 520 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/es8316.c 510 */;
	const unsigned int cocci_id/* sound/soc/codecs/es8316.c 476 */;
	u8 cocci_id/* sound/soc/codecs/es8316.c 471 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/es8316.c 466 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/es8316.c 465 */;
	struct es8316_priv {
		struct mutex lock;
		struct clk *mclk;
		struct regmap *regmap;
		struct snd_soc_component *component;
		struct snd_soc_jack *jack;
		int irq;
		unsigned int sysclk;
		unsigned int allowed_rates[NR_SUPPORTED_MCLK_LRCK_RATIOS];
		struct snd_pcm_hw_constraint_list sysclk_constraints;
		bool jd_inverted;
	} cocci_id/* sound/soc/codecs/es8316.c 35 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/es8316.c 288 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/es8316.c 209 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/es8316.c 186 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/es8316.c 148 */;
	const unsigned int cocci_id/* sound/soc/codecs/es8316.c 142 */[];
}

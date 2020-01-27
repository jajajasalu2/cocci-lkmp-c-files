cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/uda1380.c 798 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/uda1380.c 792 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/uda1380.c 786 */[];
	u16 cocci_id/* sound/soc/codecs/uda1380.c 773 */;
	struct uda1380_platform_data *cocci_id/* sound/soc/codecs/uda1380.c 745 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/uda1380.c 743 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/uda1380.c 742 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/uda1380.c 724 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/uda1380.c 653 */[];
	u16 *cocci_id/* sound/soc/codecs/uda1380.c 65 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/uda1380.c 632 */;
	unsigned int cocci_id/* sound/soc/codecs/uda1380.c 61 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/uda1380.c 589 */;
	unsigned long cocci_id/* sound/soc/codecs/uda1380.c 56 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/uda1380.c 532 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/uda1380.c 531 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/uda1380.c 530 */;
	const u16 cocci_id/* sound/soc/codecs/uda1380.c 44 */[UDA1380_CACHEREGNUM];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/uda1380.c 380 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/uda1380.c 356 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/uda1380.c 352 */;
	struct uda1380_priv {
		struct snd_soc_component *component;
		unsigned int dac_clk;
		struct work_struct work;
		struct i2c_client *i2c;
		u16 *reg_cache;
	} cocci_id/* sound/soc/codecs/uda1380.c 33 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/uda1380.c 311 */[];
	const  cocci_id/* sound/soc/codecs/uda1380.c 288 */(vc_tlv,
							    0,7,
							    TLV_DB_SCALE_ITEM(-7800,150,1),
							    8,15,
							    TLV_DB_SCALE_ITEM(-6600,75,0),
							    16,43,
							    TLV_DB_SCALE_ITEM(-6000,50,0),
							    44,228,
							    TLV_DB_SCALE_ITEM(-4600,25,0));
	const  cocci_id/* sound/soc/codecs/uda1380.c 276 */(mvol_tlv,
							    0,15,
							    TLV_DB_SCALE_ITEM(-8200,100,1),
							    16,43,
							    TLV_DB_SCALE_ITEM(-6600,50,0),
							    44,252,
							    TLV_DB_SCALE_ITEM(-5200,25,0));
	const struct soc_enum cocci_id/* sound/soc/codecs/uda1380.c 243 */[];
	const char *cocci_id/* sound/soc/codecs/uda1380.c 217 */[];
	int cocci_id/* sound/soc/codecs/uda1380.c 180 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/uda1380.c 179 */;
	struct uda1380_priv cocci_id/* sound/soc/codecs/uda1380.c 178 */;
	struct uda1380_priv *cocci_id/* sound/soc/codecs/uda1380.c 178 */;
	struct work_struct *cocci_id/* sound/soc/codecs/uda1380.c 176 */;
	void cocci_id/* sound/soc/codecs/uda1380.c 176 */;
	u8 cocci_id/* sound/soc/codecs/uda1380.c 161 */[3];
}

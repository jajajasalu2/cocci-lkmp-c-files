cocci_test_suite() {
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/88pm860x-codec.c 905 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/88pm860x-codec.c 803 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/88pm860x-codec.c 707 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/88pm860x-codec.c 578 */;
	const char *cocci_id/* sound/soc/codecs/88pm860x-codec.c 571 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/88pm860x-codec.c 477 */[];
	unsigned int cocci_id/* sound/soc/codecs/88pm860x-codec.c 400 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/88pm860x-codec.c 399 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/88pm860x-codec.c 397 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/88pm860x-codec.c 396 */;
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/88pm860x-codec.c 327 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/88pm860x-codec.c 325 */;
	int cocci_id/* sound/soc/codecs/88pm860x-codec.c 275 */[2];
	struct st_gain cocci_id/* sound/soc/codecs/88pm860x-codec.c 196 */[];
	struct st_gain {
		unsigned int db;
		unsigned int m;
		unsigned int n;
	} cocci_id/* sound/soc/codecs/88pm860x-codec.c 190 */;
	const  cocci_id/* sound/soc/codecs/88pm860x-codec.c 178 */(st_tlv,
								   0,1,
								   TLV_DB_SCALE_ITEM(-12041,602,0),
								   2,3,
								   TLV_DB_SCALE_ITEM(-11087,250,0),
								   4,5,
								   TLV_DB_SCALE_ITEM(-10643,158,0),
								   6,7,
								   TLV_DB_SCALE_ITEM(-10351,116,0),
								   8,9,
								   TLV_DB_SCALE_ITEM(-10133,92,0),
								   10,13,
								   TLV_DB_SCALE_ITEM(-9958,70,0),
								   14,17,
								   TLV_DB_SCALE_ITEM(-9689,53,0),
								   18,271,
								   TLV_DB_SCALE_ITEM(-9484,37,0));
	const  cocci_id/* sound/soc/codecs/88pm860x-codec.c 171 */(out_tlv,
								   0,3,
								   TLV_DB_SCALE_ITEM(-1600,300,1),
								   4,4,
								   TLV_DB_SCALE_ITEM(-520,0,0),
								   5,5,
								   TLV_DB_SCALE_ITEM(-330,0,0),
								   6,7,
								   TLV_DB_SCALE_ITEM(-220,220,0));
	const  cocci_id/* sound/soc/codecs/88pm860x-codec.c 165 */(aux_tlv,
								   0,2,
								   TLV_DB_SCALE_ITEM(0,0,0),
								   3,7,
								   TLV_DB_SCALE_ITEM(-600,600,0));
	const  cocci_id/* sound/soc/codecs/88pm860x-codec.c 156 */(mic_tlv,
								   0,0,
								   TLV_DB_SCALE_ITEM(-2300,0,0),
								   1,1,
								   TLV_DB_SCALE_ITEM(-1700,0,0),
								   2,2,
								   TLV_DB_SCALE_ITEM(-1350,0,0),
								   3,3,
								   TLV_DB_SCALE_ITEM(-1100,0,0),
								   4,7,
								   TLV_DB_SCALE_ITEM(-900,300,0));
	struct platform_driver cocci_id/* sound/soc/codecs/88pm860x-codec.c 1393 */;
	struct pm860x_priv cocci_id/* sound/soc/codecs/88pm860x-codec.c 1356 */;
	struct resource *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1353 */;
	struct pm860x_priv *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1352 */;
	struct pm860x_chip *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1351 */;
	struct platform_device *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1349 */;
	int cocci_id/* sound/soc/codecs/88pm860x-codec.c 1349 */;
	struct pm860x_priv {
		unsigned int sysclk;
		unsigned int pcmclk;
		unsigned int dir;
		unsigned int filter;
		struct snd_soc_component *component;
		struct i2c_client *i2c;
		struct regmap *regmap;
		struct pm860x_chip *chip;
		struct pm860x_det det;
		int irq[4];
		unsigned char name[4][MAX_NAME_LEN + 1];
	} cocci_id/* sound/soc/codecs/88pm860x-codec.c 134 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/88pm860x-codec.c 1333 */;
	void cocci_id/* sound/soc/codecs/88pm860x-codec.c 1324 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1248 */;
	struct pm860x_det {
		struct snd_soc_jack *hp_jack;
		struct snd_soc_jack *mic_jack;
		int hp_det;
		int mic_det;
		int hook_det;
		int hs_shrt;
		int lo_shrt;
	} cocci_id/* sound/soc/codecs/88pm860x-codec.c 124 */;
	irqreturn_t cocci_id/* sound/soc/codecs/88pm860x-codec.c 1201 */;
	void *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1201 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/88pm860x-codec.c 1155 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/88pm860x-codec.c 1145 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/88pm860x-codec.c 1106 */;
	unsigned char cocci_id/* sound/soc/codecs/88pm860x-codec.c 1020 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1016 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/88pm860x-codec.c 1015 */;
}

cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ssm2602.c 90 */[];
	const  cocci_id/* sound/soc/codecs/ssm2602.c 71 */(ssm260x_outmix_tlv,
							   0,47,
							   TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,0),
							   48,127,
							   TLV_DB_SCALE_ITEM(-7400,100,0));
	struct regmap *cocci_id/* sound/soc/codecs/ssm2602.c 648 */;
	enum ssm2602_type cocci_id/* sound/soc/codecs/ssm2602.c 647 */;
	struct device *cocci_id/* sound/soc/codecs/ssm2602.c 647 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/ssm2602.c 64 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/ssm2602.c 634 */;
	bool cocci_id/* sound/soc/codecs/ssm2602.c 629 */;
	const char *cocci_id/* sound/soc/codecs/ssm2602.c 62 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/ssm2602.c 612 */;
	struct ssm2602_priv *cocci_id/* sound/soc/codecs/ssm2602.c 544 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/ssm2602.c 543 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/ssm2602.c 541 */;
	int cocci_id/* sound/soc/codecs/ssm2602.c 541 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/ssm2602.c 513 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/ssm2602.c 505 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/ssm2602.c 467 */;
	const struct reg_default cocci_id/* sound/soc/codecs/ssm2602.c 43 */[SSM2602_CACHEREGNUM];
	unsigned int cocci_id/* sound/soc/codecs/ssm2602.c 297 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/ssm2602.c 292 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/ssm2602.c 291 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/ssm2602.c 290 */;
	struct ssm2602_priv {
		unsigned int sysclk;
		const struct snd_pcm_hw_constraint_list *sysclk_constraints;
		struct regmap *regmap;
		enum ssm2602_type type;
		unsigned int clk_out_pwr;
	} cocci_id/* sound/soc/codecs/ssm2602.c 27 */;
	const struct ssm2602_coeff cocci_id/* sound/soc/codecs/ssm2602.c 229 */[];
	struct ssm2602_coeff {
		u32 mclk;
		u32 rate;
		u8 srate;
	} cocci_id/* sound/soc/codecs/ssm2602.c 220 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/codecs/ssm2602.c 215 */;
	const unsigned int cocci_id/* sound/soc/codecs/ssm2602.c 211 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/ssm2602.c 183 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/ssm2602.c 147 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/ssm2602.c 117 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/ssm2602.c 116 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ssm2602.c 109 */;
}

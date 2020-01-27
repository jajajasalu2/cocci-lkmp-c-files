cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/jz4740.c 82 */[];
	const  cocci_id/* sound/soc/codecs/jz4740.c 74 */(jz4740_mic_tlv,
							  0,2,
							  TLV_DB_SCALE_ITEM(0,600,0),
							  3,3,
							  TLV_DB_SCALE_ITEM(2000,0,0));
	struct jz4740_codec {
		struct regmap *regmap;
	} cocci_id/* sound/soc/codecs/jz4740.c 70 */;
	const struct reg_default cocci_id/* sound/soc/codecs/jz4740.c 65 */[];
	struct platform_driver cocci_id/* sound/soc/codecs/jz4740.c 355 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/jz4740.c 348 */[];
	void __iomem *cocci_id/* sound/soc/codecs/jz4740.c 321 */;
	struct platform_device *cocci_id/* sound/soc/codecs/jz4740.c 317 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/jz4740.c 306 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/jz4740.c 289 */;
	struct jz4740_codec *cocci_id/* sound/soc/codecs/jz4740.c 281 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/jz4740.c 279 */;
	int cocci_id/* sound/soc/codecs/jz4740.c 279 */;
	unsigned int cocci_id/* sound/soc/codecs/jz4740.c 237 */;
	struct regmap *cocci_id/* sound/soc/codecs/jz4740.c 236 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/jz4740.c 233 */;
	void cocci_id/* sound/soc/codecs/jz4740.c 220 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/jz4740.c 200 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/jz4740.c 196 */;
	uint32_t cocci_id/* sound/soc/codecs/jz4740.c 154 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/jz4740.c 151 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/jz4740.c 151 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/jz4740.c 150 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/jz4740.c 134 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/jz4740.c 110 */[];
}

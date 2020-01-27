cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/max9860.c 731 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/max9860.c 725 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max9860.c 719 */[];
	struct clk *cocci_id/* sound/soc/codecs/max9860.c 599 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max9860.c 594 */;
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/max9860.c 590 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max9860.c 530 */;
	const struct reg_default cocci_id/* sound/soc/codecs/max9860.c 50 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max9860.c 496 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max9860.c 467 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max9860.c 462 */;
	struct max9860_priv cocci_id/* sound/soc/codecs/max9860.c 40 */;
	struct max9860_priv *cocci_id/* sound/soc/codecs/max9860.c 40 */;
	void *cocci_id/* sound/soc/codecs/max9860.c 38 */;
	unsigned long cocci_id/* sound/soc/codecs/max9860.c 38 */;
	struct notifier_block *cocci_id/* sound/soc/codecs/max9860.c 37 */;
	int cocci_id/* sound/soc/codecs/max9860.c 37 */;
	struct max9860_priv {
		struct regmap *regmap;
		struct regulator *dvddio;
		struct notifier_block dvddio_nb;
		u8 psclk;
		unsigned long pclk_rate;
		int fmt;
	} cocci_id/* sound/soc/codecs/max9860.c 28 */;
	u8 cocci_id/* sound/soc/codecs/max9860.c 257 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max9860.c 255 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max9860.c 253 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max9860.c 252 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max9860.c 251 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max9860.c 232 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max9860.c 208 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max9860.c 180 */[];
	const char *constcocci_id/* sound/soc/codecs/max9860.c 150 */[];
	const  cocci_id/* sound/soc/codecs/max9860.c 129 */(pam_tlv,
							    0,
							    MAX9860_PAM_MAX-1,
							    TLV_DB_SCALE_ITEM(-2000,2000,1),
							    MAX9860_PAM_MAX,
							    MAX9860_PAM_MAX,
							    TLV_DB_SCALE_ITEM(3000,0,0));
	const struct regmap_config cocci_id/* sound/soc/codecs/max9860.c 111 */;
	bool cocci_id/* sound/soc/codecs/max9860.c 101 */;
	struct device *cocci_id/* sound/soc/codecs/max9860.c 101 */;
	unsigned int cocci_id/* sound/soc/codecs/max9860.c 101 */;
}

cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8961.c 975 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8961.c 969 */[];
	struct wm8961_priv cocci_id/* sound/soc/codecs/wm8961.c 920 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8961.c 917 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8961.c 914 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8961.c 913 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8961.c 900 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8961.c 883 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8961.c 814 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8961.c 805 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8961.c 744 */;
	u16 cocci_id/* sound/soc/codecs/wm8961.c 704 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8961.c 703 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8961.c 701 */;
	int cocci_id/* sound/soc/codecs/wm8961.c 701 */;
	struct wm8961_priv *cocci_id/* sound/soc/codecs/wm8961.c 506 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8961.c 502 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8961.c 501 */;
	struct {
		int rate;
		u16 val;
	} cocci_id/* sound/soc/codecs/wm8961.c 486 */[];
	struct {
		int ratio;
		u16 val;
	} cocci_id/* sound/soc/codecs/wm8961.c 469 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8961.c 433 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8961.c 396 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8961.c 390 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8961.c 339 */[];
	const  cocci_id/* sound/soc/codecs/wm8961.c 331 */(boost_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(0,0,0),
							   1,1,
							   TLV_DB_SCALE_ITEM(13,0,0),
							   2,2,
							   TLV_DB_SCALE_ITEM(20,0,0),
							   3,3,
							   TLV_DB_SCALE_ITEM(29,0,0));
	const struct reg_default cocci_id/* sound/soc/codecs/wm8961.c 32 */[];
	const char *cocci_id/* sound/soc/codecs/wm8961.c 313 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8961.c 192 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8961.c 191 */;
	bool cocci_id/* sound/soc/codecs/wm8961.c 123 */;
	struct device *cocci_id/* sound/soc/codecs/wm8961.c 123 */;
	struct wm8961_priv {
		struct regmap *regmap;
		int sysclk;
	} cocci_id/* sound/soc/codecs/wm8961.c 105 */;
}

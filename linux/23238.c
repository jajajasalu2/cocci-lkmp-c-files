cocci_test_suite() {
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8971.c 703 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8971.c 697 */[];
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8971.c 675 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8971.c 674 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8971.c 664 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8971.c 648 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8971.c 610 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8971.c 603 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8971.c 561 */;
	struct wm8971_priv cocci_id/* sound/soc/codecs/wm8971.c 554 */;
	struct wm8971_priv *cocci_id/* sound/soc/codecs/wm8971.c 553 */;
	struct work_struct *cocci_id/* sound/soc/codecs/wm8971.c 551 */;
	void cocci_id/* sound/soc/codecs/wm8971.c 551 */;
	u16 cocci_id/* sound/soc/codecs/wm8971.c 542 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8971.c 541 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8971.c 539 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8971.c 506 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8971.c 505 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8971.c 448 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm8971.c 42 */[];
	int cocci_id/* sound/soc/codecs/wm8971.c 418 */;
	const struct _coeff_div cocci_id/* sound/soc/codecs/wm8971.c 369 */[];
	struct _coeff_div {
		u32 mclk;
		u32 rate;
		u16 fs;
		u8 sr:5;
		u8 usb:1;
	} cocci_id/* sound/soc/codecs/wm8971.c 360 */;
	struct wm8971_priv {
		unsigned int sysclk;
		struct delayed_work charge_work;
		struct regmap *regmap;
	} cocci_id/* sound/soc/codecs/wm8971.c 31 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8971.c 283 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8971.c 235 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8971.c 216 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8971.c 192 */[];
	const struct soc_enum cocci_id/* sound/soc/codecs/wm8971.c 111 */[];
	const char *cocci_id/* sound/soc/codecs/wm8971.c 108 */[];
}

cocci_test_suite() {
	unsigned int cocci_id/* sound/soc/codecs/wm8524.c 93 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8524.c 83 */;
	void cocci_id/* sound/soc/codecs/wm8524.c 83 */;
	const struct {
		int value;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8524.c 46 */[WM8524_NUM_RATES];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8524.c 41 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8524.c 35 */[];
	struct wm8524_priv {
		struct gpio_desc *mute;
		unsigned int sysclk;
		unsigned int rate_constraint_list[WM8524_NUM_RATES];
		struct snd_pcm_hw_constraint_list rate_constraint;
	} cocci_id/* sound/soc/codecs/wm8524.c 27 */;
	struct platform_driver cocci_id/* sound/soc/codecs/wm8524.c 240 */;
	struct wm8524_priv cocci_id/* sound/soc/codecs/wm8524.c 218 */;
	struct wm8524_priv *cocci_id/* sound/soc/codecs/wm8524.c 215 */;
	struct platform_device *cocci_id/* sound/soc/codecs/wm8524.c 213 */;
	int cocci_id/* sound/soc/codecs/wm8524.c 213 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8524.c 207 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8524.c 195 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8524.c 184 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8524.c 172 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8524.c 164 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8524.c 150 */;
}

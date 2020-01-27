cocci_test_suite() {
	const char *cocci_id/* sound/soc/codecs/wm8804.c 97 */[];
	struct wm8804_priv cocci_id/* sound/soc/codecs/wm8804.c 86 */;
	struct wm8804_priv *cocci_id/* sound/soc/codecs/wm8804.c 86 */;
	void *cocci_id/* sound/soc/codecs/wm8804.c 84 */;
	unsigned long cocci_id/* sound/soc/codecs/wm8804.c 84 */;
	struct notifier_block *cocci_id/* sound/soc/codecs/wm8804.c 83 */;
	int cocci_id/* sound/soc/codecs/wm8804.c 74 */(struct snd_soc_dapm_widget *w,
						       struct snd_kcontrol *kcontrol,
						       int event);
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/wm8804.c 720 */;
	int cocci_id/* sound/soc/codecs/wm8804.c 71 */(struct snd_kcontrol *kcontrol,
						       struct snd_ctl_elem_value *ucontrol);
	void cocci_id/* sound/soc/codecs/wm8804.c 679 */;
	struct regulator *cocci_id/* sound/soc/codecs/wm8804.c 603 */;
	struct wm8804_priv {
		struct device *dev;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8804_NUM_SUPPLIES];
		struct notifier_block disable_nb[WM8804_NUM_SUPPLIES];
		int mclk_div;
		struct gpio_desc *reset;
		int aif_pwr;
	} cocci_id/* sound/soc/codecs/wm8804.c 59 */;
	struct regmap *cocci_id/* sound/soc/codecs/wm8804.c 565 */;
	struct device *cocci_id/* sound/soc/codecs/wm8804.c 565 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8804.c 552 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8804.c 542 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8804.c 522 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8804.c 506 */;
	struct pll_div cocci_id/* sound/soc/codecs/wm8804.c 417 */;
	bool cocci_id/* sound/soc/codecs/wm8804.c 407 */;
	const struct reg_default cocci_id/* sound/soc/codecs/wm8804.c 36 */[];
	unsigned long int cocci_id/* sound/soc/codecs/wm8804.c 348 */;
	u64 cocci_id/* sound/soc/codecs/wm8804.c 347 */;
	struct pll_div *cocci_id/* sound/soc/codecs/wm8804.c 344 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8804.c 344 */;
	int cocci_id/* sound/soc/codecs/wm8804.c 344 */;
	struct {
		unsigned int div;
		unsigned int freqmode;
		unsigned int mclkdiv;
	} cocci_id/* sound/soc/codecs/wm8804.c 328 */[];
	struct pll_div {
		u32 prescale:1;
		u32 mclkdiv:1;
		u32 freqmode:2;
		u32 n:4;
		u32 k:22;
	} cocci_id/* sound/soc/codecs/wm8804.c 319 */;
	const char *cocci_id/* sound/soc/codecs/wm8804.c 31 */[WM8804_NUM_SUPPLIES];
	u16 cocci_id/* sound/soc/codecs/wm8804.c 292 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8804.c 289 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8804.c 288 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8804.c 287 */;
	struct soc_enum *cocci_id/* sound/soc/codecs/wm8804.c 163 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8804.c 162 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8804.c 161 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8804.c 159 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8804.c 158 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8804.c 134 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8804.c 120 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8804.c 105 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8804.c 100 */[];
}

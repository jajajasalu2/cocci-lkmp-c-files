cocci_test_suite() {
	const struct {
		int value;
		int ratio;
	} cocci_id/* sound/soc/codecs/uda1334.c 78 */[UDA1334_NUM_RATES];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/uda1334.c 73 */[];
	struct snd_soc_component *cocci_id/* sound/soc/codecs/uda1334.c 60 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/uda1334.c 58 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/uda1334.c 57 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/uda1334.c 37 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/uda1334.c 31 */[];
	struct platform_driver cocci_id/* sound/soc/codecs/uda1334.c 283 */;
	struct uda1334_priv cocci_id/* sound/soc/codecs/uda1334.c 253 */;
	struct uda1334_priv *cocci_id/* sound/soc/codecs/uda1334.c 250 */;
	struct platform_device *cocci_id/* sound/soc/codecs/uda1334.c 248 */;
	int cocci_id/* sound/soc/codecs/uda1334.c 248 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/uda1334.c 242 */[];
	struct uda1334_priv {
		struct gpio_desc *mute;
		struct gpio_desc *deemph;
		unsigned int sysclk;
		unsigned int rate_constraint_list[UDA1334_NUM_RATES];
		struct snd_pcm_hw_constraint_list rate_constraint;
	} cocci_id/* sound/soc/codecs/uda1334.c 23 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/uda1334.c 228 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/uda1334.c 205 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/uda1334.c 197 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/uda1334.c 183 */;
	unsigned int cocci_id/* sound/soc/codecs/uda1334.c 125 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/uda1334.c 115 */;
	void cocci_id/* sound/soc/codecs/uda1334.c 115 */;
}

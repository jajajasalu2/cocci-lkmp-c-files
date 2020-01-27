cocci_test_suite() {
	struct fsl_asoc_card_priv {
		struct snd_soc_dai_link dai_link[3];
		struct platform_device *pdev;
		struct codec_priv codec_priv;
		struct cpu_priv cpu_priv;
		struct snd_soc_card card;
		u32 sample_rate;
		snd_pcm_format_t sample_format;
		u32 asrc_rate;
		snd_pcm_format_t asrc_format;
		u32 dai_fmt;
		char name[32];
	} cocci_id/* sound/soc/fsl/fsl-asoc-card.c 83 */;
	struct platform_driver cocci_id/* sound/soc/fsl/fsl-asoc-card.c 725 */;
	const struct of_device_id cocci_id/* sound/soc/fsl/fsl-asoc-card.c 714 */[];
	struct snd_soc_dai_link cocci_id/* sound/soc/fsl/fsl-asoc-card.c 625 */;
	struct cpu_priv {
		unsigned long sysclk_freq[2];
		u32 sysclk_dir[2];
		u32 sysclk_id[2];
		u32 slot_width;
	} cocci_id/* sound/soc/fsl/fsl-asoc-card.c 60 */;
	struct clk *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 526 */;
	const char *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 489 */;
	struct i2c_client *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 488 */;
	struct platform_device *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 481 */;
	struct snd_ac97 *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 457 */;
	struct snd_soc_component *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 456 */;
	struct codec_priv *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 450 */;
	struct snd_soc_dai *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 449 */;
	struct snd_soc_pcm_runtime cocci_id/* sound/soc/fsl/fsl-asoc-card.c 448 */;
	struct snd_soc_card *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 444 */;
	struct codec_priv {
		unsigned long mclk_freq;
		u32 mclk_id;
		u32 fll_id;
		u32 pll_id;
	} cocci_id/* sound/soc/fsl/fsl-asoc-card.c 43 */;
	unsigned int cocci_id/* sound/soc/fsl/fsl-asoc-card.c 404 */;
	u32 cocci_id/* sound/soc/fsl/fsl-asoc-card.c 320 */;
	struct device *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 319 */;
	struct device_node *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 316 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/fsl/fsl-asoc-card.c 249 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 248 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/fsl/fsl-asoc-card.c 218 */[];
	struct snd_mask *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 191 */;
	struct snd_interval *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 190 */;
	struct fsl_asoc_card_priv *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 189 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 187 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 186 */;
	int cocci_id/* sound/soc/fsl/fsl-asoc-card.c 186 */;
	const struct snd_soc_ops cocci_id/* sound/soc/fsl/fsl-asoc-card.c 182 */;
	struct cpu_priv *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 144 */;
	bool cocci_id/* sound/soc/fsl/fsl-asoc-card.c 143 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/fsl/fsl-asoc-card.c 138 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/fsl/fsl-asoc-card.c 123 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/fsl/fsl-asoc-card.c 104 */[];
}

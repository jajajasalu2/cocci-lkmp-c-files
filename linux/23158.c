cocci_test_suite() {
	char *cocci_id/* sound/soc/meson/axg-card.c 98 */;
	struct of_phandle_args cocci_id/* sound/soc/meson/axg-card.c 75 */;
	const char **cocci_id/* sound/soc/meson/axg-card.c 73 */;
	struct device_node **cocci_id/* sound/soc/meson/axg-card.c 72 */;
	struct platform_driver cocci_id/* sound/soc/meson/axg-card.c 707 */;
	struct device *cocci_id/* sound/soc/meson/axg-card.c 647 */;
	struct platform_device *cocci_id/* sound/soc/meson/axg-card.c 645 */;
	const struct of_device_id cocci_id/* sound/soc/meson/axg-card.c 639 */[];
	int (*cocci_id/* sound/soc/meson/axg-card.c 628 */)(struct snd_soc_card *c,
							    const char *p);
	const char *cocci_id/* sound/soc/meson/axg-card.c 627 */;
	struct axg_card *cocci_id/* sound/soc/meson/axg-card.c 597 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/meson/axg-card.c 562 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/meson/axg-card.c 561 */;
	int *cocci_id/* sound/soc/meson/axg-card.c 559 */;
	bool cocci_id/* sound/soc/meson/axg-card.c 512 */;
	void **cocci_id/* sound/soc/meson/axg-card.c 50 */;
	struct axg_dai_link_tdm_mask *cocci_id/* sound/soc/meson/axg-card.c 401 */;
	struct axg_dai_link_tdm_data *cocci_id/* sound/soc/meson/axg-card.c 399 */;
	const struct snd_soc_pcm_stream cocci_id/* sound/soc/meson/axg-card.c 36 */;
	u32 cocci_id/* sound/soc/meson/axg-card.c 339 */;
	char cocci_id/* sound/soc/meson/axg-card.c 338 */[32];
	unsigned int cocci_id/* sound/soc/meson/axg-card.c 307 */;
	struct axg_dai_link_tdm_data {
		unsigned int mclk_fs;
		unsigned int slots;
		unsigned int slot_width;
		u32 *tx_mask;
		u32 *rx_mask;
		struct axg_dai_link_tdm_mask *codec_masks;
	} cocci_id/* sound/soc/meson/axg-card.c 23 */;
	const struct snd_soc_ops cocci_id/* sound/soc/meson/axg-card.c 201 */;
	struct axg_dai_link_tdm_mask {
		u32 tx;
		u32 rx;
	} cocci_id/* sound/soc/meson/axg-card.c 18 */;
	struct snd_soc_dai *cocci_id/* sound/soc/meson/axg-card.c 178 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/meson/axg-card.c 174 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/meson/axg-card.c 172 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/meson/axg-card.c 171 */;
	struct snd_soc_aux_dev *cocci_id/* sound/soc/meson/axg-card.c 138 */;
	struct device_node *cocci_id/* sound/soc/meson/axg-card.c 137 */;
	struct snd_soc_card *cocci_id/* sound/soc/meson/axg-card.c 135 */;
	int cocci_id/* sound/soc/meson/axg-card.c 135 */;
	struct axg_card {
		struct snd_soc_card card;
		void **link_data;
	} cocci_id/* sound/soc/meson/axg-card.c 13 */;
	void cocci_id/* sound/soc/meson/axg-card.c 109 */;
}

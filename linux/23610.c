cocci_test_suite() {
	char *cocci_id/* sound/soc/sh/rcar/ssi.c 980 */;
	struct dma_chan *cocci_id/* sound/soc/sh/rcar/ssi.c 975 */;
	snd_pcm_uframes_t *cocci_id/* sound/soc/sh/rcar/ssi.c 899 */;
	struct rsnd_ssi {
		struct rsnd_mod mod;
		u32 flags;
		u32 cr_own;
		u32 cr_clk;
		u32 cr_mode;
		u32 cr_en;
		u32 wsr;
		int chan;
		int rate;
		int irq;
		unsigned int usrcnt;
		int byte_pos;
		int byte_per_period;
		int next_period_byte;
	} cocci_id/* sound/soc/sh/rcar/ssi.c 79 */;
	struct rsnd_ssi *cocci_id/* sound/soc/sh/rcar/ssi.c 774 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/sh/rcar/ssi.c 757 */;
	u32 *cocci_id/* sound/soc/sh/rcar/ssi.c 690 */;
	irqreturn_t cocci_id/* sound/soc/sh/rcar/ssi.c 681 */;
	void *cocci_id/* sound/soc/sh/rcar/ssi.c 681 */;
	bool cocci_id/* sound/soc/sh/rcar/ssi.c 646 */;
	u32 cocci_id/* sound/soc/sh/rcar/ssi.c 645 */;
	int cocci_id/* sound/soc/sh/rcar/ssi.c 644 */;
	struct device *cocci_id/* sound/soc/sh/rcar/ssi.c 643 */;
	struct rsnd_priv *cocci_id/* sound/soc/sh/rcar/ssi.c 642 */;
	struct rsnd_dai_stream *cocci_id/* sound/soc/sh/rcar/ssi.c 640 */;
	struct rsnd_mod *cocci_id/* sound/soc/sh/rcar/ssi.c 639 */;
	void cocci_id/* sound/soc/sh/rcar/ssi.c 639 */;
	bool cocci_id/* sound/soc/sh/rcar/ssi.c 637 */(struct rsnd_mod *mod,
						       struct rsnd_dai_stream *io);
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sh/rcar/ssi.c 526 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sh/rcar/ssi.c 525 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/sh/rcar/ssi.c 368 */;
	int cocci_id/* sound/soc/sh/rcar/ssi.c 233 */[];
	int *cocci_id/* sound/soc/sh/rcar/ssi.c 230 */;
	unsigned int cocci_id/* sound/soc/sh/rcar/ssi.c 229 */;
	int cocci_id/* sound/soc/sh/rcar/ssi.c 120 */(struct rsnd_mod *mod);
	struct rsnd_ssi cocci_id/* sound/soc/sh/rcar/ssi.c 112 */;
	char cocci_id/* sound/soc/sh/rcar/ssi.c 1103 */[RSND_SSI_NAME_SIZE];
	struct clk *cocci_id/* sound/soc/sh/rcar/ssi.c 1101 */;
	struct rsnd_mod_ops *cocci_id/* sound/soc/sh/rcar/ssi.c 1100 */;
	struct device_node *cocci_id/* sound/soc/sh/rcar/ssi.c 1053 */;
	struct rsnd_dai *cocci_id/* sound/soc/sh/rcar/ssi.c 1052 */;
	enum rsnd_mod_type cocci_id/* sound/soc/sh/rcar/ssi.c 1037 */;
	enum rsnd_mod_type cocci_id/* sound/soc/sh/rcar/ssi.c 1031 */[];
	struct rsnd_mod_ops cocci_id/* sound/soc/sh/rcar/ssi.c 1002 */;
}

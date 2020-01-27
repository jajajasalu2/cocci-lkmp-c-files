cocci_test_suite() {
	struct resource *cocci_id/* sound/soc/sh/rcar/dma.c 848 */;
	struct platform_device *cocci_id/* sound/soc/sh/rcar/dma.c 845 */;
	int (*cocci_id/* sound/soc/sh/rcar/dma.c 765 */)(struct rsnd_dai_stream *io,
							 struct rsnd_dma *dma,
							 struct rsnd_mod *mod_from,
							 struct rsnd_mod *mod_to);
	enum rsnd_mod_type cocci_id/* sound/soc/sh/rcar/dma.c 764 */;
	struct rsnd_mod_ops *cocci_id/* sound/soc/sh/rcar/dma.c 763 */;
	struct rsnd_dma *cocci_id/* sound/soc/sh/rcar/dma.c 762 */;
	struct device *cocci_id/* sound/soc/sh/rcar/dma.c 761 */;
	struct rsnd_dma_ctrl *cocci_id/* sound/soc/sh/rcar/dma.c 760 */;
	struct rsnd_mod **cocci_id/* sound/soc/sh/rcar/dma.c 755 */;
	void *cocci_id/* sound/soc/sh/rcar/dma.c 75 */;
	struct rsnd_dai_stream *cocci_id/* sound/soc/sh/rcar/dma.c 69 */;
	struct rsnd_mod *cocci_id/* sound/soc/sh/rcar/dma.c 68 */;
	void cocci_id/* sound/soc/sh/rcar/dma.c 68 */;
	struct rsnd_mod *cocci_id/* sound/soc/sh/rcar/dma.c 657 */[MOD_MAX];
	struct rsnd_priv *cocci_id/* sound/soc/sh/rcar/dma.c 631 */;
	int cocci_id/* sound/soc/sh/rcar/dma.c 629 */;
	dma_addr_t cocci_id/* sound/soc/sh/rcar/dma.c 627 */;
	struct rsnd_mod cocci_id/* sound/soc/sh/rcar/dma.c 62 */;
	struct rsnd_mod_ops cocci_id/* sound/soc/sh/rcar/dma.c 58 */;
	struct dma_addr {
		dma_addr_t out_addr;
		dma_addr_t in_addr;
	} cocci_id/* sound/soc/sh/rcar/dma.c 569 */[3][2][3];
	phys_addr_t cocci_id/* sound/soc/sh/rcar/dma.c 559 */;
	struct rsnd_dma cocci_id/* sound/soc/sh/rcar/dma.c 53 */;
	struct rsnd_dmapp *cocci_id/* sound/soc/sh/rcar/dma.c 491 */;
	struct rsnd_dma_ctrl {
		void __iomem *base;
		int dmaen_num;
		int dmapp_num;
	} cocci_id/* sound/soc/sh/rcar/dma.c 46 */;
	void __iomem *cocci_id/* sound/soc/sh/rcar/dma.c 446 */;
	u32 cocci_id/* sound/soc/sh/rcar/dma.c 441 */;
	const u8 *cocci_id/* sound/soc/sh/rcar/dma.c 376 */;
	const u8 cocci_id/* sound/soc/sh/rcar/dma.c 364 */[];
	struct rsnd_dma {
		struct rsnd_mod mod;
		struct rsnd_mod *mod_from;
		struct rsnd_mod *mod_to;
		dma_addr_t src_addr;
		dma_addr_t dst_addr;
		union {
			struct rsnd_dmaen en;
			struct rsnd_dmapp pp;
		} dma;
	} cocci_id/* sound/soc/sh/rcar/dma.c 34 */;
	unsigned int cocci_id/* sound/soc/sh/rcar/dma.c 305 */;
	enum dma_status cocci_id/* sound/soc/sh/rcar/dma.c 304 */;
	struct dma_tx_state cocci_id/* sound/soc/sh/rcar/dma.c 303 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/sh/rcar/dma.c 300 */;
	snd_pcm_uframes_t *cocci_id/* sound/soc/sh/rcar/dma.c 298 */;
	struct rsnd_dmapp {
		int dmapp_id;
		u32 chcr;
	} cocci_id/* sound/soc/sh/rcar/dma.c 29 */;
	char *cocci_id/* sound/soc/sh/rcar/dma.c 240 */;
	struct dma_chan *cocci_id/* sound/soc/sh/rcar/dma.c 239 */;
	struct device_node *cocci_id/* sound/soc/sh/rcar/dma.c 239 */;
	struct rsnd_dmaen {
		struct dma_chan *chan;
		dma_cookie_t cookie;
		unsigned int dma_len;
	} cocci_id/* sound/soc/sh/rcar/dma.c 23 */;
	enum dma_slave_buswidth cocci_id/* sound/soc/sh/rcar/dma.c 168 */;
	struct dma_slave_config cocci_id/* sound/soc/sh/rcar/dma.c 167 */;
	struct dma_async_tx_descriptor *cocci_id/* sound/soc/sh/rcar/dma.c 166 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sh/rcar/dma.c 164 */;
	struct rsnd_dmaen *cocci_id/* sound/soc/sh/rcar/dma.c 114 */;
}

cocci_test_suite() {
	struct clk *cocci_id/* sound/soc/sh/fsi.c 948 */;
	struct fsi_clk *cocci_id/* sound/soc/sh/fsi.c 832 */;
	int cocci_id/* sound/soc/sh/fsi.c 829 */;
	int (*cocci_id/* sound/soc/sh/fsi.c 732 */)(struct device *dev,
						    struct fsi_priv *fsi);
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/sh/fsi.c 409 */;
	unsigned long cocci_id/* sound/soc/sh/fsi.c 362 */;
	struct fsi_master *cocci_id/* sound/soc/sh/fsi.c 359 */;
	u32 cocci_id/* sound/soc/sh/fsi.c 324 */;
	u32 __iomem *cocci_id/* sound/soc/sh/fsi.c 324 */;
	void cocci_id/* sound/soc/sh/fsi.c 324 */;
	struct fsi_master {
		void __iomem *base;
		struct fsi_priv fsia;
		struct fsi_priv fsib;
		const struct fsi_core *core;
		spinlock_t lock;
	} cocci_id/* sound/soc/sh/fsi.c 292 */;
	struct fsi_core {
		int ver;
		u32 int_st;
		u32 iemsk;
		u32 imsk;
		u32 a_mclk;
		u32 b_mclk;
	} cocci_id/* sound/soc/sh/fsi.c 282 */;
	struct fsi_stream_handler {
		int (*init)(struct fsi_priv *fsi, struct fsi_stream *io);
		int (*quit)(struct fsi_priv *fsi, struct fsi_stream *io);
		int (*probe)(struct fsi_priv *fsi, struct fsi_stream *io,
			     struct device *dev);
		int (*transfer)(struct fsi_priv *fsi, struct fsi_stream *io);
		int (*remove)(struct fsi_priv *fsi, struct fsi_stream *io);
		int (*start_stop)(struct fsi_priv *fsi, struct fsi_stream *io,
				  int enable);
	} cocci_id/* sound/soc/sh/fsi.c 268 */;
	struct fsi_priv {
		void __iomem *base;
		phys_addr_t phys;
		struct fsi_master *master;
		struct fsi_stream playback;
		struct fsi_stream capture;
		struct fsi_clk clock;
		u32 fmt;
		int chan_num:16;
		unsigned int clk_master:1;
		unsigned int clk_cpg:1;
		unsigned int spdif:1;
		unsigned int enable_stream:1;
		unsigned int bit_clk_inv:1;
		unsigned int lr_clk_inv:1;
	} cocci_id/* sound/soc/sh/fsi.c 247 */;
	struct fsi_clk {
		struct clk *own;
		struct clk *xck;
		struct clk *ick;
		struct clk *div;
		int (*set_rate)(struct device *dev, struct fsi_priv *fsi);
		unsigned long rate;
		unsigned int count;
	} cocci_id/* sound/soc/sh/fsi.c 234 */;
	struct platform_driver cocci_id/* sound/soc/sh/fsi.c 2094 */;
	const struct dev_pm_ops cocci_id/* sound/soc/sh/fsi.c 2089 */;
	struct device *cocci_id/* sound/soc/sh/fsi.c 2050 */;
	struct fsi_stream *cocci_id/* sound/soc/sh/fsi.c 2049 */;
	struct fsi_priv *cocci_id/* sound/soc/sh/fsi.c 2048 */;
	struct fsi_stream {
		struct snd_pcm_substream *substream;
		int fifo_sample_capa;
		int buff_sample_capa;
		int buff_sample_pos;
		int period_samples;
		int period_pos;
		int sample_width;
		int uerr_num;
		int oerr_num;
		u32 bus_option;
		struct fsi_stream_handler *handler;
		struct fsi_priv *priv;
		struct dma_chan *chan;
		int dma_id;
	} cocci_id/* sound/soc/sh/fsi.c 201 */;
	struct fsi_core *cocci_id/* sound/soc/sh/fsi.c 1936 */;
	const struct platform_device_id *cocci_id/* sound/soc/sh/fsi.c 1934 */;
	struct resource *cocci_id/* sound/soc/sh/fsi.c 1922 */;
	const struct fsi_core *cocci_id/* sound/soc/sh/fsi.c 1920 */;
	struct sh_fsi_platform_info cocci_id/* sound/soc/sh/fsi.c 1919 */;
	struct platform_device *cocci_id/* sound/soc/sh/fsi.c 1915 */;
	const struct platform_device_id cocci_id/* sound/soc/sh/fsi.c 1909 */[];
	const struct of_device_id cocci_id/* sound/soc/sh/fsi.c 1902 */[];
	const struct fsi_core cocci_id/* sound/soc/sh/fsi.c 1882 */;
	struct sh_fsi_port_info *cocci_id/* sound/soc/sh/fsi.c 1869 */;
	struct {
		char *name;
		unsigned int val;
	} cocci_id/* sound/soc/sh/fsi.c 1836 */[];
	char cocci_id/* sound/soc/sh/fsi.c 1834 */[128];
	struct device_node *cocci_id/* sound/soc/sh/fsi.c 1829 */;
	char *cocci_id/* sound/soc/sh/fsi.c 1828 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/sh/fsi.c 1815 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/sh/fsi.c 1780 */[];
	snd_pcm_uframes_t cocci_id/* sound/soc/sh/fsi.c 1749 */;
	struct snd_soc_component *cocci_id/* sound/soc/sh/fsi.c 1743 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/sh/fsi.c 1724 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/sh/fsi.c 1709 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/sh/fsi.c 1697 */;
	struct snd_soc_dai *cocci_id/* sound/soc/sh/fsi.c 1687 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sh/fsi.c 1686 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sh/fsi.c 1685 */;
	unsigned int cocci_id/* sound/soc/sh/fsi.c 1630 */;
	struct fsi_stream_handler cocci_id/* sound/soc/sh/fsi.c 1421 */;
	struct dma_slave_config cocci_id/* sound/soc/sh/fsi.c 1373 */;
	dma_cap_mask_t cocci_id/* sound/soc/sh/fsi.c 1363 */;
	enum dma_transfer_direction cocci_id/* sound/soc/sh/fsi.c 1290 */;
	struct dma_async_tx_descriptor *cocci_id/* sound/soc/sh/fsi.c 1288 */;
	void *cocci_id/* sound/soc/sh/fsi.c 1274 */;
	irqreturn_t cocci_id/* sound/soc/sh/fsi.c 1232 */;
	void (*cocci_id/* sound/soc/sh/fsi.c 1113 */)(struct fsi_priv *fsi,
						      u8 *buf, int samples);
	u8 *cocci_id/* sound/soc/sh/fsi.c 1104 */;
	u32 *cocci_id/* sound/soc/sh/fsi.c 1097 */;
	u16 cocci_id/* sound/soc/sh/fsi.c 1083 */;
	u16 *cocci_id/* sound/soc/sh/fsi.c 1079 */;
}

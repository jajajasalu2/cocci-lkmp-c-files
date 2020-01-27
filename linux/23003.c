cocci_test_suite() {
	struct xlnx_pcm_stream_param {
		void __iomem *mmio;
		bool interleaved;
		u32 xfer_mode;
		u32 ch_limit;
		u64 buffer_size;
	} cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 96 */;
	struct xlnx_pcm_drv_data {
		void __iomem *mmio;
		bool s2mm_presence;
		bool mm2s_presence;
		int s2mm_irq;
		int mm2s_irq;
		struct snd_pcm_substream *play_stream;
		struct snd_pcm_substream *capture_stream;
		struct clk *axi_clk;
	} cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 77 */;
	enum bit_depth{BIT_DEPTH_8, BIT_DEPTH_16, BIT_DEPTH_20, BIT_DEPTH_24, BIT_DEPTH_32,} cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 69 */;
	struct platform_driver cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 681 */;
	const struct of_device_id cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 675 */[];
	struct device *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 559 */;
	struct platform_device *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 554 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 542 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 533 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 431 */;
	u64 cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 430 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 425 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 407 */;
	struct xlnx_pcm_stream_param *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 392 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 389 */;
	struct snd_soc_component *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 388 */;
	struct xlnx_pcm_drv_data *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 324 */;
	irqreturn_t cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 278 */;
	void *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 278 */;
	u32 cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 268 */;
	void __iomem *cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 266 */;
	int cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 266 */;
	void cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 266 */;
	enum{AES_TO_AES, AES_TO_PCM, PCM_TO_PCM, PCM_TO_AES,} cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 122 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/xilinx/xlnx_formatter_pcm.c 104 */;
}

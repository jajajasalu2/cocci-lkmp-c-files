cocci_test_suite() {
	dma_addr_t *cocci_id/* sound/soc/samsung/idma.c 58 */;
	struct idma_info {
		spinlock_t lock;
		void __iomem *regs;
		dma_addr_t lp_tx_addr;
	} cocci_id/* sound/soc/samsung/idma.c 50 */;
	struct platform_driver cocci_id/* sound/soc/samsung/idma.c 418 */;
	struct platform_device *cocci_id/* sound/soc/samsung/idma.c 408 */;
	int cocci_id/* sound/soc/samsung/idma.c 408 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/samsung/idma.c 394 */;
	struct idma_ctrl {
		spinlock_t lock;
		int state;
		dma_addr_t start;
		dma_addr_t pos;
		dma_addr_t end;
		dma_addr_t period;
		dma_addr_t periodsz;
		void *token;
		void (*cb)(void *dt, int bytes_xfer);
	} cocci_id/* sound/soc/samsung/idma.c 38 */;
	struct snd_card *cocci_id/* sound/soc/samsung/idma.c 370 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/samsung/idma.c 368 */;
	unsigned char *__forcecocci_id/* sound/soc/samsung/idma.c 362 */;
	void __iomem *cocci_id/* sound/soc/samsung/idma.c 344 */;
	struct snd_dma_buffer *cocci_id/* sound/soc/samsung/idma.c 334 */;
	struct snd_pcm *cocci_id/* sound/soc/samsung/idma.c 331 */;
	struct idma_ctrl *cocci_id/* sound/soc/samsung/idma.c 318 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/samsung/idma.c 317 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/samsung/idma.c 315 */;
	struct snd_soc_component *cocci_id/* sound/soc/samsung/idma.c 314 */;
	struct idma_ctrl cocci_id/* sound/soc/samsung/idma.c 296 */;
	irqreturn_t cocci_id/* sound/soc/samsung/idma.c 260 */;
	unsigned long cocci_id/* sound/soc/samsung/idma.c 246 */;
	struct vm_area_struct *cocci_id/* sound/soc/samsung/idma.c 243 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/samsung/idma.c 24 */;
	dma_addr_t cocci_id/* sound/soc/samsung/idma.c 228 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/samsung/idma.c 222 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/samsung/idma.c 142 */;
	void *cocci_id/* sound/soc/samsung/idma.c 131 */;
	u32 cocci_id/* sound/soc/samsung/idma.c 111 */;
	void cocci_id/* sound/soc/samsung/idma.c 109 */;
	void (*cocci_id/* sound/soc/samsung/idma.c 100 */)(void *, int);
}

cocci_test_suite() {
	irqreturn_t cocci_id/* arch/arm/mach-rpc/dma.c 95 */;
	int __init cocci_id/* arch/arm/mach-rpc/dma.c 346 */;
	dma_t cocci_id/* arch/arm/mach-rpc/dma.c 342 */;
	struct iomd_dma cocci_id/* arch/arm/mach-rpc/dma.c 333 */[6];
	struct dma_ops cocci_id/* arch/arm/mach-rpc/dma.c 313 */;
	int cocci_id/* arch/arm/mach-rpc/dma.c 306 */;
	struct floppy_dma cocci_id/* arch/arm/mach-rpc/dma.c 301 */;
	struct floppy_dma *cocci_id/* arch/arm/mach-rpc/dma.c 301 */;
	dma_t *cocci_id/* arch/arm/mach-rpc/dma.c 299 */;
	unsigned int cocci_id/* arch/arm/mach-rpc/dma.c 299 */;
	void cocci_id/* arch/arm/mach-rpc/dma.c 299 */;
	unsigned long cocci_id/* arch/arm/mach-rpc/dma.c 286 */;
	unsigned char cocci_id/* arch/arm/mach-rpc/dma.c 276 */;
	struct pt_regs cocci_id/* arch/arm/mach-rpc/dma.c 270 */;
	void *cocci_id/* arch/arm/mach-rpc/dma.c 268 */;
	struct floppy_dma {
		struct dma_struct dma;
		unsigned int fiq;
	} cocci_id/* arch/arm/mach-rpc/dma.c 260 */;
	struct fiq_handler cocci_id/* arch/arm/mach-rpc/dma.c 256 */;
	struct iomd_dma {
		struct dma_struct dma;
		void __iomem *base;
		int irq;
		unsigned int state;
		dma_addr_t cur_addr;
		unsigned int cur_len;
		dma_addr_t dma_addr;
		unsigned int dma_len;
	} cocci_id/* arch/arm/mach-rpc/dma.c 25 */;
	void __iomem *cocci_id/* arch/arm/mach-rpc/dma.c 195 */;
	struct iomd_dma cocci_id/* arch/arm/mach-rpc/dma.c 194 */;
	struct iomd_dma *cocci_id/* arch/arm/mach-rpc/dma.c 194 */;
	dma_addr_t cocci_id/* arch/arm/mach-rpc/dma.c 151 */;
	struct device cocci_id/* arch/arm/mach-rpc/dma.c 149 */;
}

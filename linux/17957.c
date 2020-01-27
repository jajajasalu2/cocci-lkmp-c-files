cocci_test_suite() {
	struct xresource cocci_id/* arch/sparc/kernel/ioport.c 97 */[XNRES];
	struct xresource {
		struct resource xres;
		int xflag;
		char xname[XNMLN + 1];
	} cocci_id/* arch/sparc/kernel/ioport.c 91 */;
	void cocci_id/* arch/sparc/kernel/ioport.c 71 */(void);
	void cocci_id/* arch/sparc/kernel/ioport.c 69 */(struct resource *res);
	void __iomem *cocci_id/* arch/sparc/kernel/ioport.c 67 */(unsigned int busno,
								  unsigned long phys,
								  unsigned long size,
								  char *name);
	void __iomem *cocci_id/* arch/sparc/kernel/ioport.c 66 */(struct resource *res,
								  u32 bus,
								  u32 pa,
								  int sz);
	unsigned long long cocci_id/* arch/sparc/kernel/ioport.c 389 */;
	const char *cocci_id/* arch/sparc/kernel/ioport.c 384 */;
	struct seq_file *cocci_id/* arch/sparc/kernel/ioport.c 381 */;
	const struct dma_map_ops *cocci_id/* arch/sparc/kernel/ioport.c 376 */;
	enum dma_data_direction cocci_id/* arch/sparc/kernel/ioport.c 370 */;
	phys_addr_t cocci_id/* arch/sparc/kernel/ioport.c 369 */;
	dma_addr_t cocci_id/* arch/sparc/kernel/ioport.c 357 */;
	gfp_t cocci_id/* arch/sparc/kernel/ioport.c 319 */;
	dma_addr_t *cocci_id/* arch/sparc/kernel/ioport.c 318 */;
	struct device *cocci_id/* arch/sparc/kernel/ioport.c 318 */;
	void *cocci_id/* arch/sparc/kernel/ioport.c 318 */;
	size_t cocci_id/* arch/sparc/kernel/ioport.c 318 */;
	int __init cocci_id/* arch/sparc/kernel/ioport.c 303 */;
	long cocci_id/* arch/sparc/kernel/ioport.c 286 */;
	bool cocci_id/* arch/sparc/kernel/ioport.c 267 */;
	void cocci_id/* arch/sparc/kernel/ioport.c 238 */;
	u32 cocci_id/* arch/sparc/kernel/ioport.c 216 */;
	struct resource cocci_id/* arch/sparc/kernel/ioport.c 198 */;
	struct resource *cocci_id/* arch/sparc/kernel/ioport.c 182 */;
	struct xresource *cocci_id/* arch/sparc/kernel/ioport.c 181 */;
	int cocci_id/* arch/sparc/kernel/ioport.c 180 */;
	char *cocci_id/* arch/sparc/kernel/ioport.c 178 */;
	void __iomem *cocci_id/* arch/sparc/kernel/ioport.c 177 */;
	unsigned long cocci_id/* arch/sparc/kernel/ioport.c 177 */;
	unsigned int cocci_id/* arch/sparc/kernel/ioport.c 177 */;
	volatile void __iomem *cocci_id/* arch/sparc/kernel/ioport.c 136 */;
	char cocci_id/* arch/sparc/kernel/ioport.c 126 */[14];
}

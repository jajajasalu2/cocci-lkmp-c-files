cocci_test_suite() {
	struct octeon_dma_map_ops {
		dma_addr_t (*phys_to_dma)(struct device *dev,
					  phys_addr_t paddr);
		phys_addr_t (*dma_to_phys)(struct device *dev,
					   dma_addr_t daddr);
	} cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 30 */;
	unsigned long cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 197 */;
	size_t cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 196 */;
	struct memblock_region *cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 193 */;
	char *cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 189 */;
	phys_addr_t cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 180 */;
	dma_addr_t cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 180 */;
	struct device *cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 180 */;
	void __init cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 150 */;
	void cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 150 */;
	const struct octeon_dma_map_ops *cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 148 */;
	const struct octeon_dma_map_ops cocci_id/* arch/mips/cavium-octeon/dma-octeon.c 110 */;
}

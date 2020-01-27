cocci_test_suite() {
	int cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 91 */;
	u64 cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 42 */;
	struct msi_desc *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 40 */;
	struct msi_msg cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 39 */;
	struct pci_dev *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 37 */;
	struct ppc4xx_hsta_msi cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 35 */;
	void cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 205 */;
	struct platform_driver cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 197 */;
	const struct of_device_id cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 190 */[];
	struct ppc4xx_hsta_msi {
		struct device *dev;
		u32 __iomem *data;
		u64 address;
		struct msi_bitmap bmp;
		int *irq_map;
		int irq_count;
	} cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 19 */;
	struct pci_controller *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 128 */;
	struct resource *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 126 */;
	struct device *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 125 */;
	struct platform_device *cocci_id/* arch/powerpc/platforms/4xx/hsta_msi.c 123 */;
}

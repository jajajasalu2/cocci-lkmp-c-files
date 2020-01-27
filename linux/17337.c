cocci_test_suite() {
	struct pci_dev **cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 98 */;
	struct pnv_ioda_pe *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 97 */;
	unsigned long cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 591 */;
	unsigned int cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 551 */;
	struct npu *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 529 */;
	int cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 526 */;
	struct npu_comp cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 510 */;
	struct iommu_table_group *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 481 */;
	struct npu_comp *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 418 */;
	void cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 418 */;
	struct iommu_table_group_ops cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 409 */;
	struct iommu_table *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 293 */;
	struct iommu_table **cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 277 */;
	__u64 cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 276 */;
	__u32 cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 276 */;
	long cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 274 */;
	struct npu {
		int index;
		struct npu_comp npucomp;
	} cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 268 */;
	struct npu_comp {
		struct iommu_table_group table_group;
		int pe_num;
		struct pnv_ioda_pe *pe[NV_NPU_MAX_PE_NUM];
	} cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 261 */;
	struct pnv_ioda_pe cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 233 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 22 */;
	const __u64 cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 136 */;
	const unsigned long cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 134 */;
	int64_t cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 133 */;
	long cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 124 */(struct iommu_table_group *table_group,
									int num);
	struct pci_dn *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 104 */;
	struct pci_dev *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 102 */;
	struct pci_controller *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 101 */;
	struct pnv_phb *cocci_id/* arch/powerpc/platforms/powernv/npu-dma.c 100 */;
}

cocci_test_suite() {
	struct etnaviv_iommu_context *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 64 */;
	struct device *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 34 */;
	struct etnaviv_cmdbuf_suballoc {
		struct device *dev;
		void *vaddr;
		dma_addr_t paddr;
		struct mutex lock;
	DECLARE_BITMAP(granule_map,SUBALLOC_GRANULES)
		;
		int free_space;
		wait_queue_head_t free_event;
	} cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 20 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 139 */;
	struct etnaviv_vram_mapping *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 134 */;
	u32 cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 133 */;
	int cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 121 */;
	struct etnaviv_cmdbuf_suballoc *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 120 */;
	struct etnaviv_cmdbuf *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 118 */;
	void cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_cmdbuf.c 118 */;
}

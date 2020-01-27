cocci_test_suite() {
	struct iova *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 70 */;
	struct sg_table *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 69 */;
	struct dma_buf_attachment *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 67 */;
	struct device *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 66 */;
	dma_addr_t *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 64 */;
	struct dma_buf_attachment **cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 63 */;
	enum dma_data_direction cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 62 */;
	struct dma_buf *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 61 */;
	int cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 60 */;
	struct tegra_vde_cache_entry cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 51 */;
	struct tegra_vde *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 49 */;
	struct tegra_vde_cache_entry *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 48 */;
	struct work_struct *cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 46 */;
	void cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 46 */;
	struct tegra_vde_cache_entry {
		enum dma_data_direction dma_dir;
		struct dma_buf_attachment *a;
		struct delayed_work dwork;
		struct tegra_vde *vde;
		struct list_head list;
		struct sg_table *sgt;
		struct iova *iova;
		unsigned int refcnt;
	} cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 18 */;
	bool cocci_id/* drivers/staging/media/tegra-vde/dmabuf-cache.c 163 */;
}

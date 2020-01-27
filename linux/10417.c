cocci_test_suite() {
	struct vgem_fence *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 87 */;
	unsigned int cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 85 */;
	struct timer_list *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 77 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 68 */;
	char *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 61 */;
	typeof(*fence) cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 50 */;
	const char *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 38 */;
	struct vgem_fence {
		struct dma_fence base;
		struct spinlock lock;
		struct timer_list timer;
	} cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 32 */;
	void cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 248 */;
	void *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 241 */;
	int cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 241 */;
	struct drm_vgem_fence_signal *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 210 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 133 */;
	struct drm_gem_object *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 132 */;
	struct dma_resv *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 131 */;
	struct vgem_file *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 130 */;
	struct drm_vgem_fence_attach *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 129 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 127 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vgem/vgem_fence.c 125 */;
}

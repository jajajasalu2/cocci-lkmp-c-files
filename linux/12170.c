cocci_test_suite() {
	struct sg_dma_page_iter cocci_id/* drivers/gpu/drm/lima/lima_vm.c 94 */;
	struct lima_bo_va *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 93 */;
	bool cocci_id/* drivers/gpu/drm/lima/lima_vm.c 91 */;
	struct lima_vm *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 91 */;
	struct lima_bo *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 91 */;
	int cocci_id/* drivers/gpu/drm/lima/lima_vm.c 91 */;
	u32 *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 54 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/lima/lima_vm.c 47 */;
	struct lima_vm cocci_id/* drivers/gpu/drm/lima/lima_vm.c 235 */;
	struct kref *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 233 */;
	struct lima_device *cocci_id/* drivers/gpu/drm/lima/lima_vm.c 198 */;
	u32 cocci_id/* drivers/gpu/drm/lima/lima_vm.c 183 */;
	void cocci_id/* drivers/gpu/drm/lima/lima_vm.c 155 */;
	struct lima_bo_va {
		struct list_head list;
		unsigned int ref_count;
		struct drm_mm_node node;
		struct lima_vm *vm;
	} cocci_id/* drivers/gpu/drm/lima/lima_vm.c 12 */;
}

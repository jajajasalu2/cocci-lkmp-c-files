cocci_test_suite() {
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 66 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 65 */;
	struct device_attribute *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 63 */;
	char *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 63 */;
	struct device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 62 */;
	ssize_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 62 */;
	const struct ttm_mem_type_manager_func cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 511 */;
	struct amdgpu_vram_mgr *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 500 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 498 */;
	struct ttm_mem_type_manager *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 497 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 497 */;
	uint64_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 438 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 352 */;
	enum drm_mm_insert_mode cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 320 */;
	struct drm_mm *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 318 */;
	const struct ttm_place *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 313 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 312 */;
	struct amdgpu_vram_mgr {
		struct drm_mm mm;
		spinlock_t lock;
		atomic64_t usage;
		atomic64_t vis_usage;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 30 */;
	unsigned cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 264 */;
	struct drm_mm_node *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 263 */;
	struct ttm_mem_reg *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 262 */;
	u64 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 259 */;
	struct amdgpu_bo *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 259 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 212 */;
	unsigned long cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_vram_mgr.c 160 */;
}

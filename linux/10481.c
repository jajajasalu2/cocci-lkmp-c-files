cocci_test_suite() {
	struct radeon_agpmode_quirk cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 47 */[];
	struct radeon_agpmode_quirk {
		u32 hostbridge_vendor;
		u32 hostbridge_device;
		u32 chip_vendor;
		u32 chip_device;
		u32 subsys_vendor;
		u32 subsys_device;
		u32 default_mode;
	} cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 37 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 277 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 277 */;
	bool cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 139 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 137 */;
	struct drm_agp_info cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 136 */;
	struct drm_agp_mode cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 135 */;
	struct radeon_agpmode_quirk *cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 134 */;
	int cocci_id/* drivers/gpu/drm/radeon/radeon_agp.c 131 */;
}

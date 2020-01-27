cocci_test_suite() {
	enum{ACP_TILE_P1=0, ACP_TILE_P2, ACP_TILE_DSP0, ACP_TILE_DSP1, ACP_TILE_DSP2,} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 88 */;
	const struct amdgpu_ip_block_version cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 556 */;
	const struct amd_ip_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 539 */;
	enum amd_powergating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 527 */;
	enum amd_clockgating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 521 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 505 */;
	void *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 500 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 500 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 420 */;
	struct device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 419 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 417 */;
	struct i2s_platform_data cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 245 */;
	struct resource cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 239 */;
	struct mfd_cell cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 231 */;
	struct acp_pm_domain cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 218 */;
	const struct amdgpu_ip_block *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 196 */;
	struct i2s_platform_data *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 192 */;
	uint64_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 188 */;
	char cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 168 */[25];
	const char *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 166 */;
	struct acp_pm_domain *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 127 */;
	struct generic_pm_domain *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 125 */;
	struct acp_pm_domain {
		void *adev;
		struct generic_pm_domain gpd;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_acp.c 120 */;
}

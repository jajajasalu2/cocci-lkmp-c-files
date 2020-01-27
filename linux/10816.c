cocci_test_suite() {
	u64 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 97 */;
	struct amdgpu_pmu_entry {
		struct list_head entry;
		struct amdgpu_device *adev;
		struct pmu pmu;
		unsigned int pmu_perf_type;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 35 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 269 */;
	struct pmu cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 215 */;
	char cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 205 */[PMU_NAME_SIZE];
	unsigned int cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 202 */;
	char *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 201 */;
	const struct attribute_group *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 200 */[];
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 176 */;
	struct amdgpu_pmu_entry cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 152 */;
	struct amdgpu_pmu_entry *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 151 */;
	struct hw_perf_event *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 148 */;
	struct perf_event *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 146 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_pmu.c 146 */;
}

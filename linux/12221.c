cocci_test_suite() {
	unsigned cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 54 */;
	u32 *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 498 */;
	const struct etnaviv_pm_signal *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 497 */;
	const struct etnaviv_pm_domain *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 496 */;
	const struct etnaviv_pm_domain_meta *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 495 */;
	u32 cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 493 */;
	const struct etnaviv_perfmon_request *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 493 */;
	struct etnaviv_gpu *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 492 */;
	void cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 492 */;
	const struct drm_etnaviv_gem_submit_pmr *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 475 */;
	struct drm_etnaviv_pm_signal *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 449 */;
	struct drm_etnaviv_pm_domain *cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 427 */;
	int cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 426 */;
	const struct etnaviv_pm_domain_meta cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 411 */[];
	const struct etnaviv_pm_signal cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 398 */[];
	const struct etnaviv_pm_domain cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 392 */[];
	struct etnaviv_pm_domain_meta {
		const struct etnaviv_pm_domain *domains;
		u32 nr_domains;
	} cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 34 */;
	struct etnaviv_pm_domain {
		char name[64];
		u32 profile_read;
		u32 profile_config;
		u8 nr_signals;
		const struct etnaviv_pm_signal *signal;
	} cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 23 */;
	struct etnaviv_pm_signal {
		char name[64];
		u32 data;
		u32 (*sample)(struct etnaviv_gpu *gpu,
			      const struct etnaviv_pm_domain *domain,
			      const struct etnaviv_pm_signal *signal);
	} cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 14 */;
	struct etnaviv_pm_domain cocci_id/* drivers/gpu/drm/etnaviv/etnaviv_perfmon.c 12 */;
}

cocci_test_suite() {
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 77 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 76 */;
	struct drm_modeset_acquire_ctx cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 74 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 73 */;
	struct drm_self_refresh_data cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 71 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 67 */;
	struct drm_self_refresh_data {
		struct drm_crtc *crtc;
		struct delayed_work entry_work;
		struct mutex avg_mutex;
		struct ewma_psr_time entry_avg_ms;
		struct ewma_psr_time exit_avg_ms;
	} cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 58 */;
	unsigned int cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 205 */;
	struct drm_self_refresh_data *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 204 */;
	int cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 191 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 190 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 189 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 187 */;
	void cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 187 */;
	struct ewma_psr_time *cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 156 */;
	bool cocci_id/* drivers/gpu/drm/drm_self_refresh_helper.c 154 */;
}

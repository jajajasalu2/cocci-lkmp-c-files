cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 763 */;
	struct msm_dsi_pll *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 73 */;
	const struct mipi_dsi_msg *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 717 */;
	struct list_head *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 687 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 683 */;
	u8 cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 645 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 572 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 566 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 557 */;
	bool cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 545 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 544 */;
	struct msm_dsi *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 542 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 538 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 481 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 470 */;
	void cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 470 */;
	struct msm_dsi_manager *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 47 */;
	struct device_node *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 45 */;
	struct msm_dsi_phy_shared_timings cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 377 */[DSI_MAX];
	struct drm_connector *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 361 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 360 */;
	long cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 347 */;
	struct msm_kms *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 346 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 345 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 340 */;
	struct dsi_connector *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 308 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 296 */;
	struct msm_dsi_manager cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 29 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 230 */;
	struct dsi_bridge *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 224 */;
	int cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 222 */;
	struct dsi_bridge cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 214 */;
	struct dsi_connector cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 213 */;
	struct msm_dsi_manager {
		struct msm_dsi *dsi[DSI_MAX];
		bool is_dual_dsi;
		bool is_sync_needed;
		int master_dsi_link_id;
	} cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 21 */;
	struct dsi_bridge {
		struct drm_bridge base;
		int id;
	} cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 208 */;
	struct dsi_connector {
		struct drm_connector base;
		int id;
	} cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 203 */;
	struct msm_dsi_phy_clk_request cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 127 */;
	struct msm_dsi_phy_shared_timings *cocci_id/* drivers/gpu/drm/msm/dsi/dsi_manager.c 125 */;
}

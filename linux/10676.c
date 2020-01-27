cocci_test_suite() {
	struct hdcp2_ake_send_hprime *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 984 */;
	size_t *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 958 */;
	struct hdcp2_ake_no_stored_km *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 957 */;
	bool *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 956 */;
	struct hdcp2_ake_send_cert *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 955 */;
	struct hdcp2_ake_init *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 930 */;
	struct intel_connector cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 833 */;
	enum transcoder cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 762 */;
	enum port cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 761 */;
	struct intel_digital_port *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 760 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 759 */;
	u8 cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 70 */[5];
	union {
		u32 reg;
		u8 shim[DRM_HDCP_RI_LEN];
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 612 */;
	union {
		u32 reg[2];
		u8 shim[DRM_HDCP_KSV_LEN];
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 608 */;
	union {
		u32 reg[2];
		u8 shim[DRM_HDCP_AN_LEN];
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 604 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 602 */;
	u8 cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 519 */[2];
	unsigned int cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 333 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 2047 */;
	u64 cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 2045 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 2042 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 2041 */;
	struct hdcp2_streamid_type cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1854 */;
	u8 cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1848 */;
	enum mei_fw_tc cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1814 */;
	enum mei_fw_ddi cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1801 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1795 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1784 */;
	void *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1771 */;
	struct device *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1770 */;
	struct intel_hdcp cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1758 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1755 */;
	struct intel_connector *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1656 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1656 */;
	struct intel_hdcp *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1634 */;
	enum i915_power_well_id cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 152 */;
	struct i915_power_well *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 151 */;
	struct i915_power_domains *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 150 */;
	bool cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 148 */;
	const u8 *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1434 */;
	u8 *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1416 */;
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1415 */;
	const struct intel_hdcp_shim *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1414 */;
	union {
		struct hdcp2_rep_send_receiverid_list recvid_list;
		struct hdcp2_rep_send_ack rep_ack;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1410 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1409 */;
	union {
		struct hdcp2_rep_stream_manage stream_manage;
		struct hdcp2_rep_stream_ready stream_ready;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1358 */;
	struct hdcp2_ske_send_eks cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1338 */;
	union {
		struct hdcp2_lc_init lc_init;
		struct hdcp2_lc_send_lprime send_lprime;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1302 */;
	size_t cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1223 */;
	union {
		struct hdcp2_ake_init ake_init;
		struct hdcp2_ake_send_cert send_cert;
		struct hdcp2_ake_no_stored_km no_stored_km;
		struct hdcp2_ake_send_hprime send_hprime;
		struct hdcp2_ake_send_pairing_info pairing_info;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1215 */;
	struct i915_hdcp_comp_master *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1164 */;
	struct hdcp_port_data *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1162 */;
	struct hdcp2_rep_stream_ready *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1137 */;
	struct hdcp2_rep_send_ack *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1110 */;
	struct hdcp2_rep_send_receiverid_list *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1108 */;
	struct hdcp2_ske_send_eks *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1083 */;
	struct hdcp2_lc_send_lprime *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1059 */;
	struct hdcp2_lc_init *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1034 */;
	struct hdcp2_ake_send_pairing_info *cocci_id/* drivers/gpu/drm/i915/display/intel_hdcp.c 1009 */;
}

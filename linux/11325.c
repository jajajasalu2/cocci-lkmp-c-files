cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 87 */(struct drm_dp_mst_topology_mgr *mgr);
	void cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 86 */(struct drm_dp_aux *aux);
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 85 */(struct drm_dp_aux *aux);
	bool cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 82 */(struct drm_dp_mst_topology_mgr *mgr,
								    u8 *guid);
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 79 */(struct drm_dp_mst_topology_mgr *mgr,
								   struct drm_dp_mst_branch *mstb,
								   struct drm_dp_mst_port *port);
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 77 */(struct drm_dp_mst_topology_mgr *mgr,
								   struct drm_dp_mst_branch *mstb);
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 70 */(struct drm_dp_mst_topology_mgr *mgr,
								   struct drm_dp_mst_port *port,
								   int offset,
								   int size,
								   u8 *bytes);
	struct drm_dp_sideband_msg_hdr cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 692 */;
	struct drm_dp_sideband_msg_reply_body *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 672 */;
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 66 */(struct drm_dp_mst_topology_mgr *mgr,
								   int id,
								   struct drm_dp_payload *payload);
	void cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 64 */(struct drm_dp_mst_port *port);
	char cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 633 */[64];
	bool cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 61 */(struct drm_dp_mst_topology_mgr *mgr,
								    char *buf);
	const struct drm_dp_remote_i2c_read_tx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 604 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 550 */;
	struct drm_dp_pending_up_req {
		struct drm_dp_sideband_msg_hdr hdr;
		struct drm_dp_sideband_msg_req_body msg;
		struct list_head next;
	} cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 55 */;
	const struct drm_dp_sideband_msg_req_body *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 549 */;
	struct drm_dp_remote_i2c_write *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 531 */;
	struct drm_dp_remote_i2c_read_tx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 497 */;
	struct drm_dp_remote_i2c_read *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 496 */;
	const struct i2c_algorithm cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4958 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4950 */;
	struct i2c_msg *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4884 */;
	const struct i2c_msg cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4866 */[];
	struct drm_dp_payload cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4811 */;
	struct drm_dp_remote_dpcd_write *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 477 */;
	struct drm_dp_mst_topology_state *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4760 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4760 */;
	const struct drm_private_state_funcs cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4739 */;
	struct drm_private_state *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4647 */;
	struct drm_private_obj *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4646 */;
	struct drm_dp_remote_dpcd_read *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 464 */;
	struct drm_dp_mst_port cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4587 */;
	struct drm_dp_mst_branch cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4569 */;
	struct drm_dp_mst_topology_mgr cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4552 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4549 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4469 */[DP_PAYLOAD_TABLE_SIZE];
	char cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4445 */[14];
	struct drm_dp_allocate_payload *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 438 */;
	char cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4378 */[10];
	struct seq_file *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4373 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4265 */[3];
	const u8 *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 426 */;
	struct drm_dp_sideband_msg_req_body *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 424 */;
	const struct drm_dp_sideband_msg_tx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 423 */;
	struct drm_dp_vcpi_allocation *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4050 */;
	struct drm_dp_mst_port *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 4047 */;
	struct drm_dp_vcpi *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3997 */;
	struct edid *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3950 */;
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3876 */;
	bool *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3838 */;
	const struct drm_dp_resource_status_notify *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3808 */;
	const struct drm_dp_connection_status_notify *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3797 */;
	struct drm_dp_pending_up_req *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3766 */;
	struct drm_dp_pending_up_req cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3745 */;
	struct drm_dp_sideband_msg_rx cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3675 */;
	struct drm_dp_sideband_msg_rx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3588 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3585 */[32];
	struct drm_dp_sideband_msg_reply_body cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3339 */;
	struct drm_dp_payload *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 3048 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2961 */[DRM_DP_MAX_SDP_STREAMS];
	struct drm_dp_enum_path_resources_ack_reply *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2867 */;
	struct drm_dp_link_addr_reply_port *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2771 */;
	struct drm_dp_link_address_ack_reply *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2769 */;
	struct drm_dp_sideband_msg_tx cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2717 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2651 */[48];
	int *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 261 */;
	struct drm_dp_sideband_msg_hdr *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 253 */;
	const uint8_t *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2451 */;
	struct drm_dp_connection_status_notify *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2317 */;
	u16 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 226 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2165 */;
	char cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2125 */[255];
	struct drm_connector *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2111 */;
	char cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2068 */[8];
	size_t cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2065 */;
	const struct drm_dp_mst_branch *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2062 */;
	struct drm_dp_aux *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2004 */;
	ssize_t cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 2004 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1920 */[8];
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 170 */[16];
	const u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 167 */[8];
	int __must_check cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1621 */;
	struct kref *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1579 */;
	u32 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1510 */;
	u64 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1509 */;
	uint cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1508 */;
	ulong *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1507 */;
	const struct drm_dp_mst_topology_ref_entry *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1505 */;
	int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1487 */;
	char *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1486 */;
	struct drm_printer cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1485 */;
	const char *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1483 */;
	void *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1483 */;
	struct drm_dp_mst_topology_ref_history *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1482 */;
	void cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1481 */;
	const void *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1460 */;
	ulong cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1420 */[STACK_DEPTH];
	depot_stack_handle_t cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1419 */;
	struct drm_dp_mst_topology_ref_entry *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1418 */;
	enum drm_dp_mst_topology_ref_type cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1416 */;
	struct drm_dp_mst_topology_mgr *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1414 */;
	const char *const cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 126 */[];
	struct drm_dp_mst_branch *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1205 */;
	unsigned int cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1150 */;
	bool cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1082 */;
	struct drm_dp_sideband_msg_req_body cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1067 */;
	u8 *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1065 */;
	uint16_t cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1063 */;
	u8 cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1063 */;
	struct drm_dp_sideband_msg_tx *cocci_id/* drivers/gpu/drm/drm_dp_mst_topology.c 1062 */;
}

cocci_test_suite() {
	unsigned long cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 95 */;
	struct q6adm_session_map_node_v5 {
		u16 session_id;
		u16 num_copps;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 85 */;
	struct q6adm_cmd_matrix_map_routings_v5 {
		u32 matrix_id;
		u32 num_sessions;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 80 */;
	struct q6adm_cmd_device_open_v5 {
		u16 flags;
		u16 mode_of_operation;
		u16 endpoint_id_1;
		u16 endpoint_id_2;
		u32 topology_id;
		u16 dev_num_channel;
		u16 bit_width;
		u32 sample_rate;
		u8 dev_channel_mapping[8];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 68 */;
	struct apr_driver cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 621 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 615 */[];
	struct q6adm {
		struct apr_device *apr;
		struct device *dev;
		struct q6core_svc_api_info ainfo;
		unsigned long copp_bitmap[AFE_MAX_PORTS];
		struct list_head copps_list;
		spinlock_t copps_list_lock;
		struct aprv2_ibasic_rsp_result_t result;
		struct mutex lock;
		wait_queue_head_t matrix_map_wait;
	} cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 56 */;
	uint16_t *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 467 */;
	struct q6adm_session_map_node_v5 *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 465 */;
	struct q6adm_cmd_matrix_map_routings_v5 *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 464 */;
	struct route_payload cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 461 */;
	uint16_t cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 385 */;
	struct q6copp {
		int afe_port;
		int copp_idx;
		int id;
		int topology;
		int mode;
		int rate;
		int bit_width;
		int channels;
		int app_type;
		int acdb_id;
		struct aprv2_ibasic_rsp_result_t result;
		struct kref refcount;
		wait_queue_head_t wait;
		struct list_head node;
		struct q6adm *adm;
	} cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 37 */;
	void *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 328 */;
	struct q6adm_cmd_device_open_v5 *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 325 */;
	struct apr_pkt cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 282 */;
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 240 */;
	uint32_t cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 238 */;
	struct apr_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 238 */;
	struct q6copp *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 212 */;
	struct q6adm *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 212 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 212 */;
	struct adm_cmd_rsp_device_open_v5 {
		u32 status;
		u16 copp_id;
		u16 reserved;
	}__packed *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 179 */;
	struct apr_hdr *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 129 */;
	struct aprv2_ibasic_rsp_result_t *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 127 */;
	struct apr_resp_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 125 */;
	struct apr_device *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 125 */;
	struct q6copp cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 114 */;
	struct kref *cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 112 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6adm.c 112 */;
}

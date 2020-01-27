cocci_test_suite() {
	struct apr_hdr *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 74 */;
	struct aprv2_ibasic_rsp_result_t *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 73 */;
	struct apr_resp_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 70 */;
	struct q6core {
		struct apr_device *adev;
		wait_queue_head_t wait;
		uint32_t avcs_state;
		struct mutex lock;
		bool resp_received;
		uint32_t num_services;
		struct avcs_cmdrsp_get_fwk_version *fwk_version;
		struct avcs_cmdrsp_get_version *svc_version;
		bool fwk_version_supported;
		bool get_state_supported;
		bool get_version_supported;
		bool is_version_requested;
	} cocci_id/* sound/soc/qcom/qdsp6/q6core.c 53 */;
	struct avcs_cmdrsp_get_fwk_version {
		uint32_t build_major_version;
		uint32_t build_minor_version;
		uint32_t build_branch_version;
		uint32_t build_subbranch_version;
		uint32_t num_services;
		struct avcs_svc_api_info svc_api_info[];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6core.c 44 */;
	struct avcs_svc_api_info {
		uint32_t service_id;
		uint32_t api_version;
		uint32_t api_branch_version;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6core.c 38 */;
	struct apr_driver cocci_id/* sound/soc/qcom/qdsp6/q6core.c 363 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6core.c 357 */[];
	struct avcs_cmdrsp_get_version {
		uint32_t build_id;
		uint32_t num_services;
		struct avcs_svc_info svc_api_info[];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6core.c 31 */;
	unsigned long cocci_id/* sound/soc/qcom/qdsp6/q6core.c 303 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6core.c 301 */;
	struct avcs_svc_info *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 277 */;
	struct avcs_svc_api_info *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 264 */;
	struct avcs_svc_info {
		uint32_t service_id;
		uint32_t version;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6core.c 26 */;
	struct q6core_svc_api_info *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 247 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6core.c 210 */;
	struct apr_pkt cocci_id/* sound/soc/qcom/qdsp6/q6core.c 209 */;
	struct apr_device *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 208 */;
	bool cocci_id/* sound/soc/qcom/qdsp6/q6core.c 206 */;
	struct q6core *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 206 */;
	struct avcs_cmdrsp_get_version *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 117 */;
	struct avcs_cmdrsp_get_fwk_version *cocci_id/* sound/soc/qcom/qdsp6/q6core.c 100 */;
}

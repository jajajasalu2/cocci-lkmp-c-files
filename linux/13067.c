cocci_test_suite() {
	struct wcnss_download_nv_req {
		struct wcnss_msg_hdr hdr;
		u16 seq;
		u16 last;
		u32 frag_size;
		u8 fragment[];
	}__packed cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 91 */;
	struct wcnss_version_resp {
		struct wcnss_msg_hdr hdr;
		u8 major;
		u8 minor;
		u8 version;
		u8 revision;
	}__packed cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 75 */;
	struct wcnss_msg_hdr {
		u32 type;
		u32 len;
	}__packed cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 66 */;
	enum{WCNSS_VERSION_REQ=0x01000000, WCNSS_VERSION_RESP, WCNSS_DOWNLOAD_NV_REQ, WCNSS_DOWNLOAD_NV_RESP, WCNSS_UPLOAD_CAL_REQ, WCNSS_UPLOAD_CAL_RESP, WCNSS_DOWNLOAD_CAL_REQ, WCNSS_DOWNLOAD_CAL_RESP, WCNSS_VBAT_LEVEL_IND, WCNSS_BUILD_VERSION_REQ, WCNSS_BUILD_VERSION_RESP, WCNSS_PM_CONFIG_REQ, WCNSS_CBC_COMPLETE_IND,} cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 45 */;
	struct rpmsg_driver cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 344 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 338 */[];
	struct wcnss_ctrl {
		struct device *dev;
		struct rpmsg_endpoint *channel;
		struct completion ack;
		struct completion cbc;
		int ack_status;
		struct work_struct probe_work;
	} cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 33 */;
	struct rpmsg_device *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 308 */;
	int cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 288 */;
	bool cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 287 */;
	struct wcnss_ctrl cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 286 */;
	struct work_struct *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 284 */;
	void cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 284 */;
	struct wcnss_ctrl *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 274 */;
	struct rpmsg_channel_info cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 273 */;
	rpmsg_rx_cb_t cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 271 */;
	const char *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 271 */;
	struct rpmsg_endpoint *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 271 */;
	void *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 271 */;
	ssize_t cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 202 */;
	const void *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 201 */;
	const struct firmware *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 200 */;
	struct wcnss_download_nv_req *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 199 */;
	bool *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 197 */;
	struct wcnss_msg_hdr cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 172 */;
	const struct wcnss_msg_hdr *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 126 */;
	const struct wcnss_version_resp *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 125 */;
	const struct wcnss_download_nv_resp *cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 124 */;
	u32 cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 121 */;
	struct wcnss_download_nv_resp {
		struct wcnss_msg_hdr hdr;
		u8 status;
	}__packed cocci_id/* drivers/soc/qcom/wcnss_ctrl.c 104 */;
}

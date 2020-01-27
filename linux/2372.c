cocci_test_suite() {
	char *cocci_id/* drivers/remoteproc/qcom_sysmon.c 97 */;
	struct rpmsg_driver cocci_id/* drivers/remoteproc/qcom_sysmon.c 643 */;
	const struct rpmsg_device_id cocci_id/* drivers/remoteproc/qcom_sysmon.c 638 */[];
	char cocci_id/* drivers/remoteproc/qcom_sysmon.c 59 */[50];
	void cocci_id/* drivers/remoteproc/qcom_sysmon.c 566 */;
	int cocci_id/* drivers/remoteproc/qcom_sysmon.c 495 */;
	const char *cocci_id/* drivers/remoteproc/qcom_sysmon.c 494 */;
	struct rproc *cocci_id/* drivers/remoteproc/qcom_sysmon.c 493 */;
	struct qcom_sysmon *cocci_id/* drivers/remoteproc/qcom_sysmon.c 493 */;
	irqreturn_t cocci_id/* drivers/remoteproc/qcom_sysmon.c 476 */;
	struct notifier_block *cocci_id/* drivers/remoteproc/qcom_sysmon.c 454 */;
	unsigned long cocci_id/* drivers/remoteproc/qcom_sysmon.c 454 */;
	bool cocci_id/* drivers/remoteproc/qcom_sysmon.c 432 */;
	struct rproc_subdev *cocci_id/* drivers/remoteproc/qcom_sysmon.c 427 */;
	const struct qmi_ops cocci_id/* drivers/remoteproc/qcom_sysmon.c 422 */;
	struct qmi_service *cocci_id/* drivers/remoteproc/qcom_sysmon.c 415 */;
	struct qmi_handle *cocci_id/* drivers/remoteproc/qcom_sysmon.c 415 */;
	struct qcom_sysmon cocci_id/* drivers/remoteproc/qcom_sysmon.c 382 */;
	struct ssctl_subsys_event_req cocci_id/* drivers/remoteproc/qcom_sysmon.c 337 */;
	struct ssctl_subsys_event_resp cocci_id/* drivers/remoteproc/qcom_sysmon.c 336 */;
	struct qmi_txn cocci_id/* drivers/remoteproc/qcom_sysmon.c 290 */;
	struct ssctl_shutdown_resp cocci_id/* drivers/remoteproc/qcom_sysmon.c 289 */;
	struct qmi_msg_handler cocci_id/* drivers/remoteproc/qcom_sysmon.c 272 */[];
	const void *cocci_id/* drivers/remoteproc/qcom_sysmon.c 265 */;
	struct qmi_txn *cocci_id/* drivers/remoteproc/qcom_sysmon.c 265 */;
	struct sockaddr_qrtr *cocci_id/* drivers/remoteproc/qcom_sysmon.c 264 */;
	struct qmi_elem_info cocci_id/* drivers/remoteproc/qcom_sysmon.c 260 */[];
	struct ssctl_subsys_event_resp {
		struct qmi_response_type_v01 resp;
	} cocci_id/* drivers/remoteproc/qcom_sysmon.c 242 */;
	struct qcom_sysmon {
		struct rproc_subdev subdev;
		struct rproc *rproc;
		struct list_head node;
		const char *name;
		int shutdown_irq;
		int ssctl_version;
		int ssctl_instance;
		struct notifier_block nb;
		struct device *dev;
		struct rpmsg_endpoint *ept;
		struct completion comp;
		struct completion ind_comp;
		struct completion shutdown_comp;
		struct mutex lock;
		bool ssr_ack;
		struct qmi_handle qmi;
		struct sockaddr_qrtr ssctl;
	} cocci_id/* drivers/remoteproc/qcom_sysmon.c 21 */;
	char cocci_id/* drivers/remoteproc/qcom_sysmon.c 202 */;
	struct ssctl_subsys_event_req {
		u8 subsys_name_len;
		char subsys_name[SSCTL_SUBSYS_NAME_LENGTH];
		u32 event;
		u8 evt_driven_valid;
		u32 evt_driven;
	} cocci_id/* drivers/remoteproc/qcom_sysmon.c 180 */;
	struct qmi_response_type_v01 cocci_id/* drivers/remoteproc/qcom_sysmon.c 171 */;
	struct ssctl_shutdown_resp {
		struct qmi_response_type_v01 resp;
	} cocci_id/* drivers/remoteproc/qcom_sysmon.c 163 */;
	enum{SSCTL_SSR_EVENT_FORCED, SSCTL_SSR_EVENT_GRACEFUL,} cocci_id/* drivers/remoteproc/qcom_sysmon.c 158 */;
	enum{SSCTL_SSR_EVENT_BEFORE_POWERUP, SSCTL_SSR_EVENT_AFTER_POWERUP, SSCTL_SSR_EVENT_BEFORE_SHUTDOWN, SSCTL_SSR_EVENT_AFTER_SHUTDOWN,} cocci_id/* drivers/remoteproc/qcom_sysmon.c 151 */;
	const int cocci_id/* drivers/remoteproc/qcom_sysmon.c 130 */;
	u32 cocci_id/* drivers/remoteproc/qcom_sysmon.c 126 */;
	struct rpmsg_device *cocci_id/* drivers/remoteproc/qcom_sysmon.c 125 */;
	void *cocci_id/* drivers/remoteproc/qcom_sysmon.c 125 */;
}

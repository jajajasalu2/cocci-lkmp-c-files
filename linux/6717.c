cocci_test_suite() {
	struct ibmvfc_host *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 905 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 904 */;
	struct scsi_target *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 902 */;
	struct ibmvfc_target *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 902 */;
	void cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 841 */;
	const struct {
		u16 status;
		u16 error;
		u8 result;
		u8 retry;
		int log;
		char *name;
	} cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 81 */[];
	struct ibmvfc_event_pool *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 758 */;
	enum ibmvfc_host_state cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 546 */;
	void __exit cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 5005 */;
	int __init cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4979 */;
	struct fc_function_template cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4936 */;
	struct vio_driver cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4927 */;
	const struct dev_pm_ops cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4923 */;
	const struct vio_device_id cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4917 */[];
	struct vio_dev *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4911 */;
	const struct vio_device_id *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4744 */;
	struct ibmvfc_host cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4691 */;
	struct work_struct *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4689 */;
	enum ibmvfc_host_action cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 466 */;
	struct ibmvfc_target cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4654 */;
	struct ibmvfc_trace_entry cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4648 */;
	struct srp_direct_buf cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4622 */;
	struct ibmvfc_async_crq cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4611 */;
	struct ibmvfc_async_crq *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4605 */;
	struct device *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4602 */;
	struct ibmvfc_async_crq_queue *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4601 */;
	struct ibmvfc_crq_queue *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4508 */;
	struct scsi_transport_template *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 45 */;
	unsigned int cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 42 */;
	int cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4198 */;
	enum ibmvfc_target_action cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 418 */;
	struct ibmvfc_npiv_logout_mad cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4161 */;
	struct ibmvfc_npiv_logout_mad *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4151 */;
	struct ibmvfc_npiv_login_mad cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4097 */;
	struct ibmvfc_npiv_login_mad *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4088 */;
	struct ibmvfc_npiv_login_resp *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 4005 */;
	struct ibmvfc_discover_targets *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3976 */;
	u64 cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3881 */;
	struct ibmvfc_query_tgt *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3845 */;
	const struct {
		enum ibmvfc_fc_type fc_type;
		char *name;
	} cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 379 */[];
	struct ibmvfc_tmf *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3688 */;
	struct timer_list *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3683 */;
	struct ibmvfc_passthru_fc_iu cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3645 */;
	u8 *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3573 */;
	struct ibmvfc_passthru_mad *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3570 */;
	struct ibmvfc_implicit_logout *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3534 */;
	struct ibmvfc_prli_svc_parms *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3292 */;
	struct ibmvfc_process_login *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3291 */;
	const struct {
		int code;
		int retry;
		int logged_in;
	} cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3249 */[];
	void (*cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3221 */)(struct ibmvfc_target *);
	const struct {
		u16 fc_explain;
		char *name;
	} cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 320 */[];
	irqreturn_t cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3152 */;
	struct scsi_host_template cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3074 */;
	struct device_attribute *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3063 */[];
	struct bin_attribute cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3053 */;
	struct device cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3033 */;
	loff_t cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3031 */;
	char *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3031 */;
	size_t cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3031 */;
	struct bin_attribute *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3030 */;
	struct kobject *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3029 */;
	struct file *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3029 */;
	ssize_t cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 3029 */;
	struct device_attribute *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2956 */;
	long cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2718 */;
	struct ibmvfc_crq *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2716 */;
	enum ibmvfc_ae_link_state cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2609 */;
	const struct {
		enum ibmvfc_ae_link_state state;
		const char *desc;
	} cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2594 */[];
	const struct ibmvfc_async_desc *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2583 */;
	const struct ibmvfc_async_desc cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2574 */;
	const struct ibmvfc_async_desc cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2558 */[];
	unsigned long *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2460 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2393 */;
	struct ibmvfc_cmd cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2308 */;
	unsigned long cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2283 */;
	struct ibmvfc_fcp_rsp *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2281 */;
	union ibmvfc_iu cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2280 */;
	struct ibmvfc_event *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2279 */;
	struct ibmvfc_cmd *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2278 */;
	struct fc_rport *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2277 */;
	struct scsi_device *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2274 */;
	u16 cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2152 */;
	signed long cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2092 */;
	int (*cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 2086 */)(struct ibmvfc_event *,
								 void *);
	struct ibmvfc_passthru_mad cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1900 */;
	void *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1855 */;
	struct ibmvfc_trace_entry *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 184 */;
	struct ibmvfc_mad_common *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 183 */;
	u32 cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1821 */;
	struct fc_bsg_reply *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1818 */;
	struct fc_bsg_request *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1817 */;
	struct bsg_job *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1809 */;
	struct ibmvfc_port_login *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1751 */;
	void (*cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1605 */)(struct scsi_cmnd *);
	__be64 *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1402 */;
	void cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 134 */(struct ibmvfc_target *);
	struct srp_direct_buf *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1326 */;
	void cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 131 */(struct ibmvfc_host *);
	struct scatterlist *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1301 */;
	void (*cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1282 */)(struct ibmvfc_event *);
	u8 cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1282 */;
	struct ibmvfc_event cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1268 */;
	struct ibmvfc_fcp_rsp cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1168 */;
	struct ibmvfc_fcp_cmd_iu cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1167 */;
	struct ibmvfc_npiv_login *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1159 */;
	const unsigned int *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1135 */;
	const char *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1134 */;
	struct device_node *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1133 */;
	struct kref *cocci_id/* drivers/scsi/ibmvscsi/ibmvfc.c 1039 */;
}
cocci_test_suite() {
	struct {
		enum fc_port_type value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 97 */[];
	unsigned long *cocci_id/* drivers/scsi/scsi_transport_fc.c 837 */;
	enum table_type *cocci_id/* drivers/scsi/scsi_transport_fc.c 81 */;
	void __exit cocci_id/* drivers/scsi/scsi_transport_fc.c 677 */;
	enum table_type cocci_id/* drivers/scsi/scsi_transport_fc.c 65 */;
	char *cocci_id/* drivers/scsi/scsi_transport_fc.c 640 */;
	enum fc_host_event_code cocci_id/* drivers/scsi/scsi_transport_fc.c 601 */;
	u32 *cocci_id/* drivers/scsi/scsi_transport_fc.c 584 */;
	const char *cocci_id/* drivers/scsi/scsi_transport_fc.c 534 */;
	struct fc_nl_event *cocci_id/* drivers/scsi/scsi_transport_fc.c 533 */;
	struct nlmsghdr *cocci_id/* drivers/scsi/scsi_transport_fc.c 532 */;
	struct sk_buff *cocci_id/* drivers/scsi/scsi_transport_fc.c 531 */;
	u64 cocci_id/* drivers/scsi/scsi_transport_fc.c 529 */;
	u32 cocci_id/* drivers/scsi/scsi_transport_fc.c 506 */;
	atomic_t cocci_id/* drivers/scsi/scsi_transport_fc.c 496 */;
	unsigned int cocci_id/* drivers/scsi/scsi_transport_fc.c 46 */;
	struct transport_container *cocci_id/* drivers/scsi/scsi_transport_fc.c 456 */;
	char cocci_id/* drivers/scsi/scsi_transport_fc.c 3785 */[20];
	struct device *cocci_id/* drivers/scsi/scsi_transport_fc.c 3782 */;
	struct fc_host_attrs *cocci_id/* drivers/scsi/scsi_transport_fc.c 3780 */;
	blk_status_t cocci_id/* drivers/scsi/scsi_transport_fc.c 3759 */;
	struct bsg_job *cocci_id/* drivers/scsi/scsi_transport_fc.c 3733 */;
	struct fc_bsg_rport_ct cocci_id/* drivers/scsi/scsi_transport_fc.c 3704 */;
	struct fc_bsg_rport_els cocci_id/* drivers/scsi/scsi_transport_fc.c 3700 */;
	struct request_queue *cocci_id/* drivers/scsi/scsi_transport_fc.c 3672 */;
	void cocci_id/* drivers/scsi/scsi_transport_fc.c 3669 */;
	struct fc_bsg_host_vendor cocci_id/* drivers/scsi/scsi_transport_fc.c 3635 */;
	struct fc_bsg_host_ct cocci_id/* drivers/scsi/scsi_transport_fc.c 3625 */;
	struct fc_bsg_host_els cocci_id/* drivers/scsi/scsi_transport_fc.c 3615 */;
	struct fc_bsg_host_del_rport cocci_id/* drivers/scsi/scsi_transport_fc.c 3611 */;
	struct fc_bsg_host_add_rport cocci_id/* drivers/scsi/scsi_transport_fc.c 3607 */;
	struct fc_bsg_reply *cocci_id/* drivers/scsi/scsi_transport_fc.c 3594 */;
	struct fc_bsg_request *cocci_id/* drivers/scsi/scsi_transport_fc.c 3593 */;
	struct request *cocci_id/* drivers/scsi/scsi_transport_fc.c 3555 */;
	enum blk_eh_timer_return cocci_id/* drivers/scsi/scsi_transport_fc.c 3554 */;
	struct fc_vport cocci_id/* drivers/scsi/scsi_transport_fc.c 3533 */;
	void cocci_id/* drivers/scsi/scsi_transport_fc.c 35 */(struct fc_rport *);
	struct scsi_target *cocci_id/* drivers/scsi/scsi_transport_fc.c 348 */;
	struct fc_vport_identifiers *cocci_id/* drivers/scsi/scsi_transport_fc.c 3459 */;
	void cocci_id/* drivers/scsi/scsi_transport_fc.c 34 */(struct request_queue *);
	struct fc_vport **cocci_id/* drivers/scsi/scsi_transport_fc.c 3335 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/scsi_transport_fc.c 3307 */;
	int cocci_id/* drivers/scsi/scsi_transport_fc.c 33 */(struct Scsi_Host *,
							      struct fc_rport *);
	unsigned long cocci_id/* drivers/scsi/scsi_transport_fc.c 3275 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/scsi_transport_fc.c 3274 */;
	struct fc_rport *cocci_id/* drivers/scsi/scsi_transport_fc.c 3272 */;
	int cocci_id/* drivers/scsi/scsi_transport_fc.c 32 */(struct Scsi_Host *,
							      struct fc_host_attrs *);
	struct fc_internal {
		struct scsi_transport_template t;
		struct fc_function_template *f;
		struct device_attribute private_starget_attrs[FC_STARGET_NUM_ATTRS];
		struct device_attribute *starget_attrs[FC_STARGET_NUM_ATTRS + 1];
		struct device_attribute private_host_attrs[FC_HOST_NUM_ATTRS];
		struct device_attribute *host_attrs[FC_HOST_NUM_ATTRS + 1];
		struct transport_container rport_attr_cont;
		struct device_attribute private_rport_attrs[FC_RPORT_NUM_ATTRS];
		struct device_attribute *rport_attrs[FC_RPORT_NUM_ATTRS + 1];
		struct transport_container vport_attr_cont;
		struct device_attribute private_vport_attrs[FC_VPORT_NUM_ATTRS];
		struct device_attribute *vport_attrs[FC_VPORT_NUM_ATTRS + 1];
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 313 */;
	void cocci_id/* drivers/scsi/scsi_transport_fc.c 302 */(struct work_struct *work);
	int cocci_id/* drivers/scsi/scsi_transport_fc.c 29 */(struct Scsi_Host *shost,
							      int channel,
							      struct device *pdev,
							      struct fc_vport_identifiers *ids,
							      struct fc_vport **vport);
	struct fc_rport_identifiers *cocci_id/* drivers/scsi/scsi_transport_fc.c 2710 */;
	int cocci_id/* drivers/scsi/scsi_transport_fc.c 27 */(struct Scsi_Host *,
							      struct work_struct *);
	struct fc_rport cocci_id/* drivers/scsi/scsi_transport_fc.c 2593 */;
	size_t cocci_id/* drivers/scsi/scsi_transport_fc.c 2591 */;
	struct workqueue_struct *cocci_id/* drivers/scsi/scsi_transport_fc.c 2414 */;
	struct fc_vport *cocci_id/* drivers/scsi/scsi_transport_fc.c 2412 */;
	struct delayed_work *cocci_id/* drivers/scsi/scsi_transport_fc.c 2360 */;
	struct work_struct *cocci_id/* drivers/scsi/scsi_transport_fc.c 2318 */;
	const struct {
		u32 value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 224 */[];
	struct fc_host_attrs cocci_id/* drivers/scsi/scsi_transport_fc.c 2171 */;
	struct fc_starget_attrs cocci_id/* drivers/scsi/scsi_transport_fc.c 2165 */;
	struct fc_internal cocci_id/* drivers/scsi/scsi_transport_fc.c 2156 */;
	struct fc_internal *cocci_id/* drivers/scsi/scsi_transport_fc.c 2156 */;
	int cocci_id/* drivers/scsi/scsi_transport_fc.c 2155 */;
	struct fc_function_template *cocci_id/* drivers/scsi/scsi_transport_fc.c 2153 */;
	struct scsi_transport_template *cocci_id/* drivers/scsi/scsi_transport_fc.c 2152 */;
	uint cocci_id/* drivers/scsi/scsi_transport_fc.c 2119 */;
	struct attribute_container *cocci_id/* drivers/scsi/scsi_transport_fc.c 1942 */;
	const struct {
		enum fc_tgtid_binding_type value;
		char *name;
		int matchlen;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 186 */[];
	struct fc_vport_identifiers cocci_id/* drivers/scsi/scsi_transport_fc.c 1847 */;
	u8 cocci_id/* drivers/scsi/scsi_transport_fc.c 1811 */[8];
	u64 *cocci_id/* drivers/scsi/scsi_transport_fc.c 1808 */;
	struct attribute_group cocci_id/* drivers/scsi/scsi_transport_fc.c 1799 */;
	struct attribute *cocci_id/* drivers/scsi/scsi_transport_fc.c 1765 */[];
	struct device_attribute *cocci_id/* drivers/scsi/scsi_transport_fc.c 1748 */;
	ssize_t cocci_id/* drivers/scsi/scsi_transport_fc.c 1747 */;
	u8 *cocci_id/* drivers/scsi/scsi_transport_fc.c 1700 */;
	unsigned long long cocci_id/* drivers/scsi/scsi_transport_fc.c 1700 */;
	struct fc_host_statistics cocci_id/* drivers/scsi/scsi_transport_fc.c 1692 */;
	struct fc_host_statistics *cocci_id/* drivers/scsi/scsi_transport_fc.c 1689 */;
	const struct device *cocci_id/* drivers/scsi/scsi_transport_fc.c 1685 */;
	struct {
		enum fc_vport_state value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 163 */[];
	enum fc_tgtid_binding_type cocci_id/* drivers/scsi/scsi_transport_fc.c 1602 */;
	typeof(*pos) cocci_id/* drivers/scsi/scsi_transport_fc.c 1594 */;
	struct {
		enum fc_port_state value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 142 */[];
	cast cocci_id/* drivers/scsi/scsi_transport_fc.c 1337 */(shost);
	const struct {
		enum fc_host_event_code value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_fc.c 118 */[];
	cast cocci_id/* drivers/scsi/scsi_transport_fc.c 1018 */(starget);
}

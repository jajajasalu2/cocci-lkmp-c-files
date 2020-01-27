cocci_test_suite() {
	void __exit cocci_id/* drivers/scsi/scsi_transport_srp.c 884 */;
	long cocci_id/* drivers/scsi/scsi_transport_srp.c 84 */;
	struct srp_host_attrs cocci_id/* drivers/scsi/scsi_transport_srp.c 816 */;
	struct srp_function_template *cocci_id/* drivers/scsi/scsi_transport_srp.c 807 */;
	struct scsi_transport_template *cocci_id/* drivers/scsi/scsi_transport_srp.c 806 */;
	struct device *cocci_id/* drivers/scsi/scsi_transport_srp.c 760 */;
	void *cocci_id/* drivers/scsi/scsi_transport_srp.c 760 */;
	struct srp_rport_identifiers *cocci_id/* drivers/scsi/scsi_transport_srp.c 691 */;
	struct attribute_container *cocci_id/* drivers/scsi/scsi_transport_srp.c 645 */;
	const struct device *cocci_id/* drivers/scsi/scsi_transport_srp.c 621 */;
	enum blk_eh_timer_return cocci_id/* drivers/scsi/scsi_transport_srp.c 598 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/scsi_transport_srp.c 598 */;
	struct scsi_device *cocci_id/* drivers/scsi/scsi_transport_srp.c 536 */;
	struct device **cocci_id/* drivers/scsi/scsi_transport_srp.c 53 */;
	int cocci_id/* drivers/scsi/scsi_transport_srp.c 464 */;
	struct srp_rport cocci_id/* drivers/scsi/scsi_transport_srp.c 446 */;
	struct work_struct *cocci_id/* drivers/scsi/scsi_transport_srp.c 443 */;
	struct srp_internal cocci_id/* drivers/scsi/scsi_transport_srp.c 42 */;
	struct srp_internal *cocci_id/* drivers/scsi/scsi_transport_srp.c 401 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/scsi_transport_srp.c 400 */;
	int cocci_id/* drivers/scsi/scsi_transport_srp.c 40 */(const struct device *dev);
	struct srp_rport *cocci_id/* drivers/scsi/scsi_transport_srp.c 398 */;
	void cocci_id/* drivers/scsi/scsi_transport_srp.c 398 */;
	struct srp_internal {
		struct scsi_transport_template t;
		struct srp_function_template *f;
		struct device_attribute *host_attrs[SRP_HOST_ATTRS + 1];
		struct device_attribute *rport_attrs[SRP_RPORT_ATTRS + 1];
		struct transport_container rport_attr_cont;
	} cocci_id/* drivers/scsi/scsi_transport_srp.c 30 */;
	struct device_attribute *cocci_id/* drivers/scsi/scsi_transport_srp.c 253 */;
	char *cocci_id/* drivers/scsi/scsi_transport_srp.c 253 */;
	ssize_t cocci_id/* drivers/scsi/scsi_transport_srp.c 252 */;
	struct srp_host_attrs *cocci_id/* drivers/scsi/scsi_transport_srp.c 25 */;
	const size_t cocci_id/* drivers/scsi/scsi_transport_srp.c 222 */;
	struct srp_host_attrs {
		atomic_t next_port_id;
	} cocci_id/* drivers/scsi/scsi_transport_srp.c 22 */;
	const char *cocci_id/* drivers/scsi/scsi_transport_srp.c 199 */;
	int *cocci_id/* drivers/scsi/scsi_transport_srp.c 199 */;
	unsigned cocci_id/* drivers/scsi/scsi_transport_srp.c 188 */;
	enum srp_rport_state cocci_id/* drivers/scsi/scsi_transport_srp.c 185 */;
	const char *const cocci_id/* drivers/scsi/scsi_transport_srp.c 178 */[];
	size_t cocci_id/* drivers/scsi/scsi_transport_srp.c 158 */;
	const struct {
		u32 value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_srp.c 130 */[];
	struct transport_container *cocci_id/* drivers/scsi/scsi_transport_srp.c 104 */;
}

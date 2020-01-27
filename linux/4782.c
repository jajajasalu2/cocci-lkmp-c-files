cocci_test_suite() {
	struct ib_device *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 994 */;
	int cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 977 */;
	struct ib_port_modify cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 976 */;
	bool cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 974 */;
	struct opa_vnic_ctrl_port *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 974 */;
	void cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 974 */;
	struct ib_mad_reg_req cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 926 */;
	unsigned long cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 863 */;
	struct opa_vnic_adapter *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 862 */;
	struct opa_vnic_vema_port cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 860 */;
	struct opa_vnic_vema_port *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 859 */;
	struct ib_event *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 857 */;
	struct ib_event_handler *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 856 */;
	u16 cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 740 */;
	struct opa_veswport_trap *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 738 */;
	struct ib_ah *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 737 */;
	struct rdma_ah_attr cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 736 */;
	struct opa_class_port_info *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 735 */;
	struct opa_vnic_vema_mad_trap *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 734 */;
	struct ib_mad_send_buf *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 731 */;
	u32 cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 728 */;
	struct __opa_veswport_trap *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 728 */;
	const char cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 64 */[];
	char cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 63 */[];
	struct ib_mad_recv_wc *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 625 */;
	struct ib_mad_agent *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 623 */;
	struct ib_mad_send_wc *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 607 */;
	struct opa_vnic_vema_mad *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 536 */;
	struct opa_veswport_error_counters *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 517 */;
	struct opa_veswport_summary_counters *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 495 */;
	struct opa_veswport_iface_macs *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 460 */;
	struct opa_veswport_mactable *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 358 */;
	u8 cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 201 */;
	struct opa_veswport_info *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 181 */;
	struct ib_client cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 122 */;
	void cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 119 */(struct ib_device *device,
									       void *client_data);
	void cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 118 */(struct ib_device *device);
	struct opa_vnic_vema_port {
		struct opa_vnic_ctrl_port *cport;
		struct ib_mad_agent *mad_agent;
		struct opa_class_port_info class_port_info;
		u64 tid;
		u8 port_num;
		struct xarray vports;
		struct ib_event_handler event_handler;
		struct mutex lock;
	} cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 105 */;
	int __init cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 1040 */;
	void *cocci_id/* drivers/infiniband/ulp/opa_vnic/opa_vnic_vema.c 1027 */;
}
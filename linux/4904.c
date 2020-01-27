cocci_test_suite() {
	struct qedr_iw_ep cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 92 */;
	struct kref *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 90 */;
	struct qedr_qp cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 84 */;
	struct ib_qp *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 799 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 799 */;
	struct qed_iwarp_reject_in cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 774 */;
	const void *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 770 */;
	struct qed_iwarp_accept_in cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 729 */;
	struct qedr_qp *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 728 */;
	struct qedr_iw_ep *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 726 */;
	struct iw_cm_id *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 724 */;
	struct iw_cm_conn_param *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 724 */;
	struct qed_iwarp_listen_out cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 651 */;
	struct qed_iwarp_listen_in cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 650 */;
	struct qedr_iw_listener *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 649 */;
	struct ipv6hdr cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 607 */;
	struct tcphdr cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 591 */;
	struct iphdr cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 591 */;
	struct qed_iwarp_cm_info *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 527 */;
	struct qed_iwarp_connect_in cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 526 */;
	struct qed_iwarp_connect_out cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 525 */;
	u32 cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 509 */;
	struct flowi6 cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 473 */;
	struct dst_entry *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 472 */;
	struct sockaddr_in6 *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 468 */;
	struct iw_cm_event *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 44 */;
	struct rtable *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 438 */;
	struct neighbour *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 437 */;
	__be32 cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 435 */;
	u8 *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 433 */;
	struct sockaddr_in *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 432 */;
	struct qedr_dev *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 431 */;
	int cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 430 */;
	const struct qed_iwarp_cm_info *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 43 */;
	void cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 42 */;
	struct in6_addr cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 405 */;
	struct net_device *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 388 */;
	u16 cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 386 */;
	u32 *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 386 */;
	struct qed_iwarp_send_rtr_in cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 312 */;
	struct qed_iwarp_cm_event_params *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 296 */;
	void *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 295 */;
	struct qedr_discon_work *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 248 */;
	struct iw_cm_event cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 207 */;
	struct qed_rdma_modify_qp_in_params cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 203 */;
	struct qedr_discon_work cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 202 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 199 */;
	struct qedr_discon_work {
		struct work_struct work;
		struct qedr_iw_ep *ep;
		enum qed_iwarp_event_type event;
		int status;
	} cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 192 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 180 */;
	enum ib_event_type cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 175 */;
	char *cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 175 */;
	enum iw_cm_event_type cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 141 */;
	u8 cocci_id/* drivers/infiniband/hw/qedr/qedr_iw_cm.c 131 */;
}
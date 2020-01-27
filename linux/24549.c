cocci_test_suite() {
	struct vmci_transport_recv_pkt_info cocci_id/* net/vmw_vsock/vmci_transport.c 896 */;
	struct vmci_transport_recv_pkt_info *cocci_id/* net/vmw_vsock/vmci_transport.c 891 */;
	const struct vmci_event_payload_qp *cocci_id/* net/vmw_vsock/vmci_transport.c 849 */;
	const struct vmci_event_data *cocci_id/* net/vmw_vsock/vmci_transport.c 845 */;
	s32 cocci_id/* net/vmw_vsock/vmci_transport.c 80 */;
	int cocci_id/* net/vmw_vsock/vmci_transport.c 76 */;
	const u32 cocci_id/* net/vmw_vsock/vmci_transport.c 650 */[];
	struct vmci_transport_recv_pkt_info {
		struct work_struct work;
		struct sock *sk;
		struct vmci_transport_packet pkt;
	} cocci_id/* net/vmw_vsock/vmci_transport.c 62 */;
	bool cocci_id/* net/vmw_vsock/vmci_transport.c 60 */(struct vsock_sock *vsk);
	struct vmci_handle *cocci_id/* net/vmw_vsock/vmci_transport.c 584 */;
	void *cocci_id/* net/vmw_vsock/vmci_transport.c 583 */;
	vmci_datagram_recv_cb cocci_id/* net/vmw_vsock/vmci_transport.c 582 */;
	bool cocci_id/* net/vmw_vsock/vmci_transport.c 58 */(struct sock *sk,
							     u16 *proto,
							     bool old_pkt_proto);
	u16 cocci_id/* net/vmw_vsock/vmci_transport.c 57 */(void);
	bool cocci_id/* net/vmw_vsock/vmci_transport.c 56 */(bool *old_pkt_proto);
	struct vmci_qp **cocci_id/* net/vmw_vsock/vmci_transport.c 545 */;
	int cocci_id/* net/vmw_vsock/vmci_transport.c 54 */(struct sock *sk,
							    struct vmci_transport_packet *pkt);
	u32 cocci_id/* net/vmw_vsock/vmci_transport.c 525 */;
	struct sockaddr_vm cocci_id/* net/vmw_vsock/vmci_transport.c 483 */;
	int cocci_id/* net/vmw_vsock/vmci_transport.c 41 */(struct sock *sk,
							    struct sock *pending,
							    struct vmci_transport_packet *pkt);
	void cocci_id/* net/vmw_vsock/vmci_transport.c 38 */(struct work_struct *work);
	void cocci_id/* net/vmw_vsock/vmci_transport.c 34 */(u32 sub_id,
							     const struct vmci_event_data *ed,
							     void *client_data);
	int cocci_id/* net/vmw_vsock/vmci_transport.c 32 */(void *data,
							    struct vmci_datagram *dg);
	struct vmci_transport_packet cocci_id/* net/vmw_vsock/vmci_transport.c 213 */;
	void __exit cocci_id/* net/vmw_vsock/vmci_transport.c 2119 */;
	int __init cocci_id/* net/vmw_vsock/vmci_transport.c 2070 */;
	struct vsock_sock *cocci_id/* net/vmw_vsock/vmci_transport.c 2053 */;
	struct vsock_transport cocci_id/* net/vmw_vsock/vmci_transport.c 2022 */;
	u16 *cocci_id/* net/vmw_vsock/vmci_transport.c 1980 */;
	struct vmci_transport_send_notify_data *cocci_id/* net/vmw_vsock/vmci_transport.c 1933 */;
	struct vsock_transport_send_notify_data *cocci_id/* net/vmw_vsock/vmci_transport.c 1929 */;
	bool cocci_id/* net/vmw_vsock/vmci_transport.c 192 */;
	ssize_t cocci_id/* net/vmw_vsock/vmci_transport.c 1918 */;
	struct vmci_handle cocci_id/* net/vmw_vsock/vmci_transport.c 191 */;
	u16 cocci_id/* net/vmw_vsock/vmci_transport.c 190 */;
	struct vmci_transport_recv_notify_data *cocci_id/* net/vmw_vsock/vmci_transport.c 1892 */;
	struct vmci_transport_waiting_info *cocci_id/* net/vmw_vsock/vmci_transport.c 189 */;
	struct vsock_transport_recv_notify_data *cocci_id/* net/vmw_vsock/vmci_transport.c 1888 */;
	bool *cocci_id/* net/vmw_vsock/vmci_transport.c 1870 */;
	u64 cocci_id/* net/vmw_vsock/vmci_transport.c 187 */;
	enum vmci_transport_packet_type cocci_id/* net/vmw_vsock/vmci_transport.c 186 */;
	s64 cocci_id/* net/vmw_vsock/vmci_transport.c 1847 */;
	struct sockaddr_vm *cocci_id/* net/vmw_vsock/vmci_transport.c 184 */;
	struct vmci_transport_packet *cocci_id/* net/vmw_vsock/vmci_transport.c 183 */;
	struct sock *cocci_id/* net/vmw_vsock/vmci_transport.c 1802 */;
	struct sk_buff *cocci_id/* net/vmw_vsock/vmci_transport.c 1738 */;
	struct vmci_datagram *cocci_id/* net/vmw_vsock/vmci_transport.c 1736 */;
	struct msghdr *cocci_id/* net/vmw_vsock/vmci_transport.c 1731 */;
	size_t cocci_id/* net/vmw_vsock/vmci_transport.c 1731 */;
	struct work_struct *cocci_id/* net/vmw_vsock/vmci_transport.c 1619 */;
	void cocci_id/* net/vmw_vsock/vmci_transport.c 1619 */;
	struct vmci_transport cocci_id/* net/vmw_vsock/vmci_transport.c 1599 */;
	struct vmci_transport *cocci_id/* net/vmw_vsock/vmci_transport.c 1598 */;
	struct list_head *cocci_id/* net/vmw_vsock/vmci_transport.c 1595 */;
	struct vmci_qp *cocci_id/* net/vmw_vsock/vmci_transport.c 1382 */;
	u8 cocci_id/* net/vmw_vsock/vmci_transport.c 113 */;
}

cocci_test_suite() {
	void __exit cocci_id/* net/vmw_vsock/hyperv_transport.c 978 */;
	int __init cocci_id/* net/vmw_vsock/hyperv_transport.c 958 */;
	struct hv_driver cocci_id/* net/vmw_vsock/hyperv_transport.c 948 */;
	const struct hv_vmbus_device_id cocci_id/* net/vmw_vsock/hyperv_transport.c 944 */[];
	struct hvsock {
		struct vsock_sock *vsk;
		guid_t vm_srv_id;
		guid_t host_srv_id;
		struct vmbus_channel *chan;
		struct vmpacket_descriptor *recv_desc;
		u32 recv_data_len;
		u32 recv_data_off;
		bool fin_sent;
	} cocci_id/* net/vmw_vsock/hyperv_transport.c 91 */;
	const struct hv_vmbus_device_id *cocci_id/* net/vmw_vsock/hyperv_transport.c 902 */;
	struct hv_device *cocci_id/* net/vmw_vsock/hyperv_transport.c 901 */;
	struct vsock_transport cocci_id/* net/vmw_vsock/hyperv_transport.c 859 */;
	struct vsock_transport_send_notify_data *cocci_id/* net/vmw_vsock/hyperv_transport.c 833 */;
	ssize_t cocci_id/* net/vmw_vsock/hyperv_transport.c 825 */;
	union hvs_service_id {
		guid_t srv_id;
		struct {
			unsigned int svm_port;
			unsigned char b[sizeof(guid_t) - sizeof(unsigned int)];
		};
	} cocci_id/* net/vmw_vsock/hyperv_transport.c 81 */;
	struct vsock_transport_recv_notify_data *cocci_id/* net/vmw_vsock/hyperv_transport.c 804 */;
	bool *cocci_id/* net/vmw_vsock/hyperv_transport.c 786 */;
	u64 cocci_id/* net/vmw_vsock/hyperv_transport.c 755 */;
	s64 cocci_id/* net/vmw_vsock/hyperv_transport.c 724 */;
	struct vmpacket_descriptor cocci_id/* net/vmw_vsock/hyperv_transport.c 69 */;
	struct hvs_recv_buf *cocci_id/* net/vmw_vsock/hyperv_transport.c 641 */;
	struct hvs_send_buf {
		struct vmpipe_proto_header hdr;
		u8 data[HVS_SEND_BUF_SIZE];
	} cocci_id/* net/vmw_vsock/hyperv_transport.c 61 */;
	struct msghdr *cocci_id/* net/vmw_vsock/hyperv_transport.c 598 */;
	struct vsock_sock cocci_id/* net/vmw_vsock/hyperv_transport.c 534 */;
	struct work_struct *cocci_id/* net/vmw_vsock/hyperv_transport.c 531 */;
	struct vmpipe_proto_header cocci_id/* net/vmw_vsock/hyperv_transport.c 508 */;
	union hvs_service_id cocci_id/* net/vmw_vsock/hyperv_transport.c 492 */;
	struct hvs_recv_buf {
		struct vmpipe_proto_header hdr;
		u8 data[HVS_MTU_SIZE];
	} cocci_id/* net/vmw_vsock/hyperv_transport.c 41 */;
	struct sockaddr_vm cocci_id/* net/vmw_vsock/hyperv_transport.c 332 */;
	unsigned char cocci_id/* net/vmw_vsock/hyperv_transport.c 330 */;
	struct vmpipe_proto_header {
		u32 pkt_type;
		u32 data_size;
	} cocci_id/* net/vmw_vsock/hyperv_transport.c 33 */;
	guid_t *cocci_id/* net/vmw_vsock/hyperv_transport.c 329 */;
	struct vmbus_channel *cocci_id/* net/vmw_vsock/hyperv_transport.c 284 */;
	struct hvsock *cocci_id/* net/vmw_vsock/hyperv_transport.c 283 */;
	struct vsock_sock *cocci_id/* net/vmw_vsock/hyperv_transport.c 282 */;
	struct sock *cocci_id/* net/vmw_vsock/hyperv_transport.c 281 */;
	void *cocci_id/* net/vmw_vsock/hyperv_transport.c 279 */;
	struct hvs_send_buf *cocci_id/* net/vmw_vsock/hyperv_transport.c 270 */;
	size_t cocci_id/* net/vmw_vsock/hyperv_transport.c 252 */;
	int cocci_id/* net/vmw_vsock/hyperv_transport.c 231 */;
	u32 cocci_id/* net/vmw_vsock/hyperv_transport.c 225 */;
	bool cocci_id/* net/vmw_vsock/hyperv_transport.c 223 */;
	struct sockaddr_vm *cocci_id/* net/vmw_vsock/hyperv_transport.c 180 */;
	void cocci_id/* net/vmw_vsock/hyperv_transport.c 180 */;
	unsigned int *cocci_id/* net/vmw_vsock/hyperv_transport.c 177 */;
	const guid_t *cocci_id/* net/vmw_vsock/hyperv_transport.c 175 */;
	unsigned int cocci_id/* net/vmw_vsock/hyperv_transport.c 175 */;
	guid_t cocci_id/* net/vmw_vsock/hyperv_transport.c 172 */;
	bool cocci_id/* net/vmw_vsock/hyperv_transport.c 168 */(struct vsock_sock *vsk);
	const guid_t cocci_id/* net/vmw_vsock/hyperv_transport.c 164 */;
}

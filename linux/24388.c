cocci_test_suite() {
	struct hidp_conninfo cocci_id/* net/bluetooth/hidp/sock.c 54 */;
	struct hidp_connlist_req cocci_id/* net/bluetooth/hidp/sock.c 53 */;
	struct hidp_conndel_req cocci_id/* net/bluetooth/hidp/sock.c 52 */;
	struct hidp_connadd_req cocci_id/* net/bluetooth/hidp/sock.c 51 */;
	struct socket *cocci_id/* net/bluetooth/hidp/sock.c 49 */;
	void __user *cocci_id/* net/bluetooth/hidp/sock.c 49 */;
	unsigned int cocci_id/* net/bluetooth/hidp/sock.c 49 */;
	int cocci_id/* net/bluetooth/hidp/sock.c 49 */;
	void __exit cocci_id/* net/bluetooth/hidp/sock.c 316 */;
	void cocci_id/* net/bluetooth/hidp/sock.c 316 */;
	int __init cocci_id/* net/bluetooth/hidp/sock.c 286 */;
	const struct net_proto_family cocci_id/* net/bluetooth/hidp/sock.c 280 */;
	struct bt_sock_list cocci_id/* net/bluetooth/hidp/sock.c 28 */;
	struct sock *cocci_id/* net/bluetooth/hidp/sock.c 253 */;
	struct net *cocci_id/* net/bluetooth/hidp/sock.c 250 */;
	struct bt_sock cocci_id/* net/bluetooth/hidp/sock.c 247 */;
	struct proto cocci_id/* net/bluetooth/hidp/sock.c 244 */;
	const struct proto_ops cocci_id/* net/bluetooth/hidp/sock.c 222 */;
	struct compat_hidp_connadd_req cocci_id/* net/bluetooth/hidp/sock.c 172 */;
	u32 cocci_id/* net/bluetooth/hidp/sock.c 155 */;
	u32 __user *cocci_id/* net/bluetooth/hidp/sock.c 154 */;
	unsigned long cocci_id/* net/bluetooth/hidp/sock.c 147 */;
	struct compat_hidp_connadd_req {
		int ctrl_sock;
		int intr_sock;
		__u16 parser;
		__u16 rd_size;
		compat_uptr_t rd_data;
		__u8 country;
		__u8 subclass;
		__u16 vendor;
		__u16 product;
		__u16 version;
		__u32 flags;
		__u32 idle_to;
		char name[128];
	} cocci_id/* net/bluetooth/hidp/sock.c 131 */;
}

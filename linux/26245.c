cocci_test_suite() {
	struct meta {
		int ifindex;
		__u32 cb32_0;
		__u8 cb8_0;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 51 */;
	struct sk_buff {
		unsigned int len,data_len;
		__u16 mac_len,hdr_len,queue_mapping;
		struct net_device *dev;
		refcount_t users;
		unsigned char *data;
		char __pkt_type_offset[0];
		char cb[48];
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 39 */;
	struct refcount_struct {
		atomic_t refs;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 35 */;
	struct {
		int counter;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 32 */;
	struct net_device {
		int ifindex;
		struct dev_ifalias *ifalias;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 27 */;
	struct dev_ifalias {
		struct callback_head rcuhead;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 23 */;
	struct callback_head {
		struct callback_head *next;
		void (*func)(struct callback_head *head);
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 19 */;
	perf_buf_map cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 14 */(".maps");
	volatile struct {
		bool fentry_test_ok;
		bool fexit_test_ok;
	} cocci_id/* tools/testing/selftests/bpf/progs/kfree_skb.c 112 */;
}

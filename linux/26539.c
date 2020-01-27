cocci_test_suite() {
	struct ip_devname_ifindex cocci_id/* tools/bpf/bpftool/net.c 98 */;
	struct ifinfomsg *cocci_id/* tools/bpf/bpftool/net.c 90 */;
	struct bpf_netdev_t *cocci_id/* tools/bpf/bpftool/net.c 89 */;
	const char *cocci_id/* tools/bpf/bpftool/net.c 74 */;
	const size_t cocci_id/* tools/bpf/bpftool/net.c 72 */;
	const char *const cocci_id/* tools/bpf/bpftool/net.c 65 */[];
	enum net_attach_type{NET_ATTACH_TYPE_XDP, NET_ATTACH_TYPE_XDP_GENERIC, NET_ATTACH_TYPE_XDP_DRIVER, NET_ATTACH_TYPE_XDP_OFFLOAD,} cocci_id/* tools/bpf/bpftool/net.c 58 */;
	struct bpf_attach_info {
		__u32 flow_dissector_id;
	} cocci_id/* tools/bpf/bpftool/net.c 54 */;
	struct bpf_filter_t {
		const char *kind;
		const char *devname;
		int ifindex;
	} cocci_id/* tools/bpf/bpftool/net.c 48 */;
	const struct cmd cocci_id/* tools/bpf/bpftool/net.c 479 */[];
	struct bpf_tcinfo_t {
		struct tc_kind_handle *handle_array;
		int used_len;
		int array_len;
		bool is_qdisc;
	} cocci_id/* tools/bpf/bpftool/net.c 41 */;
	char cocci_id/* tools/bpf/bpftool/net.c 389 */[256];
	unsigned int cocci_id/* tools/bpf/bpftool/net.c 388 */;
	struct bpf_netdev_t cocci_id/* tools/bpf/bpftool/net.c 387 */;
	struct bpf_attach_info cocci_id/* tools/bpf/bpftool/net.c 385 */;
	struct tc_kind_handle {
		char kind[64];
		int handle;
	} cocci_id/* tools/bpf/bpftool/net.c 36 */;
	bool cocci_id/* tools/bpf/bpftool/net.c 296 */;
	enum net_attach_type cocci_id/* tools/bpf/bpftool/net.c 294 */;
	char **cocci_id/* tools/bpf/bpftool/net.c 292 */;
	int cocci_id/* tools/bpf/bpftool/net.c 292 */;
	struct bpf_netdev_t {
		struct ip_devname_ifindex *devices;
		int used_len;
		int array_len;
		int filter_idx;
	} cocci_id/* tools/bpf/bpftool/net.c 29 */;
	__u32 cocci_id/* tools/bpf/bpftool/net.c 278 */;
	char ***cocci_id/* tools/bpf/bpftool/net.c 255 */;
	int *cocci_id/* tools/bpf/bpftool/net.c 255 */;
	struct ip_devname_ifindex {
		char devname[64];
		int ifindex;
	} cocci_id/* tools/bpf/bpftool/net.c 24 */;
	__u32 cocci_id/* tools/bpf/bpftool/net.c 222 */[1];
	struct bpf_attach_info *cocci_id/* tools/bpf/bpftool/net.c 219 */;
	struct bpf_tcinfo_t cocci_id/* tools/bpf/bpftool/net.c 162 */;
	struct bpf_filter_t cocci_id/* tools/bpf/bpftool/net.c 161 */;
	struct ip_devname_ifindex *cocci_id/* tools/bpf/bpftool/net.c 159 */;
	const struct bpf_filter_t *cocci_id/* tools/bpf/bpftool/net.c 152 */;
	struct tc_kind_handle cocci_id/* tools/bpf/bpftool/net.c 132 */;
	struct tcmsg *cocci_id/* tools/bpf/bpftool/net.c 119 */;
	struct bpf_tcinfo_t *cocci_id/* tools/bpf/bpftool/net.c 118 */;
	struct nlattr **cocci_id/* tools/bpf/bpftool/net.c 116 */;
	void *cocci_id/* tools/bpf/bpftool/net.c 116 */;
}

cocci_test_suite() {
	exception_cnt cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 98 */(".maps");
	cpus_iterator cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 90 */(".maps");
	cpus_count cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 84 */(".maps");
	cpus_available cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 78 */(".maps");
	struct cpumap_kthread_ctx *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 705 */;
	struct cpumap_kthread_ctx {
		u64 __pad;
		int map_id;
		u32 act;
		int cpu;
		unsigned int drops;
		unsigned int processed;
		int sched;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 694 */;
	cpumap_kthread_cnt cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 68 */(".maps");
	struct datarec *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 668 */;
	struct cpumap_enqueue_ctx *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 665 */;
	struct cpumap_enqueue_ctx {
		u64 __pad;
		int map_id;
		u32 act;
		int cpu;
		unsigned int drops;
		unsigned int processed;
		int to_cpu;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 654 */;
	struct xdp_exception_ctx *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 638 */;
	struct xdp_exception_ctx {
		u64 __pad;
		int prog_id;
		u32 act;
		int ifindex;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 630 */;
	struct xdp_redirect_ctx *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 616 */;
	cpumap_enqueue_cnt cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 60 */(".maps");
	enum{XDP_REDIRECT_SUCCESS=0, XDP_REDIRECT_ERROR=1,} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 586 */;
	struct xdp_redirect_ctx {
		u64 __pad;
		int prog_id;
		u32 act;
		int ifindex;
		int err;
		int to_ifindex;
		u32 map_id;
		int map_index;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 575 */;
	redirect_err_cnt cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 52 */(".maps");
	struct ipv6hdr *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 490 */;
	char *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 480 */;
	u32 cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 469 */;
	rx_cnt cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 43 */(".maps");
	u8 cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 327 */;
	struct datarec {
		__u64 processed;
		__u64 dropped;
		__u64 issue;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 29 */;
	cpu_map cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 26 */(".maps");
	u32 *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 206 */;
	int cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 177 */;
	struct udphdr *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 160 */;
	struct iphdr *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 159 */;
	void *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 157 */;
	long cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 157 */;
	u64 cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 155 */;
	u16 cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 155 */;
	struct xdp_md *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 155 */;
	struct vlan_hdr *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 130 */;
	u64 *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 113 */;
	u16 *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 113 */;
	bool cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 112 */;
	struct ethhdr *cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 112 */;
	struct vlan_hdr {
		__be16 h_vlan_TCI;
		__be16 h_vlan_encapsulated_proto;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_kern.c 106 */;
}

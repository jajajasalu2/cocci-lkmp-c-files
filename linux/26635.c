cocci_test_suite() {
	struct xdp_exception_ctx {
		u64 __pad;
		int prog_id;
		u32 act;
		int ifindex;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 98 */;
	struct xdp_redirect_ctx *cocci_id/* samples/bpf/xdp_monitor_kern.c 83 */;
	enum{XDP_REDIRECT_SUCCESS=0, XDP_REDIRECT_ERROR=1,} cocci_id/* samples/bpf/xdp_monitor_kern.c 39 */;
	struct xdp_redirect_ctx {
		u64 __pad;
		int prog_id;
		u32 act;
		int ifindex;
		int err;
		int to_ifindex;
		u32 map_id;
		int map_index;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 28 */;
	struct devmap_xmit_ctx *cocci_id/* samples/bpf/xdp_monitor_kern.c 236 */;
	struct devmap_xmit_ctx {
		u64 __pad;
		int map_id;
		u32 act;
		u32 map_index;
		int drops;
		int sent;
		int from_ifindex;
		int to_ifindex;
		int err;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 223 */;
	struct cpumap_kthread_ctx *cocci_id/* samples/bpf/xdp_monitor_kern.c 195 */;
	struct cpumap_kthread_ctx {
		u64 __pad;
		int map_id;
		u32 act;
		int cpu;
		unsigned int drops;
		unsigned int processed;
		int sched;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 184 */;
	struct datarec *cocci_id/* samples/bpf/xdp_monitor_kern.c 163 */;
	u32 cocci_id/* samples/bpf/xdp_monitor_kern.c 162 */;
	struct cpumap_enqueue_ctx *cocci_id/* samples/bpf/xdp_monitor_kern.c 160 */;
	int cocci_id/* samples/bpf/xdp_monitor_kern.c 160 */;
	struct cpumap_enqueue_ctx {
		u64 __pad;
		int map_id;
		u32 act;
		int cpu;
		unsigned int drops;
		unsigned int processed;
		int to_cpu;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 149 */;
	struct datarec {
		u64 processed;
		u64 dropped;
		u64 info;
		u64 err;
	} cocci_id/* samples/bpf/xdp_monitor_kern.c 124 */;
	u64 *cocci_id/* samples/bpf/xdp_monitor_kern.c 108 */;
	struct xdp_exception_ctx *cocci_id/* samples/bpf/xdp_monitor_kern.c 106 */;
}

cocci_test_suite() {
	const struct xsk_socket *cocci_id/* tools/lib/bpf/xsk.c 96 */;
	const struct xsk_umem *cocci_id/* tools/lib/bpf/xsk.c 91 */;
	struct xdp_mmap_offsets_v1 {
		struct xdp_ring_offset_v1 rx;
		struct xdp_ring_offset_v1 tx;
		struct xdp_ring_offset_v1 fr;
		struct xdp_ring_offset_v1 cr;
	} cocci_id/* tools/lib/bpf/xsk.c 84 */;
	struct xdp_ring_offset_v1 {
		__u64 producer;
		__u64 consumer;
		__u64 desc;
	} cocci_id/* tools/lib/bpf/xsk.c 77 */;
	struct sockaddr *cocci_id/* tools/lib/bpf/xsk.c 705 */;
	struct xsk_nl_info {
		bool xdp_prog_attached;
		int ifindex;
		int fd;
	} cocci_id/* tools/lib/bpf/xsk.c 70 */;
	struct xdp_desc cocci_id/* tools/lib/bpf/xsk.c 658 */;
	struct xdp_mmap_offsets cocci_id/* tools/lib/bpf/xsk.c 588 */;
	struct sockaddr_xdp cocci_id/* tools/lib/bpf/xsk.c 587 */;
	struct xsk_ring_prod *cocci_id/* tools/lib/bpf/xsk.c 583 */;
	struct xsk_ring_cons *cocci_id/* tools/lib/bpf/xsk.c 583 */;
	struct xsk_umem *cocci_id/* tools/lib/bpf/xsk.c 582 */;
	const char *cocci_id/* tools/lib/bpf/xsk.c 581 */;
	struct xsk_socket **cocci_id/* tools/lib/bpf/xsk.c 581 */;
	struct xsk_socket {
		struct xsk_ring_cons *rx;
		struct xsk_ring_prod *tx;
		__u64 outstanding_tx;
		struct xsk_umem *umem;
		struct xsk_socket_config config;
		int fd;
		int ifindex;
		int prog_fd;
		int xsks_map_fd;
		__u32 queue_id;
		char ifname[IFNAMSIZ];
	} cocci_id/* tools/lib/bpf/xsk.c 56 */;
	__u64 cocci_id/* tools/lib/bpf/xsk.c 497 */;
	unsigned long cocci_id/* tools/lib/bpf/xsk.c 497 */;
	struct bpf_map_info cocci_id/* tools/lib/bpf/xsk.c 480 */;
	__u32 cocci_id/* tools/lib/bpf/xsk.c 479 */;
	struct bpf_prog_info cocci_id/* tools/lib/bpf/xsk.c 479 */;
	void cocci_id/* tools/lib/bpf/xsk.c 471 */;
	struct xsk_umem {
		struct xsk_ring_prod *fill;
		struct xsk_ring_cons *comp;
		char *umem_area;
		struct xsk_umem_config config;
		int fd;
		int refcount;
	} cocci_id/* tools/lib/bpf/xsk.c 47 */;
	struct xsk_socket *cocci_id/* tools/lib/bpf/xsk.c 452 */;
	int cocci_id/* tools/lib/bpf/xsk.c 452 */;
	void *cocci_id/* tools/lib/bpf/xsk.c 425 */;
	struct ifreq cocci_id/* tools/lib/bpf/xsk.c 418 */;
	struct ethtool_channels cocci_id/* tools/lib/bpf/xsk.c 417 */;
	struct bpf_insn cocci_id/* tools/lib/bpf/xsk.c 395 */;
	size_t cocci_id/* tools/lib/bpf/xsk.c 395 */;
	struct bpf_insn cocci_id/* tools/lib/bpf/xsk.c 357 */[];
	char cocci_id/* tools/lib/bpf/xsk.c 336 */[log_buf_size];
	const int cocci_id/* tools/lib/bpf/xsk.c 335 */;
	struct xsk_umem_config_v1 cocci_id/* tools/lib/bpf/xsk.c 324 */;
	struct xsk_umem_config cocci_id/* tools/lib/bpf/xsk.c 322 */;
	struct xsk_umem **cocci_id/* tools/lib/bpf/xsk.c 317 */;
	struct xsk_umem_config_v1 {
		__u32 fill_size;
		__u32 comp_size;
		__u32 frame_size;
		__u32 frame_headroom;
	} cocci_id/* tools/lib/bpf/xsk.c 310 */;
	uintptr_t cocci_id/* tools/lib/bpf/xsk.c 233 */;
	struct xdp_umem_reg cocci_id/* tools/lib/bpf/xsk.c 209 */;
	struct xdp_mmap_offsets_v1 cocci_id/* tools/lib/bpf/xsk.c 195 */;
	socklen_t cocci_id/* tools/lib/bpf/xsk.c 184 */;
	struct xdp_mmap_offsets *cocci_id/* tools/lib/bpf/xsk.c 182 */;
	const struct xsk_socket_config *cocci_id/* tools/lib/bpf/xsk.c 128 */;
	struct xsk_socket_config *cocci_id/* tools/lib/bpf/xsk.c 127 */;
	const struct xsk_umem_config *cocci_id/* tools/lib/bpf/xsk.c 109 */;
	struct xsk_umem_config *cocci_id/* tools/lib/bpf/xsk.c 108 */;
	bool cocci_id/* tools/lib/bpf/xsk.c 101 */;
}

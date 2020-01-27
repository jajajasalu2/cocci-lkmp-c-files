cocci_test_suite() {
	const struct bpf_prog_offload_ops *cocci_id/* kernel/bpf/offload.c 673 */;
	struct bpf_offload_dev *cocci_id/* kernel/bpf/offload.c 672 */;
	struct bpf_offload_netdev cocci_id/* kernel/bpf/offload.c 647 */;
	int cocci_id/* kernel/bpf/offload.c 61 */;
	struct rhashtable cocci_id/* kernel/bpf/offload.c 58 */;
	struct bpf_prog_offload *cocci_id/* kernel/bpf/offload.c 550 */;
	struct bpf_offload_netdev *cocci_id/* kernel/bpf/offload.c 549 */;
	struct net_device *cocci_id/* kernel/bpf/offload.c 547 */;
	bool cocci_id/* kernel/bpf/offload.c 546 */;
	struct bpf_prog *cocci_id/* kernel/bpf/offload.c 546 */;
	struct path cocci_id/* kernel/bpf/offload.c 528 */;
	struct inode *cocci_id/* kernel/bpf/offload.c 527 */;
	struct ns_get_path_bpf_map_args cocci_id/* kernel/bpf/offload.c 523 */;
	struct bpf_map_info *cocci_id/* kernel/bpf/offload.c 521 */;
	struct net *cocci_id/* kernel/bpf/offload.c 500 */;
	const struct rhashtable_params cocci_id/* kernel/bpf/offload.c 50 */;
	struct ns_get_path_bpf_map_args *cocci_id/* kernel/bpf/offload.c 498 */;
	struct ns_common *cocci_id/* kernel/bpf/offload.c 496 */;
	struct ns_get_path_bpf_map_args {
		struct bpf_offloaded_map *offmap;
		struct bpf_map_info *info;
	} cocci_id/* kernel/bpf/offload.c 491 */;
	struct bpf_map *cocci_id/* kernel/bpf/offload.c 465 */;
	void *cocci_id/* kernel/bpf/offload.c 465 */;
	u64 cocci_id/* kernel/bpf/offload.c 448 */;
	struct bpf_offloaded_map *cocci_id/* kernel/bpf/offload.c 411 */;
	void cocci_id/* kernel/bpf/offload.c 411 */;
	struct bpf_offload_netdev {
		struct rhash_head l;
		struct net_device *netdev;
		struct bpf_offload_dev *offdev;
		struct list_head progs;
		struct list_head maps;
		struct list_head offdev_netdevs;
	} cocci_id/* kernel/bpf/offload.c 41 */;
	union bpf_attr *cocci_id/* kernel/bpf/offload.c 362 */;
	struct bpf_offload_dev {
		const struct bpf_prog_offload_ops *ops;
		struct list_head netdevs;
		void *priv;
	} cocci_id/* kernel/bpf/offload.c 35 */;
	struct netdev_bpf cocci_id/* kernel/bpf/offload.c 349 */;
	enum bpf_netdev_command cocci_id/* kernel/bpf/offload.c 347 */;
	const struct bpf_prog_ops cocci_id/* kernel/bpf/offload.c 343 */;
	u32 cocci_id/* kernel/bpf/offload.c 306 */;
	char __user *cocci_id/* kernel/bpf/offload.c 304 */;
	struct bpf_prog_aux *cocci_id/* kernel/bpf/offload.c 301 */;
	struct ns_get_path_bpf_prog_args cocci_id/* kernel/bpf/offload.c 297 */;
	struct bpf_prog_info *cocci_id/* kernel/bpf/offload.c 294 */;
	struct ns_get_path_bpf_prog_args *cocci_id/* kernel/bpf/offload.c 270 */;
	struct ns_get_path_bpf_prog_args {
		struct bpf_prog *prog;
		struct bpf_prog_info *info;
	} cocci_id/* kernel/bpf/offload.c 263 */;
	const struct bpf_insn *cocci_id/* kernel/bpf/offload.c 250 */;
	const void *cocci_id/* kernel/bpf/offload.c 249 */;
	unsigned int cocci_id/* kernel/bpf/offload.c 249 */;
	struct bpf_insn *cocci_id/* kernel/bpf/offload.c 179 */;
	struct bpf_verifier_env *cocci_id/* kernel/bpf/offload.c 159 */;
}

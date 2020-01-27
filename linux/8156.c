cocci_test_suite() {
	bool cocci_id/* drivers/net/netdevsim/bpf.c 99 */;
	struct bpf_verifier_env *cocci_id/* drivers/net/netdevsim/bpf.c 77 */;
	struct dentry *cocci_id/* drivers/net/netdevsim/bpf.c 615 */;
	struct netdevsim *cocci_id/* drivers/net/netdevsim/bpf.c 546 */;
	struct netdev_bpf *cocci_id/* drivers/net/netdevsim/bpf.c 544 */;
	struct net_device *cocci_id/* drivers/net/netdevsim/bpf.c 544 */;
	int cocci_id/* drivers/net/netdevsim/bpf.c 544 */;
	unsigned int cocci_id/* drivers/net/netdevsim/bpf.c 533 */;
	const char **cocci_id/* drivers/net/netdevsim/bpf.c 53 */;
	struct seq_file *cocci_id/* drivers/net/netdevsim/bpf.c 51 */;
	u32 *cocci_id/* drivers/net/netdevsim/bpf.c 506 */;
	struct nsim_bpf_bound_map *cocci_id/* drivers/net/netdevsim/bpf.c 484 */;
	struct bpf_offloaded_map *cocci_id/* drivers/net/netdevsim/bpf.c 482 */;
	const struct bpf_map_dev_ops cocci_id/* drivers/net/netdevsim/bpf.c 474 */;
	u64 cocci_id/* drivers/net/netdevsim/bpf.c 413 */;
	struct nsim_bpf_bound_map {
		struct netdevsim *ns;
		struct bpf_offloaded_map *map;
		struct mutex mutex;
		struct nsim_map_entry {
			void *key;
			void *value;
		} entry[NSIM_BPF_MAX_KEYS];
		struct list_head l;
	} cocci_id/* drivers/net/netdevsim/bpf.c 40 */;
	struct nsim_map_entry *cocci_id/* drivers/net/netdevsim/bpf.c 328 */;
	struct bpf_map *cocci_id/* drivers/net/netdevsim/bpf.c 328 */;
	struct nsim_bpf_bound_prog {
		struct nsim_dev *nsim_dev;
		struct bpf_prog *prog;
		struct dentry *ddir;
		const char *state;
		bool is_loaded;
		struct list_head l;
	} cocci_id/* drivers/net/netdevsim/bpf.c 29 */;
	const struct bpf_prog_offload_ops cocci_id/* drivers/net/netdevsim/bpf.c 281 */;
	void cocci_id/* drivers/net/netdevsim/bpf.c 269 */;
	char cocci_id/* drivers/net/netdevsim/bpf.c 220 */[16];
	struct nsim_bpf_bound_prog *cocci_id/* drivers/net/netdevsim/bpf.c 219 */;
	struct bpf_prog *cocci_id/* drivers/net/netdevsim/bpf.c 217 */;
	struct nsim_dev *cocci_id/* drivers/net/netdevsim/bpf.c 216 */;
	struct xdp_attachment_info *cocci_id/* drivers/net/netdevsim/bpf.c 189 */;
	struct tc_cls_bpf_offload *cocci_id/* drivers/net/netdevsim/bpf.c 116 */;
	void *cocci_id/* drivers/net/netdevsim/bpf.c 114 */;
	enum tc_setup_type cocci_id/* drivers/net/netdevsim/bpf.c 113 */;
}

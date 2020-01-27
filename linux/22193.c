cocci_test_suite() {
	struct swap_cgroup_ctrl {
		struct page **map;
		unsigned long length;
		spinlock_t lock;
	} cocci_id/* mm/swap_cgroup.c 9 */;
	struct swap_cgroup_ctrl **cocci_id/* mm/swap_cgroup.c 77 */;
	swp_entry_t cocci_id/* mm/swap_cgroup.c 76 */;
	struct page *cocci_id/* mm/swap_cgroup.c 68 */;
	pgoff_t cocci_id/* mm/swap_cgroup.c 66 */;
	struct swap_cgroup_ctrl *cocci_id/* mm/swap_cgroup.c 65 */;
	struct swap_cgroup *cocci_id/* mm/swap_cgroup.c 65 */;
	int cocci_id/* mm/swap_cgroup.c 39 */;
	struct page **cocci_id/* mm/swap_cgroup.c 208 */;
	void cocci_id/* mm/swap_cgroup.c 206 */;
	struct swap_cgroup cocci_id/* mm/swap_cgroup.c 20 */;
	struct swap_cgroup {
		unsigned short id;
	} cocci_id/* mm/swap_cgroup.c 17 */;
	void *cocci_id/* mm/swap_cgroup.c 169 */;
	unsigned short cocci_id/* mm/swap_cgroup.c 162 */;
	struct swap_cgroup_ctrl cocci_id/* mm/swap_cgroup.c 15 */[MAX_SWAPFILES];
	unsigned int cocci_id/* mm/swap_cgroup.c 127 */;
	unsigned long cocci_id/* mm/swap_cgroup.c 102 */;
}

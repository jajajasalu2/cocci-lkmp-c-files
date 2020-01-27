cocci_test_suite() {
	struct reada_extent *cocci_id/* fs/btrfs/reada.c 95 */;
	struct extent_buffer *cocci_id/* fs/btrfs/reada.c 95 */;
	struct btrfs_key *cocci_id/* fs/btrfs/reada.c 929 */;
	struct btrfs_root *cocci_id/* fs/btrfs/reada.c 928 */;
	int cocci_id/* fs/btrfs/reada.c 89 */(struct reada_control *rc,
					      u64 logical,
					      struct btrfs_key *top,
					      u64 generation);
	void cocci_id/* fs/btrfs/reada.c 87 */(struct btrfs_fs_info *fs_info);
	void **cocci_id/* fs/btrfs/reada.c 848 */;
	struct reada_zone *cocci_id/* fs/btrfs/reada.c 846 */;
	void cocci_id/* fs/btrfs/reada.c 84 */(struct kref *kref);
	unsigned long cocci_id/* fs/btrfs/reada.c 834 */;
	void cocci_id/* fs/btrfs/reada.c 83 */(struct btrfs_fs_info *,
					       struct reada_extent *);
	struct reada_machine_work *cocci_id/* fs/btrfs/reada.c 815 */;
	struct reada_machine_work {
		struct btrfs_work work;
		struct btrfs_fs_info *fs_info;
	} cocci_id/* fs/btrfs/reada.c 78 */;
	int cocci_id/* fs/btrfs/reada.c 776 */;
	u64 cocci_id/* fs/btrfs/reada.c 774 */;
	struct btrfs_fs_devices *cocci_id/* fs/btrfs/reada.c 773 */;
	struct btrfs_device *cocci_id/* fs/btrfs/reada.c 772 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/reada.c 770 */;
	void cocci_id/* fs/btrfs/reada.c 770 */;
	struct reada_machine_work cocci_id/* fs/btrfs/reada.c 757 */;
	struct btrfs_work *cocci_id/* fs/btrfs/reada.c 752 */;
	struct extent_buffer **cocci_id/* fs/btrfs/reada.c 643 */;
	struct reada_zone {
		u64 start;
		u64 end;
		u64 elems;
		struct list_head list;
		spinlock_t lock;
		int locked;
		struct btrfs_device *device;
		struct btrfs_device *devs[BTRFS_MAX_MIRRORS];
		int ndevs;
		struct kref refcnt;
	} cocci_id/* fs/btrfs/reada.c 64 */;
	struct reada_control cocci_id/* fs/btrfs/reada.c 537 */;
	struct kref *cocci_id/* fs/btrfs/reada.c 535 */;
	struct reada_extent {
		u64 logical;
		struct btrfs_key top;
		struct list_head extctl;
		int refcnt;
		spinlock_t lock;
		struct reada_zone *zones[BTRFS_MAX_MIRRORS];
		int nzones;
		int scheduled;
	} cocci_id/* fs/btrfs/reada.c 53 */;
	struct reada_zone cocci_id/* fs/btrfs/reada.c 527 */;
	struct reada_extctl {
		struct list_head list;
		struct reada_control *rc;
		u64 generation;
	} cocci_id/* fs/btrfs/reada.c 47 */;
	struct btrfs_bio *cocci_id/* fs/btrfs/reada.c 306 */;
	struct btrfs_block_group *cocci_id/* fs/btrfs/reada.c 230 */;
	struct reada_extctl cocci_id/* fs/btrfs/reada.c 180 */;
	struct reada_control *cocci_id/* fs/btrfs/reada.c 148 */;
	struct btrfs_key cocci_id/* fs/btrfs/reada.c 136 */;
	struct reada_extctl *cocci_id/* fs/btrfs/reada.c 134 */;
	struct list_head cocci_id/* fs/btrfs/reada.c 102 */;
	void *cocci_id/* fs/btrfs/reada.c 1009 */;
}

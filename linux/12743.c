cocci_test_suite() {
	struct ioasid_allocator_ops *cocci_id/* drivers/iommu/ioasid.c 98 */;
	struct ioasid_data *cocci_id/* drivers/iommu/ioasid.c 91 */;
	void cocci_id/* drivers/iommu/ioasid.c 89 */;
	ioasid_t cocci_id/* drivers/iommu/ioasid.c 77 */;
	void *cocci_id/* drivers/iommu/ioasid.c 77 */;
	struct ioasid_allocator_data *cocci_id/* drivers/iommu/ioasid.c 75 */;
	struct ioasid_allocator_data cocci_id/* drivers/iommu/ioasid.c 69 */;
	struct ioasid_allocator_ops cocci_id/* drivers/iommu/ioasid.c 64 */;
	void cocci_id/* drivers/iommu/ioasid.c 62 */(ioasid_t ioasid,
						     void *opaque);
	ioasid_t cocci_id/* drivers/iommu/ioasid.c 61 */(ioasid_t min,
							 ioasid_t max,
							 void *opaque);
	struct ioasid_allocator_data {
		struct ioasid_allocator_ops *ops;
		struct list_head list;
		struct list_head slist;
#define IOASID_ALLOCATOR_CUSTOM BIT(0)
			unsigned long flags;
		struct xarray xa;
		struct rcu_head rcu;
	} cocci_id/* drivers/iommu/ioasid.c 48 */;
	bool (*cocci_id/* drivers/iommu/ioasid.c 390 */)(void *);
	struct ioasid_set *cocci_id/* drivers/iommu/ioasid.c 304 */;
	int cocci_id/* drivers/iommu/ioasid.c 138 */;
	struct ioasid_data {
		ioasid_t id;
		struct ioasid_set *set;
		void *private;
		struct rcu_head rcu;
	} cocci_id/* drivers/iommu/ioasid.c 13 */;
	bool cocci_id/* drivers/iommu/ioasid.c 117 */;
}

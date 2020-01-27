cocci_test_suite() {
	struct stratix10_svc *cocci_id/* drivers/firmware/stratix10-svc.c 979 */;
	struct stratix10_svc_sh_memory *cocci_id/* drivers/firmware/stratix10-svc.c 978 */;
	struct stratix10_svc_controller *cocci_id/* drivers/firmware/stratix10-svc.c 975 */;
	struct platform_device *cocci_id/* drivers/firmware/stratix10-svc.c 972 */;
	int cocci_id/* drivers/firmware/stratix10-svc.c 972 */;
	const struct of_device_id cocci_id/* drivers/firmware/stratix10-svc.c 967 */[];
	unsigned int cocci_id/* drivers/firmware/stratix10-svc.c 937 */;
	struct gen_pool *cocci_id/* drivers/firmware/stratix10-svc.c 918 */;
	phys_addr_t cocci_id/* drivers/firmware/stratix10-svc.c 917 */;
	unsigned long cocci_id/* drivers/firmware/stratix10-svc.c 916 */;
	struct stratix10_svc_data_mem *cocci_id/* drivers/firmware/stratix10-svc.c 915 */;
	size_t cocci_id/* drivers/firmware/stratix10-svc.c 913 */;
	struct stratix10_svc_chan *cocci_id/* drivers/firmware/stratix10-svc.c 912 */;
	void *cocci_id/* drivers/firmware/stratix10-svc.c 912 */;
	struct stratix10_svc_data_mem {
		void *vaddr;
		phys_addr_t paddr;
		size_t size;
		struct list_head node;
	} cocci_id/* drivers/firmware/stratix10-svc.c 90 */;
	void cocci_id/* drivers/firmware/stratix10-svc.c 891 */;
	struct stratix10_svc_command_config_type *cocci_id/* drivers/firmware/stratix10-svc.c 848 */;
	struct stratix10_svc_data *cocci_id/* drivers/firmware/stratix10-svc.c 817 */;
	struct stratix10_svc_client_msg *cocci_id/* drivers/firmware/stratix10-svc.c 814 */;
	struct stratix10_svc_controller cocci_id/* drivers/firmware/stratix10-svc.c 755 */;
	struct stratix10_svc_client *cocci_id/* drivers/firmware/stratix10-svc.c 742 */;
	struct stratix10_svc_sh_memory {
		struct completion sync_complete;
		unsigned long addr;
		unsigned long size;
		svc_invoke_fn *invoke_fn;
	} cocci_id/* drivers/firmware/stratix10-svc.c 72 */;
	const char *cocci_id/* drivers/firmware/stratix10-svc.c 714 */;
	svc_invoke_fn *cocci_id/* drivers/firmware/stratix10-svc.c 712 */;
	struct device *cocci_id/* drivers/firmware/stratix10-svc.c 712 */;
	struct arm_smccc_res *cocci_id/* drivers/firmware/stratix10-svc.c 701 */;
	struct task_struct *cocci_id/* drivers/firmware/stratix10-svc.c 571 */;
	struct arm_smccc_res cocci_id/* drivers/firmware/stratix10-svc.c 540 */;
	struct stratix10_svc {
		struct platform_device *stratix10_svc_rsu;
	} cocci_id/* drivers/firmware/stratix10-svc.c 54 */;
	struct stratix10_svc_chan cocci_id/* drivers/firmware/stratix10-svc.c 48 */;
	void cocci_id/* drivers/firmware/stratix10-svc.c 44 */(unsigned long,
							       unsigned long,
							       unsigned long,
							       unsigned long,
							       unsigned long,
							       unsigned long,
							       unsigned long,
							       unsigned long,
							       struct arm_smccc_res *);
	struct stratix10_svc_cb_data *cocci_id/* drivers/firmware/stratix10-svc.c 341 */;
	struct stratix10_svc_chan {
		struct stratix10_svc_controller *ctrl;
		struct stratix10_svc_client *scl;
		char *name;
		spinlock_t lock;
	} cocci_id/* drivers/firmware/stratix10-svc.c 158 */;
	struct stratix10_svc_controller {
		struct device *dev;
		struct stratix10_svc_chan *chans;
		int num_chans;
		int num_active_client;
		struct list_head node;
		struct gen_pool *genpool;
		struct task_struct *task;
		struct kfifo svc_fifo;
		struct completion complete_status;
		spinlock_t svc_fifo_lock;
		svc_invoke_fn *invoke_fn;
	} cocci_id/* drivers/firmware/stratix10-svc.c 134 */;
	void __exit cocci_id/* drivers/firmware/stratix10-svc.c 1116 */;
	struct device_node *cocci_id/* drivers/firmware/stratix10-svc.c 1096 */;
	int __init cocci_id/* drivers/firmware/stratix10-svc.c 1094 */;
	struct platform_driver cocci_id/* drivers/firmware/stratix10-svc.c 1085 */;
	struct stratix10_svc_data {
		struct stratix10_svc_chan *chan;
		phys_addr_t paddr;
		size_t size;
		u32 command;
		u32 flag;
		u64 arg[3];
	} cocci_id/* drivers/firmware/stratix10-svc.c 108 */;
	struct stratix10_svc_data cocci_id/* drivers/firmware/stratix10-svc.c 1022 */;
}

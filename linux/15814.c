cocci_test_suite() {
	struct vchiq_slot_zero *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 83 */;
	struct rpi_firmware *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 82 */;
	struct vchiq_drvdata *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 81 */;
	struct platform_device *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 78 */;
	void cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 74 */(struct vchiq_pagelist_info *pagelistinfo,
												 int actual);
	struct vchiq_pagelist_info *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 71 */(char __user *buf,
															size_t count,
															unsigned short type);
	irqreturn_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 68 */(int irq,
													void *dev_id);
	struct device *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 64 */;
	struct semaphore cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 63 */;
	char **cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 531 */;
	char *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 519 */;
	void __iomem *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 48 */;
	struct page *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 423 */;
	struct scatterlist cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 375 */;
	u32 cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 374 */;
	struct vchiq_pagelist_info cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 373 */;
	struct pagelist cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 372 */;
	unsigned long cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 369 */;
	dma_addr_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 364 */;
	struct scatterlist *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 362 */;
	int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 360 */;
	struct vchiq_pagelist_info {
		struct pagelist *pagelist;
		size_t pagelist_buffer_size;
		dma_addr_t dma_addr;
		enum dma_data_direction dma_dir;
		unsigned int num_pages;
		unsigned int pages_need_release;
		struct page **pages;
		struct scatterlist *scatterlist;
		unsigned int scatterlist_mapped;
	} cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 36 */;
	u32 *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 358 */;
	struct page **cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 357 */;
	struct pagelist *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 355 */;
	char __user *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 353 */;
	unsigned short cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 353 */;
	size_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 353 */;
	unsigned int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 334 */;
	struct vchiq_pagelist_info *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 326 */;
	void cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 325 */;
	struct vchiq_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 310 */;
	struct vchiq_2835_state {
		int inited;
		struct vchiq_arm_state arm_state;
	} cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 31 */;
	void *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 308 */;
	irqreturn_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 307 */;
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 252 */[80];
	struct vchiq_bulk *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 243 */;
	struct remote_event *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 205 */;
	struct vchiq_2835_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 195 */;
	struct vchiq_arm_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 192 */;
	enum vchiq_status cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_2835_arm.c 171 */;
}

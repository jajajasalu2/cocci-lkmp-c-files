cocci_test_suite() {
	u8 cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 963 */;
	enum{MLXBF_TMFIFO_VRING_RX, MLXBF_TMFIFO_VRING_TX, MLXBF_TMFIFO_VRING_MAX,} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 96 */;
	struct irq_affinity *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 920 */;
	const bool *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 919 */;
	const char *constcocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 918 */[];
	vq_callback_t *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 917 */[];
	struct virtqueue *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 916 */[];
	struct virtqueue *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 896 */;
	enum{MLXBF_TM_RX_LWM_IRQ, MLXBF_TM_RX_HWM_IRQ, MLXBF_TM_TX_LWM_IRQ, MLXBF_TM_TX_HWM_IRQ, MLXBF_TM_MAX_IRQ,} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 87 */;
	struct work_struct *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 812 */;
	struct mlxbf_tmfifo_vring {
		void *va;
		dma_addr_t dma;
		struct virtqueue *vq;
		struct vring_desc *desc;
		struct vring_desc *desc_head;
		int cur_len;
		int rem_len;
		u32 pkt_len;
		u16 next_avail;
		int num;
		int align;
		int index;
		int vdev_id;
		struct mlxbf_tmfifo *fifo;
	} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 69 */;
	int *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 672 */;
	struct virtio_net_hdr cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 626 */;
	struct virtio_net_config *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 610 */;
	bool *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 607 */;
	u8 *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 539 */;
	u64 *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 525 */;
	u64 cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 502 */;
	unsigned long cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 499 */;
	struct mlxbf_tmfifo_msg_hdr cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 497 */;
	u32 cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 448 */;
	struct vring_desc *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 447 */;
	struct virtio_device *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 416 */;
	const struct vring *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 415 */;
	struct mlxbf_tmfifo cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 398 */;
	struct timer_list *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 396 */;
	bool cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 381 */;
	struct virtio_net_hdr *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 373 */;
	u16 cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 313 */;
	unsigned int cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 292 */;
	struct mlxbf_tmfifo_irq_info *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 278 */;
	irqreturn_t cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 276 */;
	void *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 237 */;
	dma_addr_t cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 235 */;
	struct device *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 234 */;
	struct mlxbf_tmfifo_vring *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 233 */;
	struct mlxbf_tmfifo_vdev *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 231 */;
	struct mlxbf_tmfifo *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 230 */;
	int cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 230 */;
	struct mlxbf_tmfifo_vdev cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 205 */;
	efi_char16_t cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 195 */[];
	struct mlxbf_tmfifo_msg_hdr {
		u8 type;
		__be16 len;
		u8 unused[5];
	}__packed __aligned(sizeof(u64)) cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 179 */;
	struct mlxbf_tmfifo {
		struct mlxbf_tmfifo_vdev *vdev[MLXBF_TMFIFO_VDEV_MAX];
		struct mutex lock;
		void __iomem *rx_base;
		void __iomem *tx_base;
		int rx_fifo_size;
		int tx_fifo_size;
		unsigned long pend_events;
		struct mlxbf_tmfifo_irq_info irq_info[MLXBF_TM_MAX_IRQ];
		struct work_struct work;
		struct timer_list timer;
		struct mlxbf_tmfifo_vring *vring[2];
		spinlock_t spin_lock;
		bool is_ready;
	} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 155 */;
	struct mlxbf_tmfifo_irq_info {
		struct mlxbf_tmfifo *fifo;
		int irq;
		int index;
	} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 133 */;
	struct platform_driver cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1268 */;
	const struct acpi_device_id cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1262 */[];
	struct virtio_net_config cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1183 */;
	struct platform_device *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1181 */;
	void cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1168 */;
	struct mlxbf_tmfifo_vdev {
		struct virtio_device vdev;
		u8 status;
		u64 features;
		struct mlxbf_tmfifo_vring vrings[MLXBF_TMFIFO_VRING_MAX];
		union {
			struct virtio_console_config cons;
			struct virtio_net_config net;
		} config;
		struct circ_buf tx_buf;
	} cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 115 */;
	efi_status_t cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1131 */;
	u8 cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1130 */[ETH_ALEN];
	efi_guid_t cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1128 */;
	const struct virtio_config_ops cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1025 */;
	struct virtio_device cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1018 */;
	const void *cocci_id/* drivers/platform/mellanox/mlxbf-tmfifo.c 1004 */;
}

cocci_test_suite() {
	int cocci_id/* samples/mic/mpssd/mpssd.c 916 */;
	char cocci_id/* samples/mic/mpssd/mpssd.c 915 */[PATH_MAX];
	struct mic_info *cocci_id/* samples/mic/mpssd/mpssd.c 913 */;
	struct mic_device_desc *cocci_id/* samples/mic/mpssd/mpssd.c 913 */;
	void cocci_id/* samples/mic/mpssd/mpssd.c 912 */;
	struct {
		struct mic_device_desc dd;
		struct mic_vqconfig vqconfig[2];
		__u32 host_features,guest_acknowledgements;
		struct virtio_net_config net_config;
	} cocci_id/* samples/mic/mpssd/mpssd.c 89 */;
	struct pollfd cocci_id/* samples/mic/mpssd/mpssd.c 742 */[MAX_CONSOLE_FD];
	struct iovec cocci_id/* samples/mic/mpssd/mpssd.c 735 */[2];
	__u8 cocci_id/* samples/mic/mpssd/mpssd.c 734 */[2][PAGE_SIZE];
	struct {
		struct mic_device_desc dd;
		struct mic_vqconfig vqconfig[2];
		__u32 host_features,guest_acknowledgements;
		struct virtio_console_config cons_config;
	} cocci_id/* samples/mic/mpssd/mpssd.c 69 */;
	struct virtio_net_hdr cocci_id/* samples/mic/mpssd/mpssd.c 661 */;
	struct virtio_net_hdr *cocci_id/* samples/mic/mpssd/mpssd.c 602 */;
	volatile typeof(x) *cocci_id/* samples/mic/mpssd/mpssd.c 57 */;
	struct pollfd cocci_id/* samples/mic/mpssd/mpssd.c 539 */[MAX_NET_FD];
	struct iovec cocci_id/* samples/mic/mpssd/mpssd.c 530 */[2][2];
	__u8 cocci_id/* samples/mic/mpssd/mpssd.c 529 */[2][MAX_NET_PKT_SIZE]__attribute__((aligned(64)));
	__u8 cocci_id/* samples/mic/mpssd/mpssd.c 528 */[2][sizeof(struct virtio_net_hdr)];
	type cocci_id/* samples/mic/mpssd/mpssd.c 433 */;
	struct _mic_vring_info cocci_id/* samples/mic/mpssd/mpssd.c 424 */;
	struct mic_vring *cocci_id/* samples/mic/mpssd/mpssd.c 417 */;
	struct vring_used_elem cocci_id/* samples/mic/mpssd/mpssd.c 408 */;
	__u16 cocci_id/* samples/mic/mpssd/mpssd.c 406 */;
	struct vring_desc cocci_id/* samples/mic/mpssd/mpssd.c 406 */;
	unsigned long cocci_id/* samples/mic/mpssd/mpssd.c 404 */;
	unsigned int cocci_id/* samples/mic/mpssd/mpssd.c 404 */;
	unsigned cocci_id/* samples/mic/mpssd/mpssd.c 404 */;
	FILE *cocci_id/* samples/mic/mpssd/mpssd.c 37 */;
	const char *cocci_id/* samples/mic/mpssd/mpssd.c 362 */;
	struct mic_copy_desc *cocci_id/* samples/mic/mpssd/mpssd.c 361 */;
	void *cocci_id/* samples/mic/mpssd/mpssd.c 35 */(void *arg);
	ssize_t cocci_id/* samples/mic/mpssd/mpssd.c 337 */;
	struct ifreq cocci_id/* samples/mic/mpssd/mpssd.c 221 */;
	pid_t cocci_id/* samples/mic/mpssd/mpssd.c 1784 */;
	char *cocci_id/* samples/mic/mpssd/mpssd.c 1781 */[];
	time_t cocci_id/* samples/mic/mpssd/mpssd.c 1763 */;
	char cocci_id/* samples/mic/mpssd/mpssd.c 1762 */[52];
	char cocci_id/* samples/mic/mpssd/mpssd.c 1761 */[4096];
	va_list cocci_id/* samples/mic/mpssd/mpssd.c 1760 */;
	struct mic_info cocci_id/* samples/mic/mpssd/mpssd.c 1739 */;
	DIR *cocci_id/* samples/mic/mpssd/mpssd.c 1730 */;
	struct dirent *cocci_id/* samples/mic/mpssd/mpssd.c 1729 */;
	struct sigaction cocci_id/* samples/mic/mpssd/mpssd.c 1614 */;
	siginfo_t *cocci_id/* samples/mic/mpssd/mpssd.c 1595 */;
	void *cocci_id/* samples/mic/mpssd/mpssd.c 1595 */;
	char cocci_id/* samples/mic/mpssd/mpssd.c 1547 */[];
	off_t cocci_id/* samples/mic/mpssd/mpssd.c 1546 */;
	char cocci_id/* samples/mic/mpssd/mpssd.c 151 */[IFNAMSIZ];
	char *cocci_id/* samples/mic/mpssd/mpssd.c 150 */[7];
	char cocci_id/* samples/mic/mpssd/mpssd.c 1438 */[PAGE_SIZE];
	struct pollfd cocci_id/* samples/mic/mpssd/mpssd.c 1437 */[1];
	enum mic_states cocci_id/* samples/mic/mpssd/mpssd.c 1355 */;
	char *cocci_id/* samples/mic/mpssd/mpssd.c 1335 */;
	struct {
		struct mic_device_desc dd;
		struct mic_vqconfig vqconfig[1];
		__u32 host_features,guest_acknowledgements;
		struct virtio_blk_config blk_config;
	} cocci_id/* samples/mic/mpssd/mpssd.c 121 */;
	struct mic_vring cocci_id/* samples/mic/mpssd/mpssd.c 1163 */;
	struct pollfd cocci_id/* samples/mic/mpssd/mpssd.c 1162 */;
	__u8 *cocci_id/* samples/mic/mpssd/mpssd.c 1139 */;
	struct iovec *cocci_id/* samples/mic/mpssd/mpssd.c 1116 */;
	struct mic_copy_desc cocci_id/* samples/mic/mpssd/mpssd.c 1104 */;
	struct iovec cocci_id/* samples/mic/mpssd/mpssd.c 1103 */;
	__u32 cocci_id/* samples/mic/mpssd/mpssd.c 1101 */;
	struct virtio_blk_outhdr *cocci_id/* samples/mic/mpssd/mpssd.c 1101 */;
	struct virtio_blk_outhdr cocci_id/* samples/mic/mpssd/mpssd.c 1082 */;
	struct vring_desc *cocci_id/* samples/mic/mpssd/mpssd.c 1080 */;
	__u8 cocci_id/* samples/mic/mpssd/mpssd.c 1079 */;
	bool cocci_id/* samples/mic/mpssd/mpssd.c 1004 */;
}

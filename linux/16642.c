cocci_test_suite() {
	bool cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 851 */;
	union scsw *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 807 */;
	struct ccwchain cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 786 */;
	u8 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 767 */;
	union orb *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 767 */;
	__u32 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 583 */;
	unsigned int cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 58 */;
	unsigned long *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 513 */;
	char *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 497 */;
	u32 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 492 */;
	struct ccw1 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 430 */;
	int cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 420 */(struct ccwchain *chain,
							     struct channel_program *cp);
	u64 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 370 */;
	void cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 347 */;
	struct pfn_array *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 331 */;
	u8 *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 327 */;
	size_t cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 317 */;
	void *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 316 */;
	struct channel_program *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 313 */;
	struct ccwchain *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 313 */;
	struct ccwchain {
		struct list_head next;
		struct ccw1 *ch_ccw;
		u64 ch_iova;
		int ch_len;
		struct pfn_array *ch_pa;
	} cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 30 */;
	struct ccw1 *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 257 */;
	int cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 257 */;
	struct pfn_array cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 196 */;
	struct device *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 192 */;
	long cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 192 */;
	struct pfn_array {
		unsigned long pa_iova;
		unsigned long *pa_iova_pfn;
		unsigned long *pa_pfn;
		int pa_nr;
	} cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 19 */;
	struct ccw0 *cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 173 */;
	struct ccw0 cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 168 */;
	unsigned long cocci_id/* drivers/s390/cio/vfio_ccw_cp.c 166 */;
}

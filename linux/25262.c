cocci_test_suite() {
	unsigned long long *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 83 */;
	unsigned long long cocci_id/* tools/lib/traceevent/kbuffer-parse.c 81 */;
	struct kbuffer_raw_info *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 744 */;
	unsigned char cocci_id/* tools/lib/traceevent/kbuffer-parse.c 68 */[];
	void cocci_id/* tools/lib/traceevent/kbuffer-parse.c 66 */;
	size_t cocci_id/* tools/lib/traceevent/kbuffer-parse.c 61 */;
	struct kbuffer *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 448 */;
	int cocci_id/* tools/lib/traceevent/kbuffer-parse.c 448 */;
	struct kbuffer {
		unsigned long long timestamp;
		long long lost_events;
		unsigned long flags;
		void *subbuffer;
		void *data;
		unsigned int index;
		unsigned int curr;
		unsigned int next;
		unsigned int size;
		unsigned int start;
		unsigned int (*read_4)(void *ptr);
		unsigned long long (*read_8)(void *ptr);
		unsigned long long (*read_long)(struct kbuffer *kbuf,
						void *ptr);
		int (*next_event)(struct kbuffer *kbuf);
	} cocci_id/* tools/lib/traceevent/kbuffer-parse.c 43 */;
	struct kbuffer cocci_id/* tools/lib/traceevent/kbuffer-parse.c 420 */;
	int *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 346 */;
	void **cocci_id/* tools/lib/traceevent/kbuffer-parse.c 345 */;
	enum old_ring_buffer_type{OLD_RINGBUF_TYPE_PADDING, OLD_RINGBUF_TYPE_TIME_EXTEND, OLD_RINGBUF_TYPE_TIME_STAMP, OLD_RINGBUF_TYPE_DATA,} cocci_id/* tools/lib/traceevent/kbuffer-parse.c 268 */;
	enum{KBUFFER_FL_HOST_BIG_ENDIAN=(1 << 0), KBUFFER_FL_BIG_ENDIAN=(1 << 1), KBUFFER_FL_LONG_8=(1 << 2), KBUFFER_FL_OLD_FORMAT=(1 << 3),} cocci_id/* tools/lib/traceevent/kbuffer-parse.c 17 */;
	enum kbuffer_long_size cocci_id/* tools/lib/traceevent/kbuffer-parse.c 165 */;
	enum kbuffer_endian cocci_id/* tools/lib/traceevent/kbuffer-parse.c 165 */;
	int cocci_id/* tools/lib/traceevent/kbuffer-parse.c 155 */(struct kbuffer *kbuf);
	unsigned long cocci_id/* tools/lib/traceevent/kbuffer-parse.c 152 */;
	unsigned int *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 107 */;
	void *cocci_id/* tools/lib/traceevent/kbuffer-parse.c 105 */;
	unsigned int cocci_id/* tools/lib/traceevent/kbuffer-parse.c 105 */;
}

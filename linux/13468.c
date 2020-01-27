cocci_test_suite() {
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 73 */;
	unsigned int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 64 */;
	const char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 392 */;
	void __user *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 388 */;
	struct pvr2_ioread *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 352 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 352 */;
	struct pvr2_buffer *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 190 */;
	struct pvr2_ioread {
		struct pvr2_stream *stream;
		char *buffer_storage[BUFFER_COUNT];
		char *sync_key_ptr;
		unsigned int sync_key_len;
		unsigned int sync_buf_offs;
		unsigned int sync_state;
		unsigned int sync_trashed_count;
		int enabled;
		int spigot_open;
		int stream_running;
		struct pvr2_buffer *c_buf;
		char *c_data_ptr;
		unsigned int c_data_len;
		unsigned int c_data_offs;
		struct mutex mutex;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 19 */;
	struct pvr2_stream *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-ioread.c 181 */;
}

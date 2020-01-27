cocci_test_suite() {
	struct sst_byt_alloc_response {
		struct sst_byt_str_type str_type;
		u8 reserved[88];
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 98 */;
	struct sst_byt_alloc_params {
		struct sst_byt_str_type str_type;
		struct sst_byt_pcm_params pcm_params;
		struct sst_byt_frames_info frame_info;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 92 */;
	struct sst_byt_frames_info {
		u16 num_entries;
		u16 rsrvd;
		u32 frag_size;
		struct sst_byt_address_info ring_buf_info[8];
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 85 */;
	struct sst_byt_pcm_params {
		u8 num_chan;
		u8 pcm_wd_sz;
		u8 use_offload_path;
		u8 reserved;
		u32 sfreq;
		u8 channel_map[8];
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 76 */;
	struct sst_byt_fw_init cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 678 */;
	struct sst_fw *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 677 */;
	u64 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 667 */;
	bool cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 665 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 665 */;
	struct sst_byt_str_type {
		u8 codec_type;
		u8 str_type;
		u8 operation;
		u8 protected_str;
		u8 time_slots;
		u8 reserved;
		u16 result;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 66 */;
	u64 *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 655 */;
	u32 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 650 */;
	u32 *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 650 */;
	size_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 647 */;
	struct ipc_message *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 646 */;
	char *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 646 */;
	const char *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 631 */;
	struct sst_generic_ipc *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 631 */;
	void cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 631 */;
	struct sst_byt_address_info {
		u32 addr;
		u32 size;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 61 */;
	struct sst_byt *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 582 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 580 */;
	struct device *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 580 */;
	int cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 580 */;
	struct sst_dsp_device cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 559 */;
	u8 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 544 */;
	struct sst_byt_tstamp cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 543 */;
	struct sst_byt_stream *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 540 */;
	struct sst_byt_start_stream_params cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 478 */;
	struct sst_ipc_message cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 411 */;
	uint32_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 395 */;
	unsigned int cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 376 */;
	u32 (*cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 339 */)(struct sst_byt_stream *stream,
									     void *data);
	unsigned long cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 302 */;
	irqreturn_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 296 */;
	void *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 296 */;
	unsigned long *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 268 */;
	u16 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 193 */;
	struct sst_byt {
		struct device *dev;
		struct sst_dsp *dsp;
		struct list_head stream_list;
		wait_queue_head_t boot_wait;
		bool boot_complete;
		struct sst_fw *fw;
		struct sst_generic_ipc ipc;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 160 */;
	struct sst_byt_stream {
		struct list_head node;
		struct sst_byt_alloc_params request;
		struct sst_byt_alloc_response reply;
		struct sst_byt *byt;
		int str_id;
		bool commited;
		bool running;
		u32 (*notify_position)(struct sst_byt_stream *stream,
				       void *data);
		void *pdata;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 141 */;
	struct sst_byt cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 138 */;
	struct sst_byt_stream cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 137 */;
	struct sst_byt_fw_init {
		struct sst_byt_fw_version fw_version;
		struct sst_byt_fw_build_info build_info;
		u16 result;
		u8 module_id;
		u8 debug_info;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 129 */;
	struct sst_byt_fw_build_info {
		u8 date[16];
		u8 time[16];
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 124 */;
	struct sst_byt_fw_version {
		u8 build;
		u8 minor;
		u8 major;
		u8 type;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 117 */;
	struct sst_byt_tstamp {
		u64 ring_buffer_counter;
		u64 hardware_counter;
		u64 frames_decoded;
		u64 bytes_decoded;
		u64 bytes_copied;
		u32 sampling_frequency;
		u32 channel_peak[8];
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 107 */;
	struct sst_byt_start_stream_params {
		u32 byte_offset;
	}__packed cocci_id/* sound/soc/intel/baytrail/sst-baytrail-ipc.c 103 */;
}

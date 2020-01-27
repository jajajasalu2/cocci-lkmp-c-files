cocci_test_suite() {
	struct asm_multi_channel_pcm_fmt_blk_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 999 */;
	u8 cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 996 */[PCM_MAX_NUM_CHANNEL];
	struct asm_flac_fmt_blk_v2 {
		struct asm_data_cmd_media_fmt_update_v2 fmt_blk;
		u16 is_stream_info_present;
		u16 num_channels;
		u16 min_blk_size;
		u16 max_blk_size;
		u16 md5_sum[8];
		u32 sample_rate;
		u32 min_frame_size;
		u32 max_frame_size;
		u16 sample_size;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 93 */;
	struct asm_session_cmd_run_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 918 */;
	struct asm_stream_cmd_open_write_v3 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 863 */;
	struct asm_multi_channel_pcm_fmt_blk_v2 {
		struct asm_data_cmd_media_fmt_update_v2 fmt_blk;
		u16 num_channels;
		u16 bits_per_sample;
		u32 sample_rate;
		u16 is_signed;
		u16 reserved;
		u8 channel_mapping[PCM_MAX_NUM_CHANNEL];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 83 */;
	struct apr_hdr *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 818 */;
	struct asm_data_cmd_media_fmt_update_v2 {
		u32 fmt_blk_size;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 79 */;
	q6asm_cb cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 775 */;
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 775 */;
	struct avs_cmd_shared_mem_unmap_regions {
		u32 mem_map_handle;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 75 */;
	struct avs_shared_map_region_payload {
		u32 shm_addr_lsw;
		u32 shm_addr_msw;
		u32 mem_size_bytes;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 69 */;
	struct aprv2_ibasic_rsp_result_t *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 684 */;
	struct apr_resp_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 681 */;
	struct asm_data_cmd_read_v2_done *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 642 */;
	struct avs_cmd_shared_mem_map_regions {
		u16 mem_pool_id;
		u16 num_regions;
		u32 property_flag;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 63 */;
	int32_t cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 537 */;
	struct audio_client cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 491 */;
	struct kref *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 485 */;
	struct audio_buffer cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 453 */;
	uint32_t cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 370 */;
	unsigned long cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 369 */;
	void *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 368 */;
	struct apr_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 367 */;
	struct audio_buffer *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 366 */;
	struct audio_port_data *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 365 */;
	struct q6asm *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 364 */;
	struct avs_shared_map_region_payload *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 363 */;
	struct avs_cmd_shared_mem_map_regions *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 362 */;
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 359 */;
	size_t cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 359 */;
	struct avs_cmd_shared_mem_unmap_regions *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 268 */;
	phys_addr_t cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 266 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 216 */;
	struct audio_client {
		int session;
		q6asm_cb cb;
		void *priv;
		uint32_t io_mode;
		struct apr_device *adev;
		struct mutex cmd_lock;
		spinlock_t lock;
		struct kref refcount;
		struct audio_port_data port[2];
		wait_queue_head_t cmd_wait;
		struct aprv2_ibasic_rsp_result_t result;
		int perf_mode;
		int stream_id;
		struct q6asm *q6asm;
		struct device *dev;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 197 */;
	struct q6asm {
		struct apr_device *adev;
		struct device *dev;
		struct q6core_svc_api_info ainfo;
		wait_queue_head_t mem_wait;
		spinlock_t slock;
		struct audio_client *session[MAX_SESSIONS + 1];
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 188 */;
	struct audio_port_data {
		struct audio_buffer *buf;
		uint32_t num_periods;
		uint32_t dsp_buf;
		uint32_t mem_map_handle;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 181 */;
	struct audio_buffer {
		phys_addr_t phys;
		uint32_t size;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 176 */;
	struct asm_session_cmd_run_v2 {
		u32 flags;
		u32 time_lsw;
		u32 time_msw;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 170 */;
	struct asm_stream_cmd_open_write_v3 {
		uint32_t mode_flags;
		uint16_t sink_endpointype;
		uint16_t bits_per_sample;
		uint32_t postprocopo_id;
		uint32_t dec_fmt_id;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 162 */;
	struct asm_data_cmd_write_v2 {
		u32 buf_addr_lsw;
		u32 buf_addr_msw;
		u32 mem_map_handle;
		u32 buf_size;
		u32 seq_id;
		u32 timestamp_lsw;
		u32 timestamp_msw;
		u32 flags;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 151 */;
	struct apr_driver cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1433 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1427 */[];
	struct asm_stream_cmd_open_read_v3 {
		u32 mode_flags;
		u32 src_endpointype;
		u32 preprocopo_id;
		u32 enc_cfg_id;
		u16 bits_per_sample;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 142 */;
	struct apr_device *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1401 */;
	struct asm_data_cmd_read_v2_done {
		u32 status;
		u32 buf_addr_lsw;
		u32 buf_addr_msw;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 136 */;
	struct apr_pkt cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1331 */;
	bool cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1328 */;
	struct audio_client *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1328 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1328 */;
	struct asm_data_cmd_read_v2 {
		u32 buf_addr_lsw;
		u32 buf_addr_msw;
		u32 mem_map_handle;
		u32 buf_size;
		u32 seq_id;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 128 */;
	struct asm_data_cmd_write_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1262 */;
	struct asm_stream_cmd_open_read_v3 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1192 */;
	uint16_t cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1190 */;
	struct asm_multi_channel_pcm_enc_cfg_v2 {
		struct asm_stream_cmd_set_encdec_param encdec;
		struct asm_enc_cfg_blk_param_v2 encblk;
		uint16_t num_channels;
		uint16_t bits_per_sample;
		uint32_t sample_rate;
		uint16_t is_signed;
		uint16_t reserved;
		uint8_t channel_mapping[8];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 117 */;
	struct asm_data_cmd_read_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1142 */;
	struct asm_enc_cfg_blk_param_v2 {
		u32 frames_per_buf;
		u32 enc_cfg_blk_size;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 112 */;
	struct asm_enc_cfg_blk_param_v2 cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1112 */;
	u32 cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1094 */;
	u8 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1093 */;
	struct asm_multi_channel_pcm_enc_cfg_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1091 */;
	struct asm_stream_cmd_set_encdec_param {
		u32 param_id;
		u32 param_size;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 107 */;
	struct asm_flac_fmt_blk_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1046 */;
	struct q6asm_flac_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6asm.c 1044 */;
}

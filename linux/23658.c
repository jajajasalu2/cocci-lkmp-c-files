cocci_test_suite() {
	struct afe_digital_clk_cfg cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 967 */;
	struct afe_clk_set cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 966 */;
	struct afe_clk_cfg cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 965 */;
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 963 */;
	struct afe_digital_clk_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 953 */;
	struct afe_clk_set *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 946 */;
	struct afe_clk_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 937 */;
	struct afe_port_cmd_set_param_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 890 */;
	u16 cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 846 */;
	struct afe_port_param_data_v2 *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 843 */;
	struct afe_svc_cmd_set_param *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 842 */;
	void *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 839 */;
	struct apr_hdr *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 807 */;
	wait_queue_head_t *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 806 */;
	struct q6afe_port *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 804 */;
	struct q6afe *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 803 */;
	struct apr_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 803 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 803 */;
	struct aprv2_ibasic_rsp_result_t *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 748 */;
	struct apr_resp_pkt *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 745 */;
	struct apr_device *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 745 */;
	unsigned long cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 731 */;
	struct q6afe_port cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 718 */;
	struct kref *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 712 */;
	struct afe_port_map cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 502 */[AFE_PORT_MAX];
	struct afe_port_map {
		int port_id;
		int token;
		int is_rx;
		int is_dig_pcm;
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 489 */;
	struct q6afe_port {
		wait_queue_head_t wait;
		union afe_port_config port_cfg;
		struct afe_param_id_slot_mapping_cfg *scfg;
		struct aprv2_ibasic_rsp_result_t result;
		int token;
		int id;
		int cfg_type;
		struct q6afe *afe;
		struct kref refcount;
		struct list_head node;
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 476 */;
	struct afe_param_id_slot_mapping_cfg {
		u32 minor_version;
		u16 num_channels;
		u16 bitwidth;
		u32 data_align_type;
		u16 ch_mapping[AFE_PORT_MAX_AUDIO_CHAN_CNT];
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 468 */;
	struct afe_clk_set {
		uint32_t clk_set_minor_version;
		uint32_t clk_id;
		uint32_t clk_freq_in_hz;
		uint16_t clk_attri;
		uint16_t clk_root;
		uint32_t enable;
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 459 */;
	union afe_port_config {
		struct afe_param_id_hdmi_multi_chan_audio_cfg hdmi_multi_ch;
		struct afe_param_id_slimbus_cfg slim_cfg;
		struct afe_param_id_i2s_cfg i2s_cfg;
		struct afe_param_id_tdm_cfg tdm_cfg;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 451 */;
	struct afe_param_id_tdm_cfg {
		u32 tdm_cfg_minor_version;
		u32 num_channels;
		u32 sample_rate;
		u32 bit_width;
		u16 data_format;
		u16 sync_mode;
		u16 sync_src;
		u16 nslots_per_frame;
		u16 ctrl_data_out_enable;
		u16 ctrl_invert_sync_pulse;
		u16 ctrl_sync_data_delay;
		u16 slot_width;
		u32 slot_mask;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 435 */;
	struct afe_param_id_i2s_cfg {
		u32 i2s_cfg_minor_version;
		u16 bit_width;
		u16 channel_mode;
		u16 mono_stereo;
		u16 ws_src;
		u32 sample_rate;
		u16 data_format;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 424 */;
	struct afe_digital_clk_cfg {
		u32 i2s_cfg_minor_version;
		u32 clk_val;
		u16 clk_root;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 417 */;
	struct afe_clk_cfg {
		u32 i2s_cfg_minor_version;
		u32 clk_val1;
		u32 clk_val2;
		u16 clk_src;
		u16 clk_root;
		u16 clk_set_mode;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 407 */;
	struct afe_param_id_slimbus_cfg {
		u32 sb_cfg_minor_version;
		u16 slimbus_dev_id;
		u16 bit_width;
		u16 data_format;
		u16 num_channels;
		u8 shared_ch_mapping[AFE_PORT_MAX_AUDIO_CHAN_CNT];
		u32 sample_rate;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 364 */;
	struct afe_param_id_hdmi_multi_chan_audio_cfg {
		u32 hdmi_cfg_minor_version;
		u16 datatype;
		u16 channel_allocation;
		u32 sample_rate;
		u16 bit_width;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 355 */;
	struct afe_port_cmd_set_param_v2 {
		u16 port_id;
		u16 payload_size;
		u32 payload_address_lsw;
		u32 payload_address_msw;
		u32 mem_map_handle;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 347 */;
	struct afe_svc_cmd_set_param {
		uint32_t payload_size;
		uint32_t payload_address_lsw;
		uint32_t payload_address_msw;
		uint32_t mem_map_handle;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 340 */;
	struct afe_port_param_data_v2 {
		u32 module_id;
		u32 param_id;
		u16 param_size;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 333 */;
	struct afe_port_cmd_device_stop {
		u16 port_id;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 327 */;
	struct afe_port_cmd_device_start {
		u16 port_id;
		u16 reserved;
	}__packed cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 322 */;
	struct q6afe {
		struct apr_device *apr;
		struct device *dev;
		struct q6core_svc_api_info ainfo;
		struct mutex lock;
		struct list_head port_list;
		spinlock_t port_list_lock;
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 313 */;
	struct apr_driver cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1495 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1489 */[];
	struct afe_port_cmd_device_start *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1300 */;
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1158 */;
	struct q6afe_i2s_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1155 */;
	union afe_port_config *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1137 */;
	struct q6afe_hdmi_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1135 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1134 */;
	struct q6afe_tdm_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1099 */;
	struct q6afe_slim_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1074 */;
	struct afe_port_cmd_device_stop *cocci_id/* sound/soc/qcom/qdsp6/q6afe.c 1023 */;
}

cocci_test_suite() {
	unsigned int *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 977 */;
	u32 **cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 973 */;
	size_t *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 973 */;
	struct skl_ipc_large_config_msg *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 972 */;
	char *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 948 */;
	unsigned cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 945 */;
	size_t cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 921 */;
	u64 *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 847 */;
	u8 cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 834 */;
	struct sst_ipc_message cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 833 */;
	struct skl_ipc_bind_unbind_msg *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 830 */;
	u32 *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 794 */;
	struct skl_ipc_init_instance_msg *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 789 */;
	struct skl_ipc_dxstate_info *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 760 */;
	enum skl_ipc_pipeline_state cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 687 */;
	u16 cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 636 */;
	void cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 622 */;
	struct device *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 599 */;
	u32 cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 495 */;
	struct skl_ipc_header cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 494 */;
	struct sst_generic_ipc *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 493 */;
	struct skl_dev *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 492 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 491 */;
	irqreturn_t cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 489 */;
	void *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 489 */;
	int cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 489 */;
	unsigned long cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 440 */;
	struct ipc_message *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 436 */;
	struct skl_ipc_err_map cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 396 */[];
	struct skl_ipc_err_map {
		const char *msg;
		enum skl_ipc_glb_reply reply;
		int err;
	} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 390 */;
	struct skl_dev cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 348 */;
	struct ipc_message cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 337 */;
	struct skl_ipc_header *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 329 */;
	u64 cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 326 */;
	bool cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 308 */;
	enum skl_ipc_module_msg{IPC_MOD_INIT_INSTANCE=0, IPC_MOD_CONFIG_GET=1, IPC_MOD_CONFIG_SET=2, IPC_MOD_LARGE_CONFIG_GET=3, IPC_MOD_LARGE_CONFIG_SET=4, IPC_MOD_BIND=5, IPC_MOD_UNBIND=6, IPC_MOD_SET_DX=7, IPC_MOD_SET_D0IX=8,} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 268 */;
	enum skl_ipc_notification_type{IPC_GLB_NOTIFY_GLITCH=0, IPC_GLB_NOTIFY_OVERRUN=1, IPC_GLB_NOTIFY_UNDERRUN=2, IPC_GLB_NOTIFY_END_STREAM=3, IPC_GLB_NOTIFY_PHRASE_DETECTED=4, IPC_GLB_NOTIFY_RESOURCE_EVENT=5, IPC_GLB_NOTIFY_LOG_BUFFER_STATUS=6, IPC_GLB_NOTIFY_TIMESTAMP_CAPTURED=7, IPC_GLB_NOTIFY_FW_READY=8,} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 255 */;
	enum skl_ipc_glb_reply{IPC_GLB_REPLY_SUCCESS=0, IPC_GLB_REPLY_UNKNOWN_MSG_TYPE=1, IPC_GLB_REPLY_ERROR_INVALID_PARAM=2, IPC_GLB_REPLY_BUSY=3, IPC_GLB_REPLY_PENDING=4, IPC_GLB_REPLY_FAILURE=5, IPC_GLB_REPLY_INVALID_REQUEST=6, IPC_GLB_REPLY_OUT_OF_MEMORY=7, IPC_GLB_REPLY_OUT_OF_MIPS=8, IPC_GLB_REPLY_INVALID_RESOURCE_ID=9, IPC_GLB_REPLY_INVALID_RESOURCE_STATE=10, IPC_GLB_REPLY_MOD_MGMT_ERROR=100, IPC_GLB_REPLY_MOD_LOAD_CL_FAILED=101, IPC_GLB_REPLY_MOD_LOAD_INVALID_HASH=102, IPC_GLB_REPLY_MOD_UNLOAD_INST_EXIST=103, IPC_GLB_REPLY_MOD_NOT_INITIALIZED=104, IPC_GLB_REPLY_INVALID_CONFIG_PARAM_ID=120, IPC_GLB_REPLY_INVALID_CONFIG_DATA_LEN=121, IPC_GLB_REPLY_GATEWAY_NOT_INITIALIZED=140, IPC_GLB_REPLY_GATEWAY_NOT_EXIST=141, IPC_GLB_REPLY_SCLK_ALREADY_RUNNING=150, IPC_GLB_REPLY_MCLK_ALREADY_RUNNING=151, IPC_GLB_REPLY_PPL_NOT_INITIALIZED=160, IPC_GLB_REPLY_PPL_NOT_EXIST=161, IPC_GLB_REPLY_PPL_SAVE_FAILED=162, IPC_GLB_REPLY_PPL_RESTORE_FAILED=163, IPC_MAX_STATUS=((1 << IPC_IXC_STATUS_BITS) - 1),} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 216 */;
	enum skl_ipc_glb_type{IPC_GLB_GET_FW_VERSION=0, IPC_GLB_LOAD_MULTIPLE_MODS=15, IPC_GLB_UNLOAD_MULTIPLE_MODS=16, IPC_GLB_CREATE_PPL=17, IPC_GLB_DELETE_PPL=18, IPC_GLB_SET_PPL_STATE=19, IPC_GLB_GET_PPL_STATE=20, IPC_GLB_GET_PPL_CONTEXT_SIZE=21, IPC_GLB_SAVE_PPL=22, IPC_GLB_RESTORE_PPL=23, IPC_GLB_LOAD_LIBRARY=24, IPC_GLB_NOTIFY=26, IPC_GLB_MAX_IPC_MSG_NUMBER=31,} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 200 */;
	enum skl_ipc_msg_direction{IPC_MSG_REQUEST=0, IPC_MSG_REPLY=1,} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 194 */;
	enum skl_ipc_msg_target{IPC_FW_GEN_MSG=0, IPC_MOD_MSG=1,} cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 189 */;
	struct skl_ipc_d0ix_msg *cocci_id/* sound/soc/intel/skylake/skl-sst-ipc.c 1041 */;
}
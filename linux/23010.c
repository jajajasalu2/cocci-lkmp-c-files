cocci_test_suite() {
	struct snd_sof_ipc *cocci_id/* sound/soc/sof/ipc.c 827 */;
	struct snd_sof_ipc_msg *cocci_id/* sound/soc/sof/ipc.c 795 */;
	size_t cocci_id/* sound/soc/sof/ipc.c 730 */;
	struct sof_abi_hdr cocci_id/* sound/soc/sof/ipc.c 681 */;
	struct sof_ipc_ctrl_value_comp cocci_id/* sound/soc/sof/ipc.c 673 */;
	struct sof_ipc_ctrl_data cocci_id/* sound/soc/sof/ipc.c 667 */;
	struct sof_ipc_ctrl_value_chan cocci_id/* sound/soc/sof/ipc.c 641 */;
	struct sof_ipc_ctrl_data_params cocci_id/* sound/soc/sof/ipc.c 634 */;
	struct sof_ipc_fw_version *cocci_id/* sound/soc/sof/ipc.c 633 */;
	struct sof_ipc_fw_ready *cocci_id/* sound/soc/sof/ipc.c 632 */;
	struct sof_ipc_ctrl_data *cocci_id/* sound/soc/sof/ipc.c 630 */;
	bool cocci_id/* sound/soc/sof/ipc.c 628 */;
	enum sof_ipc_ctrl_cmd cocci_id/* sound/soc/sof/ipc.c 627 */;
	enum sof_ipc_ctrl_type cocci_id/* sound/soc/sof/ipc.c 626 */;
	struct snd_sof_control *cocci_id/* sound/soc/sof/ipc.c 624 */;
	struct sof_ipc_ctrl_data_params *cocci_id/* sound/soc/sof/ipc.c 520 */;
	u32 cocci_id/* sound/soc/sof/ipc.c 50 */;
	u8 *cocci_id/* sound/soc/sof/ipc.c 50 */;
	struct device *cocci_id/* sound/soc/sof/ipc.c 50 */;
	void cocci_id/* sound/soc/sof/ipc.c 50 */;
	struct sof_ipc_stream cocci_id/* sound/soc/sof/ipc.c 495 */;
	struct sof_ipc_stream_posn *cocci_id/* sound/soc/sof/ipc.c 493 */;
	int cocci_id/* sound/soc/sof/ipc.c 418 */;
	struct snd_sof_pcm *cocci_id/* sound/soc/sof/ipc.c 417 */;
	struct sof_ipc_stream_posn cocci_id/* sound/soc/sof/ipc.c 416 */;
	struct snd_sof_pcm_stream *cocci_id/* sound/soc/sof/ipc.c 415 */;
	struct snd_sof_dev *cocci_id/* sound/soc/sof/ipc.c 413 */;
	struct sof_ipc_dma_trace_posn cocci_id/* sound/soc/sof/ipc.c 394 */;
	struct sof_ipc_ctrl_data_params {
		size_t msg_bytes;
		size_t hdr_bytes;
		size_t pl_size;
		size_t elems;
		u32 num_msg;
		u8 *src;
		u8 *dst;
	} cocci_id/* sound/soc/sof/ipc.c 39 */;
	struct sof_ipc_cmd_hdr cocci_id/* sound/soc/sof/ipc.c 331 */;
	void *cocci_id/* sound/soc/sof/ipc.c 288 */;
	struct snd_sof_ipc {
		struct snd_sof_dev *sdev;
		struct mutex tx_mutex;
		bool disable_ipc_tx;
		struct snd_sof_ipc_msg msg;
	} cocci_id/* sound/soc/sof/ipc.c 28 */;
	void cocci_id/* sound/soc/sof/ipc.c 21 */(struct snd_sof_dev *sdev,
						  u32 msg_cmd);
	struct sof_ipc_cmd_hdr *cocci_id/* sound/soc/sof/ipc.c 203 */;
	void cocci_id/* sound/soc/sof/ipc.c 20 */(struct snd_sof_dev *sdev,
						  u32 msg_id);
}

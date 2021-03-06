cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 958 */;
	struct ipu_image_convert_image *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 957 */;
	struct ipu_image_tile {
		u32 width;
		u32 height;
		u32 left;
		u32 top;
		u32 size;
		u32 stride;
		u32 rot_stride;
		u32 offset;
		u32 u_off;
		u32 v_off;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 94 */;
	const unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 856 */;
	struct ipu_image_tile *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 855 */;
	struct ipu_image_convert_dma_chan {
		int in;
		int out;
		int rot_in;
		int rot_out;
		int vdi_in_p;
		int vdi_in;
		int vdi_in_n;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 83 */;
	struct ipu_image_convert_dma_buf {
		void *virt;
		dma_addr_t phys;
		unsigned long len;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 77 */;
	enum ipu_image_convert_type{IMAGE_CONVERT_IN=0, IMAGE_CONVERT_OUT,} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 72 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 495 */;
	u32 *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 492 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 395 */;
	struct ipu_image *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 392 */;
	struct ipu_image_convert_dma_buf *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 364 */;
	struct completion cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2423 */;
	struct completion *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2413 */;
	ipu_image_convert_cb_t cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2376 */;
	enum ipu_ic_task cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2373 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2373 */;
	const struct ipu_image_pixfmt cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 232 */[];
	int cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2281 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2280 */;
	struct ipu_image_convert_run *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2279 */;
	struct ipu_image_convert_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2278 */;
	struct ipu_image_convert_chan *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2277 */;
	struct ipu_image_convert_ctx *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2275 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 2275 */;
	const struct ipu_image_convert_dma_chan cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 213 */[IC_NUM_TASKS];
	struct ipu_image_convert_priv {
		struct ipu_image_convert_chan chan[IC_NUM_TASKS];
		struct ipu_soc *ipu;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 208 */;
	enum ipu_image_convert_type cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1893 */;
	const struct ipu_image_convert_dma_chan *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1827 */;
	struct ipu_image_convert_chan {
		struct ipu_image_convert_priv *priv;
		enum ipu_ic_task ic_task;
		const struct ipu_image_convert_dma_chan *dma_ch;
		struct ipu_ic *ic;
		struct ipuv3_channel *in_chan;
		struct ipuv3_channel *out_chan;
		struct ipuv3_channel *rotation_in_chan;
		struct ipuv3_channel *rotation_out_chan;
		int out_eof_irq;
		int rot_out_eof_irq;
		spinlock_t irqlock;
		struct list_head ctx_list;
		struct list_head pending_q;
		struct list_head done_q;
		struct ipu_image_convert_run *current_run;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 179 */;
	struct ipuv3_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1625 */;
	irqreturn_t cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1564 */;
	void *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1564 */;
	struct ipu_image_convert_run cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1542 */;
	struct ipu_image_convert_ctx {
		struct ipu_image_convert_chan *chan;
		ipu_image_convert_cb_t complete;
		void *complete_context;
		struct ipu_image_convert_image in;
		struct ipu_image_convert_image out;
		struct ipu_ic_csc csc;
		enum ipu_rotate_mode rot_mode;
		u32 downsize_coeff_h;
		u32 downsize_coeff_v;
		u32 image_resize_coeff_h;
		u32 image_resize_coeff_v;
		u32 resize_coeffs_h[MAX_STRIPES_W];
		u32 resize_coeffs_v[MAX_STRIPES_H];
		struct ipu_image_convert_dma_buf rot_intermediate[2];
		int cur_buf_num;
		bool aborting;
		struct completion aborted;
		bool double_buffering;
		unsigned int num_tiles;
		unsigned int next_tile;
		unsigned int out_tile_map[MAX_TILES];
		struct list_head list;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 140 */;
	struct ipu_image_convert_priv cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 138 */;
	struct ipu_image_convert_chan cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 137 */;
	struct ipu_image_convert_ctx cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 136 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1289 */[2];
	struct ipu_image cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1288 */;
	dma_addr_t cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1287 */;
	enum ipu_rotate_mode cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1280 */;
	struct ipu_image_pixfmt {
		u32 fourcc;
		int bpp;
		int uv_width_dec;
		int uv_height_dec;
		bool planar;
		bool uv_swapped;
		bool uv_packed;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 126 */;
	struct list_head *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1239 */;
	struct ipu_image_convert_image {
		struct ipu_image base;
		enum ipu_image_convert_type type;
		const struct ipu_image_pixfmt *fmt;
		unsigned int stride;
		unsigned int num_rows;
		unsigned int num_cols;
		struct ipu_image_tile tile[MAX_TILES];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 111 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1095 */;
	const struct ipu_image_pixfmt *cocci_id/* drivers/gpu/ipu-v3/ipu-image-convert.c 1039 */;
}

/*
 *  ALSA driver for Echoaudio soundcards.
 *  Copyright (C) 2003-2004 Giuliano Pochini <pochini@shiny.it>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#define ECHOGALS_FAMILY
#define ECHOCARD_GINA20
#define ECHOCARD_NAME "Gina20"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_INPUT_GAIN
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	FALSE

#define PX_ANALOG_OUT	0	
#define PX_DIGITAL_OUT	8	
#define PX_ANALOG_IN	10	
#define PX_DIGITAL_IN	12	
#define PX_NUM		14

#define BX_ANALOG_OUT	0	
#define BX_DIGITAL_OUT	8	
#define BX_ANALOG_IN	10	
#define BX_DIGITAL_IN	12	
#define BX_NUM		14


#include <linux/delay.h>
#include <linux/init.h>
#include <linux/interrupt.h>
#include <linux/pci.h>
#include <linux/module.h>
#include <linux/firmware.h>
#include <linux/slab.h>
#include <sound/core.h>
#include <sound/info.h>
#include <sound/control.h>
#include <sound/tlv.h>
#include <sound/pcm.h>
#include <sound/pcm_params.h>
#include <sound/asoundef.h>
#include <sound/initval.h>
#include <asm/io.h>
#include <linux/atomic.h>
#include "echoaudio.h"

MODULE_FIRMWARE("ea/gina20_dsp.fw");

#define FW_GINA20_DSP	0

static const struct firmware card_fw[] = {
	{0, "gina20_dsp.fw"}
};

static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = {
	{0x1057, 0x1801, 0xECC0, 0x0020, 0, 0, 0},	
	{0,}
};

static struct snd_pcm_hardware pcm_hardware_skel = {
	.info = SNDRV_PCM_INFO_MMAP |
		SNDRV_PCM_INFO_INTERLEAVED |
		SNDRV_PCM_INFO_BLOCK_TRANSFER |
		SNDRV_PCM_INFO_MMAP_VALID |
		SNDRV_PCM_INFO_PAUSE |
		SNDRV_PCM_INFO_SYNC_START,
	.formats =	SNDRV_PCM_FMTBIT_U8 |
			SNDRV_PCM_FMTBIT_S16_LE |
			SNDRV_PCM_FMTBIT_S24_3LE |
			SNDRV_PCM_FMTBIT_S32_LE |
			SNDRV_PCM_FMTBIT_S32_BE,
	.rates = SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000,
	.rate_min = 44100,
	.rate_max = 48000,
	.channels_min = 1,
	.channels_max = 2,
	.buffer_bytes_max = 262144,
	.period_bytes_min = 32,
	.period_bytes_max = 131072,
	.periods_min = 2,
	.periods_max = 220,
};


#include "gina20_dsp.c"
#include "echoaudio_dsp.c"
#include "echoaudio.c"

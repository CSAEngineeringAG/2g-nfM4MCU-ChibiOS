/*
    ChibiOS/RT - Copyright (C) 2006-2007 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file templates/spi_lld.h
 * @brief SPI Driver subsystem low level driver header template
 * @addtogroup SPI_LLD
 * @{
 */

#ifndef _SPI_LLD_H_
#define _SPI_LLD_H_

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @brief Enables the mutual exclusion APIs on the SPI bus.
 */
#if !defined(SPI_USE_MUTUAL_EXCLUSION) || defined(__DOXYGEN__)
#define SPI_USE_MUTUAL_EXCLUSION    TRUE
#endif

#if SPI_USE_MUTUAL_EXCLUSION && !CH_USE_MUTEXES && !CH_USE_SEMAPHORES
#error "SPI_USE_MUTUAL_EXCLUSION requires CH_USE_MUTEXES and/or CH_USE_SEMAPHORES"
#endif

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief Driver state machine possible states.
 */
typedef enum {
  SPI_UNINIT = 0,
  SPI_IDLE = 1,
  SPI_ACTIVE = 2
} spistate_t;

/**
 * @brief Driver configuration structure.
 */
typedef struct {
  /**
   * @brief Clock pulses to be generated after initialization.
   */
  cnt_t                 spc_clkpulses;
  /* End of the mandatory fields.*/
} SPIConfig;

/**
 * @brief Structure representing a MAC driver.
 */
typedef struct {
  /**
   * @brief Driver state.
   */
  spistate_t            spd_state;
#if SPI_USE_MUTUAL_EXCLUSION || defined(__DOXYGEN__)
#if CH_USE_MUTEXES || defined(__DOXYGEN__)
  /**
   * @brief Mutex protecting the bus.
   */
  Mutex                 spd_mutex;
#elif CH_USE_SEMAPHORES
  Semaphore             spd_semaphore;
#endif
#endif /* SPI_USE_MUTUAL_EXCLUSION */
  /**
   * @brief Current configuration data.
   */
  const SPIConfig       *spd_config;
  /* End of the mandatory fields.*/
} SPIDriver;

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
  void spi_lld_init(void);
  void spi_lld_setup(SPIDriver *spip);
  void spi_lld_select(SPIDriver *spip);
  void spi_lld_unselect(SPIDriver *spip);
  void spi_lld_exchange(SPIDriver *spip, size_t n, void *rxbuf, void *txbuf);
#ifdef __cplusplus
}
#endif

#endif /* _SPI_LLD_H_ */

/** @} */

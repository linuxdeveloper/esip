/*
 * This file is part of esip.
 *
 * esip is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * esip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with esip.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ESCLI_H
#define ESCLI_H

#if defined(__cplusplus)
extern "C" {
#endif

/** @brief */
typedef struct es_cli_s es_cli_t;

es_status es_cli_init(es_cli_t **ppCtx,struct event_base  *pBase);

es_status es_cli_start(es_cli_t *pCtx);

es_status es_cli_stop(es_cli_t *pCtx);

es_status es_cli_deinit(es_cli_t *pCtx);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif // ESCLI_H

/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
#define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define TAPPING_TERM 125
#define TAPPING_TERM_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define COMBO_TERM 27
#define QUICK_TAP_TERM 0


// Enable just the Gradient and Ripple effects.
// #define PALETTEFX_GRADIENT_ENABLE
// #define PALETTEFX_FLOW_ENABLE
// #define PALETTEFX_RIPPLE_ENABLE
// #define PALETTEFX_SPARKLE_ENABLE
// #define PALETTEFX_VORTEX_ENABLE
// #define PALETTEFX_REACTIVE_ENABLE

// Or enable all effects with
// #define PALETTEFX_ENABLE_ALL_EFFECTS

// Enable just the Afterburn, Not Pink, and Phosphor palettes.
// #define PALETTEFX_AFTERBURN_ENABLE
// #define PALETTEFX_AMBER_ENABLE
// #define PALETTEFX_BADWOLF_ENABLE
// #define PALETTEFX_CARNIVAL_ENABLE
// #define PALETTEFX_CLASSIC_ENABLE
// #define PALETTEFX_DRACULA_ENABLE
// #define PALETTEFX_GROOVY_ENABLE
// #define PALETTEFX_NOTPINK_ENABLE
// #define PALETTEFX_PHOSPHOR_ENABLE
// #define PALETTEFX_POLARIZED_ENABLE
// #define PALETTEFX_ROSEGOLD_ENABLE
// #define PALETTEFX_SPORT_ENABLE
// #define PALETTEFX_SYNTHWAVE_ENABLE
// #define PALETTEFX_THERMAL_ENABLE
// #define PALETTEFX_VIRIDIS_ENABLE
// #define PALETTEFX_WATERMELON_ENABLE

// Or enable all palettes with
// #define PALETTEFX_ENABLE_ALL_PALETTES

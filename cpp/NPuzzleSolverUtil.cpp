/*
 * Copyright 2017 Bytes Club
 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <vector>

#include "NPuzzleSolverUtil.h"

NPuzzleSolver::NPuzzleSolver(
                const std::vector < std::vector<int> >&initial_state,
                const std::vector< std::vector<int> >&final_state) {
        this->initial_state = initial_state;
        this->final_state = final_state;
}

void NPuzzleSolver::find_solution() {
        // TODO(rudra): Add N Puzzle Solution
}

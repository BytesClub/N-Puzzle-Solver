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


#include <iostream>
#include <vector>

#include "NPuzzleSolverUtil.h"

int main() {
        std::vector<std::vector<int> > initial_state(3, std::vector<int> (3));
        std::vector<std::vector<int> > goal_state(3, std::vector<int> (3));

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        std::cin >> initial_state[i][j];
                }
        }

        int c = 0;
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        goal_state[i][j] = c++;
                }
        }

        NPuzzleSolver nPuzzleSolver(initial_state, goal_state);
        nPuzzleSolver.find_solution();

        return 0;
}
